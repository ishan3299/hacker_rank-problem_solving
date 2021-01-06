#include<bits/stdc++.h>
using namespace std;
int editDistance(string source,string target){
    int s=source.length();
    int t=target.length();
    
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string source;
    getline(cin,source);
    string target;
    getline(cin,target);
    int result=editDistance(source,target);
    fout<<result<<"\n";
    fout.close();
    return 0;
}
