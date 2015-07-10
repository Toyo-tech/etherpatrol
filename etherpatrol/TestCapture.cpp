#include "TestCapture.h"

TestCapture::TestCapture()
{

}

bool TestCapture::InitSocket(){
    return true;
}

uint8_t* TestCapture::GetPacket(){
    uint8_t TestPacket[64];
    for(int i=0;i<64;i++){
        TestPacket[i] =1;
    }
    return TestPacket;
}
