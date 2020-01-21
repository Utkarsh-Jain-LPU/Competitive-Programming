#include<bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--) {
    	
        int x,y;
        cin>>x>>y;
        if(x == y) {
            cout<<-1<<endl;
            continue;
        }
        
        int temp = abs(x-y);
        int count = 0;
        for(int i=1;i<=sqrt(temp);i++) {
		    if(temp%i == 0)
		    {
			    if(temp/i == i)
			        count++;
				else
				    count+=2;
		    }
	    }
        cout<<count<<endl;
    }
    return 0;
}

