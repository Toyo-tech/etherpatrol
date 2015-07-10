#include "MACCheckerFactory.h"

MACCheckerFactory::MACCheckerFactory()
{

}

std::tr1::shared_ptr<IChecker> MACCheckerFactory::_CreateCheckerImplement(){
    return std::tr1::shared_ptr<IChecker>(new MACChecker());
}

