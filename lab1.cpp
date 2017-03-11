#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(1) {
		cout << n;	
		if(n==1) {
			cout << endl;
			break;
		} else {
			cout << " ";
			n = (n%2==1)?3*n+1:n/2;
		}	
	}
	return 0;
}
