#ifndef ETHERCAPTURE
#define ETHERCAPTURE
#include"ICapture.h"
#include<sys/param.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<sys/fcntl.h>

#include<arpa/inet.h>
#include<linux/if_ether.h>
#include<net/ethernet.h>


class EtherCapture : public ICapture
{
private:
    int m_socket;

public:
    bool InitSocket();
    uint8_t* GetPacket();
};

#endif // ETHERCAPTURE

