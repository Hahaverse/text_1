//2023111359 �ְ���
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumbers(int inumbers[], int size);
void randomCounts(int inumbers[], int size, int counts[]);

int main()
{
    int i, size = 10;
    int counts[10] = { 0 };    // ����(0~9) �� ���� �� 
    int inumbers[10];
    srand((unsigned int)time(0));

    randomNumbers(inumbers, size);		// ������ �迭 �ʱ�ȭ
    randomCounts(inumbers, size, counts);	// ���� �� ���� ���

    // ���� �� ���� ���
    cout << "����: "<<endl;
    for (i = 0; i < size; i++)
        cout << setw(5) << inumbers[i];
    cout << endl << endl;


    // �迭 ���
    cout << "����: "<<endl;
    for (i = 0; i < size; i++)
        cout << setw(5) << i;
    cout << endl;

    cout <<"    -----------------------------------------------" << endl;

    cout << endl;
    for (i = 0; i < size; i++)
        cout << setw(5) << counts[i];
    cout << endl << endl;

    return 0;
}

// ������ �迭 �ʱ�ȭ 
void randomNumbers(int* pnumbers, int size)
{
    for (int i = 0; i < size; i++)
        *(pnumbers + i) = rand() % 10;
}

// ���� �� ���� ���
void randomCounts(int* pnumbers, int size, int* counts)
{
    for (int i = 0; i < size; i++)
        (*(counts + *(pnumbers + i)))++;
}