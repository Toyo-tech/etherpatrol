#ifndef ICAPTUREFACTORY_H
#define ICAPTUREFACTORY_H
#include"ICapture.h"
#include<tr1/memory>


class ICaptureFactory
{
protected:
    virtual std::tr1::shared_ptr<ICapture> _CreateCaptureImplement() = 0;
public:
    ICaptureFactory();
    std::tr1::shared_ptr<ICapture> CreateCapture();
};

#endif // ICAPTUREFACTORY_H
