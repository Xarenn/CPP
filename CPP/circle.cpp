#include <iostream>
#include <math.h>
#include <regex>

using namespace std;

int main(void){

  // x^2 + y^2 + (int)x + (int)y + c = 0 
  
  int circle_radius = 10;
    float console_ratio = 3.14;
    float a = console_ratio*circle_radius;
    float b = circle_radius;

    for (int y = -circle_radius; y <= circle_radius; y++)
    {
        for (int x = -console_ratio*circle_radius; x <= console_ratio*circle_radius; x++)
        {
            float d = (x/a)*(x/a) + (y/b)*(y/b);
            if (d > 0.90 && d < 1.1)
            {
              cout << d << endl;
            //    cout << "*";
            }
            else
            {
              cout << d << endl;
              //   cout << " ";
            }
        }
        cout << endl;
    } 

 return 0;

}
