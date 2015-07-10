#ifndef MACCHECKERFACTORY_H
#define MACCHECKERFACTORY_H
#include"ICheckerFactory.h"
#include"MACChecker.h"

class MACCheckerFactory
{
protected:
    std::tr1::shared_ptr<IChecker> _CreateCheckerImplement();
public:
    MACCheckerFactory();
};

#endif // MACCHECKERFACTORY_H
