#include <iostream>
using namespace std;
int main()
{
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a';
	a[9] = '\0';
	cerr << "a: " << "-" << a << "-" << endl;
	cerr << "c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;
	//do bộ nhớ của c được cấp cùng vị trí với a và lớn hơn a nên khi giải phóng c đã đồng thời giải phóng a, gây thất thoát dữ liệu. Lệnh cerr thứ 3 truy cập ngoài vùng
	return 0;
}