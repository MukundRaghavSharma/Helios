class Instrument
{
public:
    virtual ~Instrument(); 
    virtual double NPV() const =0;
    virtual bool isExpired() const =0;
    virtual double errorEstimate() const=0;

private:

};
