#include <iostream>
#include "event.hpp"

#ifndef CALENDER
#define CALENDER

class calender{

    public:
    void refresh();
    
    calender(events);
    
    ~calender() { std::cout << "days have been passed!"; }
    
    private:
    events event;
};
#endif