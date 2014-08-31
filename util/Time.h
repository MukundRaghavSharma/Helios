#include <ctime>

#ifndef FOREX_TIME_H
#define FOREX_TIME_H

class Time
{
public:
    Time();
    ~Time();

private:
    time_t currentTime;
};


#endif
