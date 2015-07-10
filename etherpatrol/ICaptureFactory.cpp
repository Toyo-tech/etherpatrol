#include "ICaptureFactory.h"

ICaptureFactory::ICaptureFactory()
{

}

//factory method
std::tr1::shared_ptr<ICapture> ICaptureFactory::CreateCapture(){
    std::tr1::shared_ptr<ICapture> capture = _CreateCaptureImplement();

    return capture;
}
