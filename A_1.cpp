#include <iostream>
using namespace std;
const char* concat(const char* s1, const char* s2)
{
	char* s = new char;
	int t = 0;
	while (*(s1 + t) != '\0') t++;
	int n = t;
	t = 0;
	while (*(s2 + t) != '\0') t++;
	for (int i = 0; i < n; i++) *(s + i) = *(s1 + i);
	for (int i = 0; i < t; i++) *(s + n + i) = *(s2 + i);
	*(s + n + t) = '\0';
	return s;
}
int main()
{
	char* s1 = new char;
	char* s2 = new char;
	cin >> s1;
	cin >> s2;
	const char* result = concat(s1, s2);
	cout << result;
	return 0;
}