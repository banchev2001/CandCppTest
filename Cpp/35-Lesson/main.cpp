
// inline function
#include <iostream>
using namespace std;

/*
Пример при който се показва функции, който се извикват без инструкция за прескачане
inline function
*/
 int PoundToKg(int pound){

    return pound * 3;
};

int main()
{
    
    int Kg;

    Kg = PoundToKg(20);
 
  
    return 0;
}

