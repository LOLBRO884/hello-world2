#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int A[5][5] = {};
    srand(time(NULL));
    cout << "Первоначальная матрица:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            A[i][j] = -100 + rand() % (201);
            cout << setw(4) << A[i][j];
        }
		cout << endl;
    }

    cout << endl << "Транспонированная матрица:" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << setw(4) << A[j][i];
        }
        cout << endl;
    }
	cout << "Hello world!" << endl;

    system("pause");
    return 0;
}