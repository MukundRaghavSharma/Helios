#include "Future.h"
#include <cmath>

Future::Future(double underlying, double rate, double timeToExpiration):
    _underlying(underlying),
    _rate(rate),
    _timeToExpiration(timeToExpiration)
{
}

Future::~Future()
{
}

double Future::Price()
{
    return (_underlying * exp(_rate * (_timeToExpiration / 365.0)));
}
