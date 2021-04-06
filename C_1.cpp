#include <iostream>
using namespace std;
char* reverse(const char* s)
{
	char* f = new char;
	int t = 0;
	while (s[t] != '\0') t++;
	for (int i = 0; i < t; i++) *(f + i) = *(s + i);
	for (int i = 0; i < t/2; i++)
	{
		char c = *(f + i);
		*(f + i) = *(f + t - i - 1);
		*(f + t - i - 1) = c;
	}
	*(f + t) = '\0';
	return f;
}
char* delete_c(const char* s,char c)
{
	char* f = new char;
	int t = 0;
	while (s[t] != '\0') t++;
	int n = 0;
	for (int i = 0; i < t; i++)
	if (*(s + i) != c)
	{
		*(f + n) = *(s + i);
		n++;
	}
	*(f + n) = '\0';
	return f;
}
char* pad_right(const char* s, int n)
{
	char* f = new char;
	int t = 0;
	while (s[t] != '\0') {*(f + t) = *(s + t); t++;}
	if (t < n) {for (int i = t; i < n; i++) *(f + i) = '_'; *(f + n) = '\0';}
	else *(f + t) = '\0';
	return f;
}
char* pad_left(const char* s, int n)
{
	char* f = new char;
	int t = 0;
	while (s[t] != '\0') { *(f + t) = *(s + t); t++; }
	if (t < n)
	{
		for (int i = n - t; i < n; i++) *(f + i) = *(s + i - (n - t));
		for (int i = 0; i < n - t; i++) *(f + i) = '_';
		*(f + n) = '\0';
	}
	else *(f + t) = '\0';
	return f;
}
char* truncate(const char* s, int n)
{
	char* f = new char;
	int t = 0;
	while (s[t] != '\0') { *(f + t) = *(s + t); t++; }
	*(f + n) = '\0';
	return f;
}
char* trimleft(const char* s)
{
	char* f = new char;
	int t = 0;
	while (s[t] != '\0') t++; 
	int n = 0;
	while (s[n] == '_') n++;
	for (int i = n; i < t; i++) *(f + i - n) = *(s + i);
	*(f + t - n) = '\0';
	return f;
}
char* trimright(const char* s)
{
	char* f = new char;
	int t = 0;
	while (s[t] != '\0') t++;
	int n = t - 1;
	while (s[n] == '_') n--;
	for (int i = 0; i < n; i++) *(f + i) = *(s + i);
	*(f + n) = '\0';
	return f;
}
int main()
{
	char* s = new char;
	cin >> s;
	char* result;
	result = reverse(s);
	cout << result << endl;
	char c;
	cin >> c;
	result = delete_c(s, c);
	cout << result << endl;
	int n;
	cin >> n;
	result = pad_right(s, n);
	cout << result << endl;
	cin >> n;
	result = pad_left(s, n);
	cout << result << endl;
	cin >> n;
	result = truncate(s, n);
	cout << result << endl;
	result = trimleft(s);
	cout << result << endl;
	result = trimright(s);
	cout << result << endl;
	return 0;
}