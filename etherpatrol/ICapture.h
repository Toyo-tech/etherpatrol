#ifndef ICAPTURE
#define ICAPTURE
#include<arpa/inet.h>

class ICapture{
public:
    ICapture();
    virtual bool InitSocket() =0;
    virtual uint8_t* GetPacket()=0;
};

#endif // ICAPTURE

