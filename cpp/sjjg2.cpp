#include <iostream>
using namespace std;

void RRotate(int a[], int k){
	for(int j = 0; j < 10; j++){
		a[j] = (a[j] + k) % 10;
        a[j] = a[j] == 0 ? 10 : a[j];
	}
}
int main()
{
	int i, k, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "循环移动前:" << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << "循环移动多少位(0-10):" << endl;
	cin >> k;

	RRotate(a, k);

	cout << "循环移动后:" << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
}

