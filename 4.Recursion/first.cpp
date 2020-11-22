
#include <iostream>
using namespace std;

void rev(int i, int a[],int n){
	if(i == n) return;
	else {
		rev(i+1,a,n);
		cout << a[i]<< " ";
	}

}

int main() {
	int n;
	cin >> n;
	int a[n+1];
	for(int i =0; i <n ;i++){
		cin >> a[i];
	}
	rev(0,a,n);


}
