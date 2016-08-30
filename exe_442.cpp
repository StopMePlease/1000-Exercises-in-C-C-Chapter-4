/*
	Exe_442: Tính tổng các phần tử chẵn nằm trên biên ma trận vuông nguyên
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Input(int a[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Output(int a[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << setw(4) << a[i][j] ;
		}
		cout << endl;
	}
}


void Result(int a[][100], int n)
{	
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[0][i];
		sum += a[n - 1][i];
	}
	for(int i = 1; i < n - 1; i++)
	{
		sum += a[i][n - 1];
		sum += a[i][0];
	}
	
	cout << sum;
}

int main()
{
	int a[100][100];
	int n;
	cout << "Input n: ";
	cin >> n;

	Input(a, n);
	Output(a, n);
	Result(a, n);
	
	return 0;
}