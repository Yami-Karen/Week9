#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* c = &n;
	cout << n;
	delete c;
	cout << n;
	//Vùng nhớ của biến địa phương mà con trỏ đang trỏ tới sẽ bị giải phóng, gây thất thoát dữ liệu
	return 0;
}