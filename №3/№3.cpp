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

void shake_sort(int a[], int N)
{
    int left = 0, right = N - 1; // левая и правая границы сортируемой области массива
    int flag = 1;  // флаг наличия перемещений
    // Выполнение цикла пока левая граница не сомкнётся с правой
    // и пока в массиве имеются перемещения
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i < right; i++)  //двигаемся слева направо
        {
            if (a[i] > a[i + 1]) // если следующий элемент меньше текущего,
            {             // меняем их местами
                double t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                flag = 1;      // перемещения в этом цикле были
            }
        }
        right--; // сдвигаем правую границу на предыдущий элемент
        for (int i = right; i > left; i--)  //двигаемся справа налево
        {
            if (a[i - 1] > a[i]) // если предыдущий элемент больше текущего,
            {            // меняем их местами
                double t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                flag = 1;    // перемещения в этом цикле были
            }
        }
        left++; // сдвигаем левую границу на следующий элемент
        output_massive(a, N);
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
	shake_sort(a, N);
	output_massive(a, N);
}