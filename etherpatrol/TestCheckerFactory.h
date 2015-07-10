#ifndef TESTCHECKERFACTORY_H
#define TESTCHECKERFACTORY_H

#include"ICheckerFactory.h"
#include"TestChecker.h"

class TestCheckerFactory
{
protected:
    std::tr1::shared_ptr<IChecker> _CreateCheckerImplement();
public:
    TestCheckerFactory();
};

#endif // TESTCHECKERFACTORY_H
