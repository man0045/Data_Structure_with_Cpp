#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, a, b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;

        // if(b>a){
        //     cout<<"<"<<endl;

        // }
        // else if(a>b){
        //     cout<<">"<<endl;
        // }
        // else if(a==b){
        //     cout<<"=";
        // }
    }
    if (b > a)
    {
        cout << "<" << endl;
    }
    else if (a > b)
    {
        cout << ">" << endl;
    }
    else if (a == b)
    {
        cout << "=";
    }
    return 0;
}
