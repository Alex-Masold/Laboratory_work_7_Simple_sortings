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

void select_sort(int a[], int n)
{
	int count, key;
	for (int i = 0; i < n - 1; i++)
	{
		count = a[i];
		key = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[key]) key = j;
		if (key != i)
		{
			a[i] = a[key];
			a[key] = count;
		}
		output_massive(a, n);
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
	select_sort(a, N);
	output_massive(a, N);
}