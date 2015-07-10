#ifndef TESTCHECKER_H
#define TESTCHECKER_H
#include"IChecker.h"

class TestChecker : public IChecker
{
public:
    TestChecker();
    bool IsOK(uint8_t *packet);
    std::string GetCheckInformation();
};

#endif // TESTCHECKER_H
