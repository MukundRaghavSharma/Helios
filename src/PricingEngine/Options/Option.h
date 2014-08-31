#ifndef OPTION_H
#define OPTION_H

#include "../Instrument.h"

class Option : public Instrument
{
    virtual ~Options();
    virtual double NPV() const =0;
    virtual bool isExpiration() const =0;
    virtual double errorEstimate() const =0;
};

#endif
