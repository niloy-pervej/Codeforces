#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    char C;
    int B;
    cin >> A >> C>> B;
    if (C == '=')
    {

        if (A == B)
            cout <<"Right";
        else
            cout << "Wrong";
    }
    else if (C == '>')
    {
        if (A > B)
            cout << "Right";
        else
            cout << "Wrong";
    }
    else if(C == '<')
    {
        if (A < B)
            cout << "Right";
        else
            cout << "Wrong";
    }
    return 0;
}