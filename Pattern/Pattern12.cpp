#include <iostream>
#include <string>
//pattern
using namespace std;
int main() {
	int row, column, no = 1;
	cout << "Enter no of rows : ";cin >> row;
	/*cout << "Enter no of columns : ";cin >> column;*/
	for (int i = 1;i <= row;i++) {
		for (int j = 1;j <= i;j++) {
			cout << no << " ";
			no++;
		}
		cout << endl;
	}
	return 0;
}