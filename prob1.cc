#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int changed_bit(long n) {
	int r = 0;
	for(long i=0; i<64; i++) r += n/pow(2,i);
	return r;
}

int main(int ac, char** v)
{
	ifstream f(v[1]);
	int c, x, y;
	f >> c;
	int sum = 0;
	for(int i=0; i<c; i++) {
		f >> x >> y;
		cout << changed_bit(y) - changed_bit(x) << endl;
	}
}
