#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <experimental/algorithm>
#include <experimental/functional>

using namespace std;

void duplicate(vector<int> &vec){
    sort( vec.begin(), vec.end() );
    vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
}


int main()
{
    std::vector<int> b;
    std::string in = "troloELOOlol";
    std::string needle = "lo";
    for (std::string::iterator it = in.begin(); it != in.end(); ++it) {
                 auto t = std::experimental::search(it, in.end(),
                   std::experimental::make_boyer_moore_searcher(
                       needle.begin(), needle.end()));
                 if(t != in.end()){
                   b.push_back(t-in.begin());
                 }
	}


   duplicate(b);
   for(auto &n : b){
      std::cout << "String " << needle << "Found at " << n <<  std::endl;
   }
   return 0;
}
