#include <iostream>

using namespace std;
int hieu(int a, int b) {
	return a - b;
}
int tong(int a, int b){
	return a + b;
}
int tich(int a, int b){
	return a * b ;
}
float thuong(int a, int b);

boolean sochinhphuong (int a);

float thuong(int a, int b) {
	if (b != 0) {
	 return -1;
	}
	return a/b;
}
bool checkChanLe(int n){
	if(n%2==0)
		cout<<n<<" la so chan."
	else cout<<n<<" la so le."
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	system("pause");
	return 0;
}
