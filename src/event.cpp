#include "../include/calender.hpp"

#include <iostream>
#include<stdexcept>

using namespace std;


void events::add_event(string name , unsigned long int start , unsigned long int end)
{
   
    
        if(start < 1 || end > 30)
            {
                cerr<<"out of range \n";
                return;
            }   

        
}