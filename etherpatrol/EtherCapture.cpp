#include"EtherCapture.h"
#define BUFFER_SIZE 1518

//Set up Socket descripter for capturing ether flames.
bool EtherCapture::InitSocket(){
    m_socket = socket(PF_PACKET,SOCK_RAW,htons(ETH_P_ALL));

    if (m_socket == -1){
        return false;
    }
    else{
        return true;
    }
}


//Capture ether flames
uint8_t* EtherCapture::GetPacket(){
    uint8_t packetBuffer[BUFFER_SIZE];
    recv(m_socket,packetBuffer,sizeof(packetBuffer),0);
    return packetBuffer;
}
