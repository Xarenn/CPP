// countstring.cpp : Defines the entry point for the console application.
//
#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>

using namespace std;


auto main() -> int
{
	map<string, int> words;
	vector<string> v { "cebulson","cebulson","cebulson","ba","cc","dd","ba","dow"};
        for(int i = 0; i < v.size(); ++ i){
  
          words[v[i]]++;

        }
	auto it = max_element(words.cbegin(), words.cend(), [](auto l, auto r) {
		return l.second < r.second;
	});
        auto it2 = max_element(words.cbegin(), words.cend(), [](auto l, auto r) {
		return l.second > r.second;
	});
        cout << "Most often occur word << endl" << endl;
	cout << it->first << " "  << it->second << endl;
        cout << "Least likely occur word << endl" << endl;
        cout << it2->first << " "  << it2->second << endl;

        vector<pair<string, int>> vec;
        for(auto &pair : words){
          vec.push_back(pair);
        }
        auto cmp = [](std::pair<string,int> const & a, std::pair<string,int> const & b){ 
         return a.second != b.second?  a.second > b.second : a.first > b.first;
        };
        sort(vec.begin(), vec.end(), cmp);

        cout << " ALL ---------------------> " << endl;
        for(const auto &pair : vec){
          cout << pair.first << " " << pair.second << endl;
        }
	system("PAUSE");

}

