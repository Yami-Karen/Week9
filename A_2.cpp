#include <iostream>
using namespace std;
int main()
{
	int* p = new int;
	int* p2 = p;
	// cấp phát bằng một con trỏ đã cấp phát dễ gây thất thoát dữ liệu
	*p = 10;
	delete p; // do p2 và p đang trỏ đến cùng một vị trí, giải phóng p dẫn đến mất dữ liệu, p2 không thể in ra kết quả chính xác
	cout << *p2;
	delete p2;
	return 0;
}