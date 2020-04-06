#include <iostream>

using namespace std;

int main() {
	int x, n, rest, result;
	n=0;
	cin >> x;
	for(int i=1; i<x;i++){
		if(x <= (1+i)*i/2){
			n=i;
			break;
		}
	}
	if(n%2==0){
	if(x == (1+n)*n/2)
		cout << n <<"/" << 1;
		else{
			n--;
			rest = x-(1+n)*n/2;
			cout << rest << "/" << n+2-rest;
		}
	}
	else{
		if(x == (1+n)*n/2)
			cout << 1 <<"/" << n;
		else{
			n--;
			rest = x-(1+n)*n/2;
			cout << n+2-rest << "/" << rest;
		}
	}
	return 0;
}
