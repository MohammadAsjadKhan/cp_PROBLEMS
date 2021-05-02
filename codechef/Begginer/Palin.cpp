#include <iostream>
using namespace std;

int main()
{
    string a,aout;
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a;
        n = a.size();
        aout = a;
        for(i = 0; i < n/2; i++) aout[n-1-i] = aout[i];
        if (aout > a)
        {
            cout<<aout<<"\n";
            continue;
        }
        for (i = ((n-1)/2); i >=0; i--)
        {
            if (aout[i] != '9')
            {
                aout[i] ++;
                break;
            }
            else aout[i] = '0';
        }
        for(i = 0; i < n/2; i++) aout[n-1-i] = aout[i];
        if(aout[0] == '0')
        {
            aout[0] = '1' ;
            aout += "1";
        }
        cout<<aout<<"\n";
    }


    return 0;
}
