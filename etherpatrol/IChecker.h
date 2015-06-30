#ifndef ICHECKER_H
#define ICHECKER_H
#include<arpa/inet.h>
#include<string>

class IChecker
{
public:
    IChecker();
    virtual bool IsOK(uint8_t* packet) = 0;
    virtual std::string GetCheckInformation() = 0;
};

#endif // ICHECKER_H
