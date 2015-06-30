#include "MACChecker.h"
#include <string.h>
#include<sstream>


MACChecker::MACChecker()
{
}

//check if parameter packet's MAC address is in whitelist or not.
bool MACChecker::IsOK(uint8_t* packet){

    //extract ether header from packet
    ether_header etherHead;
    memcpy(&etherHead,packet,sizeof(struct ether_header));

    //check MAC address and set m_CheckInformation results when MAC address doesn't match.
    if (_IsInWhitelist(&m_SourceMACList , (etherHead.ether_shost))){
        if(_IsInWhitelist(&m_DestMACList , (etherHead.ether_dhost))){
            return true;
        }

        std::stringstream ss;

        ss << "不正なDestMACアドレス ";

        for(int i =0;i<ETHER_ADDR_LEN;i++){
            if(i != 0){
                ss << ":";
            }
            ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(etherHead.ether_dhost[i]);
        }
        ss << "を検知しました。";

        m_CheckInformation = ss.str();

        return false;
    }

    std::stringstream ss;

    ss << "不正なSourceMACアドレス ";

    for(int i =0;i<ETHER_ADDR_LEN;i++){
        if(i != 0){
            ss << ":";
        }
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(etherHead.ether_shost[i]);
    }
    ss << "を検知しました。";

    m_CheckInformation = ss.str();

    return false;
}

//return check Information
std::string MACChecker::GetCheckInformation(){
    return m_CheckInformation;
}


bool MACChecker::_IsInWhitelist(std::vector<MACAddr_t>* _whiteFrame,uint8_t _frame[ETHER_ADDR_LEN]){

    //create iterator
    std::vector<MACAddr_t>::iterator itr;
    itr = _whiteFrame->begin();

    bool isWhite = false;

    //compare extracted MAC address with each MAC address in whitelist
    while(itr != _whiteFrame->end()){

        //compare each MAC address factor
        for(int i = 0;i < ETHER_ADDR_LEN;i++){
            //if factor of MAC address doesn't match with refference MAC address,break for-loop.
            if (_frame[i] != itr->Factor[i]){
                break;
            }
            //when every factor match with refference MAC address, change isWhite flag "true"
            if(i == ETHER_ADDR_LEN -1){
                isWhite = true;
            }
        }
        itr++;
        if (isWhite == true){
            break;
        }
    }
    return isWhite;
}


