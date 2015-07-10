#ifndef TESTCAPTUREFACTORY_H
#define TESTCAPTUREFACTORY_H
#include"ICaptureFactory.h"
#include"TestCapture.h"

class TestCaptureFactory
{
protected:
    std::tr1::shared_ptr<ICapture> _CreateCaptureImplement();
public:
    TestCaptureFactory();
};

#endif // TESTCAPTUREFACTORY_H
