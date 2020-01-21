#include<bits/stdc++.h>
using namespace std;

int Cltz_Cnjtr(int n) {
	
	if(n == 1) {
		return 0;
	}
	else {
		if(n%2 == 0) {
			return 1 + Cltz_Cnjtr(n/2);
		}
		else {
			return 1 + Cltz_Cnjtr((3*n)+1);
		}
	}
}

int main() {
	int n,count;
	cin>>n;
	count = Cltz_Cnjtr(n);
	cout<<count;
	return 0;
}
