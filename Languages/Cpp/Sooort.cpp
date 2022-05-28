#include <bits/stdc++.h>
using namespace std;

  
 
int main ()
{
    string str;
    cout<<"Enter String"<<endl; // Assume Entered string is "geekstocode"
    cin>>str;
    sort(str.begin(),str.end());
    cout<<"Sorted String "<<endl;
    cout<<str;

    return 0;
}
