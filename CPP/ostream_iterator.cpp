#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(void){

  vector<int> V {1,4,5,6,3,2,1,66};
  copy(V.begin(),V.end(), ostream_iterator<int>(cout, "\n"));


  vector<int> vv;
  copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(vv));

  copy(vv.begin(),vv.end(), ostream_iterator<int>(cout, "\n"));
  return 0;
}
