#include <ctime>
#include <iostream>

using namespace std;

int main() 
{
    cout << __TIMESTAMP__ << endl;
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    std::cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << std::endl;
}
