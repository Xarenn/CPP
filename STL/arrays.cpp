#include <iostream>


void f(int (&r)[4]){
  for(unsigned i = 0; i < 4; ++i){
  
    std::cout << r[i] << std::endl;

  }
}

template<class T, int N>
void f2(T (&r)[N]){

  for(unsigned i = 0; i < 4; ++i){
  
    std::cout << r[i] << std::endl;

  }

}

auto main() -> int{


  int tab[4] {1,3,5,6};
  f2(tab);
  return 0;
}
