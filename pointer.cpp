//数组指针初探
#include<iostream>
using namespace std;
int main() {
	int a[3] = {1,2,3};
	int *p = a;
	cout << "p-"<<p<<endl;
	cout << "p[0]-"<<p[0]<<endl;
	cout <<"*p-" <<*p<<endl;

	system("pause");
	return 0;
	

}
