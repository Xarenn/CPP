#include <iostream>
#include <time.h>
#include <windows.h>

int main(void){
  srand(10);

#define R rand()%10

  int c[] = {R,R,R,R,R,R};
  for(int i = 0; i<6;++i){
    std::cout << c[i] << std::endl;
  }


   
 // std::cout << GetTickCount() << std::endl;
 // std::cout << (double)GetTickCount()/(1000*60) << std::endl;
 // std::cout << (double)GetTickCount()/(1000*3600) << std::endl;
  return 0;
}

// 1,9,2,4,7,6
// 3,9,3,1,8,5
