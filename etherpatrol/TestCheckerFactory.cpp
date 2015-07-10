#include "TestCheckerFactory.h"

TestCheckerFactory::TestCheckerFactory()
{

}

std::tr1::shared_ptr<IChecker> TestCheckerFactory::_CreateCheckerImplement(){
    return std::tr1::shared_ptr<IChecker>(new TestChecker());
}
