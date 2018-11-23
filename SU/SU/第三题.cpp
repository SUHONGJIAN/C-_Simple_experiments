#include <iostream>
using namespace std;
void BubbleSort();
int main() {
	BubbleSort();
}

void BubbleSort() {
	int i, j, temp;
	int *data = new int[10];
	cout << "ÇëÊäÈë10¸ö´ıÅÅĞòÊı×Ö£º"<<endl;
	for (i = 0; i < 10; i++) {
		cin >> data[i];
	}
	//data[0] = 41; data[1] = 67; data[2] = 34; data[3] = 0; data[4] = 69; data[5] = 24; data[6] = 78; data[7] = 58; data[8] = 62; data[9] = 64;
	for ( i = 1; i < 10; i++)
	{
		for ( j = 0; j < 10-i; j++)
		{
			if (data[j] > data[j+1])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	cout << endl<<"ÅÅĞò½á¹û£º"<<endl;
	for (i = 0; i < 10; i++)
		cout << data[i]<<" ";
	cout << endl;
	system("pause");
	delete []data;
}