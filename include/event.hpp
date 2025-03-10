#ifndef EVENT_IG
#define EVENT_IG

#include <string>

class events{

    private:
    std::string name;
    unsigned long int start_time;
    unsigned long int end_time;
    
    public:
    void add_event(string , unsigned long int , unsigned long int);
    ~events();

     
};
#endif