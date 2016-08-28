/*
	Exe_438: Tính tổng các phần tử thuộc ma trận tam giác trên(không tính đường chéo) trong ma trận vuông các số thực
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Input(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Output(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << setw(4) << a[i][j] ;
		}
		cout << endl;
	}
}


void Result(int a[][100], int m, int n)
{	
	int sum = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			sum += a[i][j];
		}
	}
	cout << sum;
}

int main()
{
	int a[100][100];
	int n;
	cout << "Input n: ";
	cin >> n;

	Input(a, n, n);
	Output(a, n, n);
	Result(a, n, n);
	
	return 0;
}