#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int str[n + 1];
    for(int i=0;i<n;i++)
    cin>>str[i];
    int count = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] > h)
            count = count + 2;
        else
            count2++;
    }
    //cout<<count<<endl<<count2<<endl;
    cout << count + count2;
    return 0;
}