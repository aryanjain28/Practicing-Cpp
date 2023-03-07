#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int index = 3;
    int arr1[10] = {1, 2, 3, 4, 9, 0};
    cout << "Array: " << arr1[index] << endl;

    int mArr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        mArr[i] = rand();
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Element at " << i << " " << mArr[i] << endl;
    }

    cout << "\n\n";

    int row = 3;
    int col = 3;
    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand();
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "matrix[" << i << "][" << j << "]: " << matrix[i][j] << endl;
        }
    }

    return 0;
}