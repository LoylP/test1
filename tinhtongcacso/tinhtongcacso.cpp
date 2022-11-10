
/*Users inputs integer numbers, one by one,
until he / she inputs 0 to stop(0 is not mention in inputted list)
.You are asked to implement a program to print out 
the sum of all number in the longest ascending or descending sub
- sequence from the inputted list.If there are 2 or more subsequences 
of the same size, print out the bigger sum.
Ex: INPUT: 1 2 4 2 3 0 OUTPUT 
: 7 Explain : 1 2 4 is the longest ascending sub - sequence with length 3.*/
#include <iostream>
using namespace std;
void nhapmang(int s[], int n)
{
    for (int i = 0;i < n;i++)
    {
        cout << "Nhap vao gia tri cua s[" << i << "] = " << "\t";
        cin >> s[i];
        if (s[i] == 0)
            break;
    }
}
void xuatmang(int s[], int n)
{
    for (int i = 0;i < n;i++)
    {
        cout << s[i] << " ";
        if (s[i] == 0)
            break;
    }
    cout << endl;
}
int summax1(int soluong1, int soluong2, int soluong3, int soluong4, int soluong5, int sum1, int sum2, int sum3, int sum4, int sum5)
{
    int summax = sum1;
    if (soluong1 > soluong2 && soluong1 > soluong3 && soluong1 > soluong4 && soluong1 > soluong5)
    {
        summax = sum1;
    }
    else
    {
        if (soluong2 > soluong3 && soluong2 > soluong4 && soluong2 > soluong5)
        {
            summax = sum2;
        }
        else
        {
            if (soluong3 > soluong4 && soluong3 > soluong5)
            {
                summax = sum3;
            }
            else
            {
                if (soluong4 > soluong5)
                {
                    summax = sum4;
                }
                else
                {
                    summax = sum5;
                }
            }
        }
    }
    cout << "Tong cua day co so luong tang dan nhieu nhat la: " << summax << "\n";
    return summax;
}
int tachham(int s[], int n)
{
    int soluong1 = 0;
    int soluong2 = 0;
    int soluong3 = 0;
    int soluong4 = 0;
    int soluong5 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int summax = 0;
    cout << "Cac so theo thu tu tang dan la: ";
    for (int i = 0; i < n;i++)
    {
        if (s[i] < s[i + 1])
        {
            cout << s[i] << " ";
            soluong1++;
            sum1 += s[i];
        }
        else
        {
            cout << s[i] << " " << endl;
            soluong1++;
            sum1 += s[i];
            cout << "so cac so trong day la: " << soluong1 <<"\n" << endl;
            break;
        }
    }
    if (soluong1 < n)
    {
        cout << "Cac so theo thu tu tang dan la: ";
        for (int i = soluong1; i < n;i++)
        {
            if(s[i]<s[i+1])
            {
                cout << s[i] << " ";
                soluong2++;
                sum2 += s[i];
            }
            else
            {
                cout << s[i] << " " << endl;
                soluong2++;
                sum2 += s[i];
                cout << "so cac so trong day la: " << soluong2 <<"\n"<< endl;
                break;
            }
        }
    }
    if (soluong2 + soluong1 < n)
    {
        cout << "Cac so theo thu tu tang dan la: ";
        for (int i = soluong1 + soluong2; i < n;i++)
        {
            if (s[i] < s[i + 1])
            {
                cout << s[i] << " ";
                soluong3++;
                sum3 += s[i];
            }
            else
            {
                cout << s[i] << " " << endl;
                soluong3++;
                sum3 += s[i];
                cout << "so cac so trong day la: " << soluong3 << "\n" << endl;
                break;
            }
        }
    }
    if (soluong3 + soluong2 + soluong1 < n)
    {
        cout << "Cac so theo thu tu tang dan la: ";
        for (int i = soluong1 + soluong2 + soluong3; i < n;i++)
        {
            if (s[i] < s[i + 1])
            {
                cout << s[i] << " ";
                soluong4++;
                sum4 += s[i];
            }
            else
            {
                cout << s[i] << " " << endl;
                soluong4++;
                sum4 += s[i];
                cout << "so cac so trong day la: " << soluong4 << "\n" << endl;
                break;
            }
        }
    }
    if (soluong4 + soluong3 + soluong2 + soluong1 < n)
    {
        cout << "Cac so theo thu tu tang dan la: ";
        for (int i = soluong1 + soluong2 + soluong3 + soluong4; i < n;i++)
        {
            if (s[i] < s[i + 1])
            {
                cout << s[i] << " ";
                soluong5++;
                sum5 += s[i];
            }
            else
            {
                cout << s[i] << " " << endl;
                soluong5++;
                sum5 += s[i];
                cout << "so cac so trong day la: " << soluong5 << "\n" << endl;
                break;
            }
        }
    }
    summax1(soluong1, soluong2, soluong3, soluong4, soluong5, sum1, sum2, sum3, sum4, sum5);
    return 0;
}
int main()
{
	int n;
	cout << "Nhap vao gia tri cua n: ";
	cin >> n;
    int soluong1 = 0;
    int soluong2 = 0;
    int soluong3 = 0;
    int soluong4 = 0;
    int soluong5 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int summax = 0;
    int s[1000];
    nhapmang(s, n);
    xuatmang(s, n);
    tachham(s, n);
}