#ifndef MACCHECKER_H
#define MACCHECKER_H
#include"IChecker.h"
#include<net/ethernet.h>
#include<vector>
#include <iomanip>


typedef struct MACAddr{
    uint8_t Factor[ETHER_ADDR_LEN];
}MACAddr_t;

class MACChecker : public IChecker
{
private:
    std::string m_CheckInformation;
    std::vector<MACAddr_t>  m_SourceMACList;
    std::vector<MACAddr_t> m_DestMACList;
public:
    MACChecker();
    bool IsOK(uint8_t* packet);
    std::string GetCheckInformation();
    bool _IsInWhitelist(std::vector<MACAddr_t>* _whiteFrame,uint8_t _frame[ETHER_ADDR_LEN]);
};

#endif // MACCHECKER_H
