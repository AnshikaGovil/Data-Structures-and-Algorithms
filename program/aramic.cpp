#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string rmvDup(string s){
    for ( int i = 0; i < s.size(); i++ )
    {
        int j = i + 1;
        while ( j < s.size() )
        {
            if ( s[i] == s[j] )
            {
                s.erase( j, 1 );
            }
            else
            {
                ++j;
            }
        }
    }

    return s;
}

int main(){
    int n;
    cin>>n;
    string *s = new string[n+2];

    vector <string> v;

    for(int i=0;i<n;i++){
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
        s[i]= rmvDup(s[i]);
        v.push_back(s[i]);
    }

    if(v.size()!=0)
        sort(v.begin(),v.end());

    int cnt=1;

     for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1])
            cnt++;

    }

    cout<<cnt<<endl;
	return 0;

}
