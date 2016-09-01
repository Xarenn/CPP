#include <initializer_list>
#include <iostream>
#include <string>
template<class T>
struct A{

  A(std::initializer_list<T>) { std::cout << "3"; }
};

int main(void){

  A<int> a{1,2,3,4}; 
  return 0;
}
