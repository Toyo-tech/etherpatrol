#include "EtherCaptureFactory.h"

EtherCaptureFactory::EtherCaptureFactory()
{

}

//Create EtherCapture class object
std::tr1::shared_ptr<ICapture> EtherCaptureFactory::_CreateCaptureImplement(){
    return std::tr1::shared_ptr<ICapture>(new EtherCapture());
}
