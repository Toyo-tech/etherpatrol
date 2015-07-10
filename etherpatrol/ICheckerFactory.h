#ifndef ICHECKERFACTORY_H
#define ICHECKERFACTORY_H
#include "IChecker.h"
#include<tr1/memory>

class ICheckerFactory
{
protected:
    virtual std::tr1::shared_ptr<IChecker> _CreateCheckerImplement() = 0;
public:
    ICheckerFactory();
    std::tr1::shared_ptr<IChecker> CreateChecker();
};

#endif // ICHECKERFACTORY_H
