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
    int counts[10] = { 0 };    // 숫자(0~9) 별 출현 빈도 
    int inumbers[10];
    srand((unsigned int)time(0));

    randomNumbers(inumbers, size);		// 난수로 배열 초기화
    randomCounts(inumbers, size, counts);	// 숫자 별 개수 계산

    // 숫자 별 개수 출력
    cout << "난수: "<<endl;
    for (i = 0; i < size; i++)
        cout << setw(5) << inumbers[i];
    cout << endl << endl;


    // 배열 출력
    cout << "개수: "<<endl;
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

// 난수로 배열 초기화 
void randomNumbers(int* pnumbers, int size)
{
    for (int i = 0; i < size; i++)
        *(pnumbers + i) = rand() % 10;
}

// 숫자 별 개수 계산
void randomCounts(int* pnumbers, int size, int* counts)
{
    for (int i = 0; i < size; i++)
        (*(counts + *(pnumbers + i)))++;
}
