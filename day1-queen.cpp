#include<iostream>
using namespace std;
int a[9], b[9], c[20], d[20];
void print();
void search(int i);
int main()
{
    search(1);
    return 0;
}
void search(int i)
{
    int j;
    for(j = 1; j <= 8; j++)
    {
        if((!b[j]) && (!c[i+j]) && (!d[i-j+7]))
        {
            a[i] = j;
            b[j] = 1;
            c[i+j] = 1;
            d[i-j+7] = 1;
            if(i == 8)
                print();
            else
                search(i+1);
            b[j] = 0;
            c[i+j] = 0;
            d[i-j+7] = 0;
        }
    }
}
void print()
{
    for(int i=1;i<=8;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}