#include<iostream>

#define DEBUG_MODE
//#define EXPERIMENTAL_UI
int main(){
    #if defined(DEBUG_MODE)
    std::cout << "Debug Mode Enabled\n";
#elifdef EXPERIMENTAL_UI
    std::cout << "Experimental UI Active\n";
#else
    std::cout << "Normal Mode\n";
#endif
 return 0; 
}
