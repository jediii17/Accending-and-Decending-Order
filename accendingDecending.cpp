#include <iostream>
using namespace std;

int main()
{
    int num[100], n;
    int i, j, man, cnt;
    cout << "enter n for the numbers you want to sort: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cnt++;
        cout << "enter number [" << cnt << "] : ";
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (num[i] < num[j])
            {
                man = num[i];
                num[i] = num[j];
                num[j] = man;
            }
        }
    }
    cout << "\n=Ascending Order= " << endl;
    for (i = 0; i < n; i++)
    {
        cout << " " << num[i] << endl;
        ;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (num[i] > num[j])
            {
                man = num[i];
                num[i] = num[j];
                num[j] = man;
            }
        }
    }
    cout << "=Descending Order=" << endl;
    for (i = 0; i < n; i++)
    {
        cout << " " << num[i] << endl;
    }
    return 0;
}