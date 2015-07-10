#include "ICheckerFactory.h"

ICheckerFactory::ICheckerFactory()
{

}

std::tr1::shared_ptr<IChecker> ICheckerFactory::CreateChecker(){
    std::tr1::shared_ptr<IChecker> checker = _CreateCheckerImplement();
    return checker;
}
