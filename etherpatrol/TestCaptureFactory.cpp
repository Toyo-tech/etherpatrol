#include "TestCaptureFactory.h"

TestCaptureFactory::TestCaptureFactory()
{

}

std::tr1::shared_ptr<ICapture> TestCaptureFactory::_CreateCaptureImplement(){
    return std::tr1::shared_ptr<ICapture>(new TestCapture());
}
