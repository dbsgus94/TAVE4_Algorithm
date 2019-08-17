#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int n;
	int k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	while (n--){
		for (int i = 1; i < k; i++) {
			int num = q.front();
			q.pop();
			q.push(num);
		}
		if (!(n == 0)) {
			cout << q.front() << ", ";
		}
		else {
			cout << q.front();
		}
		q.pop();
	}
	cout << ">";
}