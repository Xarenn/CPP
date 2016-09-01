#include <iostream>
#include <vector>

using namespace std;
template<typename Cont, typename Pred>
int countt(const Cont& c, Pred pred) {
	int nm = 0;
	for (const auto &n : c) {
		if (pred(n)) {
			nm = n;
			if (nm > n) {
				nm = n;
			}
		}
	}
	return nm;
}

template<class T, typename Cont, typename Pred>
vector<T> countt2(const Cont& c, Pred pred) {
	vector<T> vec;
	for (const auto &n : c) {
		if (pred(n)) {
			vec.push_back(n);
		}
	}
	return vec;
}

void checknum2(vector<int> &v, int x) {
	vector<int> vec = countt2<int>(v, [&](int a) { return a < x; });
	for (auto &n : vec) {
		cout << n << endl;
	}
}
void checknum(const vector<int> &v, int x) {
	cout << "Liczba mniejsza od " << x << " to " << countt(v, [&](int a) { return a < x; }) << endl;
}


int main(void) {


	vector<int> a{ 1,4,5,3,2,11,3,3 };
        checknum(a, 5);
	checknum2(a, 6);
	system("PAUSE");
	return 0;

}
