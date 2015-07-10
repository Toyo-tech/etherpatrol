#ifndef ETHERCAPTUREFACTORY_H
#define ETHERCAPTUREFACTORY_H
#include"ICaptureFactory.h"
#include"EtherCapture.h"

using namespace std;

class EtherCaptureFactory : public ICaptureFactory
{
protected:
    std::tr1::shared_ptr<ICapture> _CreateCaptureImplement();
public:
    EtherCaptureFactory();
};

#endif // ETHERCAPTUREFACTORY_H
