#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i =0; i<t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int time_a = abs(a-1);
        int time_b = abs((c-b)) + abs((c-1));

        if(time_a == time_b) cout<<3<<endl;

        else if (time_a < time_b) cout<<1<<endl;
        else cout<<2<<endl;
    }

    return 0;
}
