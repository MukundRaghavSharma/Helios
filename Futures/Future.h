#ifndef FUTURE_H
#define FUTURE_H

class Future
{

public:    
    Future(double underlying, double rate, double timeToExpiration);
    virtual ~Future();
    virtual double Price();

private:
    double _underlying;
    double _rate;
    double _timeToExpiration;
};

#endif
