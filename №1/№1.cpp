#include <iostream>
using namespace std;

void input_massive(int a[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
}
void output_massive(int a[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << a[i] << ' ';
	}
}

void ins_sort(int data[], int lenD)
{
	int key = 0;
	int i = 0;
	for (int j = 1; j < lenD; j++) {
		key = data[j];
		i = j - 1;
		while (i >= 0 && data[i] > key) {
			data[i + 1] = data[i];
			i = i - 1;
			data[i + 1] = key;
		}
		output_massive(data, lenD);
		cout << endl;
	}
}


int main()
{
	int* a;
	int N;

	cin >> N;
	a = new int[N];

	input_massive(a, N);
	ins_sort(a, N);
	output_massive(a, N);
}