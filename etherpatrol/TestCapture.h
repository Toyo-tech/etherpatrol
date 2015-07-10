#ifndef TESTCAPTURE_H
#define TESTCAPTURE_H
#include"ICapture.h"

class TestCapture:public ICapture
{
public:
    TestCapture();
    bool InitSocket();
    uint8_t* GetPacket();
};

#endif // TESTCAPTURE_H
