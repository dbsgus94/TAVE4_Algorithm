#include <iostream>
#include <string>
#include <stack>

using namespace std;
string str;

int stick (const string& str) {
	int count = 0;
	stack<char> s;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else {
			s.pop();
			if (str[i - 1] == '(') {
				count += s.size();
			}
			else {
				count++;
			}
		}
	}
	return count;
}

int main() {
	cin >> str;
	cout << stick(str);
}

