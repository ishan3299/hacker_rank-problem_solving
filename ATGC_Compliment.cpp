#include<bits/stdc++.h>
using namespace std;
string dnaComplement(string s){
    int len=s.length();
    for (int i = 0; i < len/2; i++)
    {
        swap(s[i],s[len-i-1]);
    }
    for (int i = 0; i < len; i++)
    {
        if(s[i]=='A'){
            s[i]='T';
        }
        else if(s[i]=='T'){
            s[i]='A';
        }
        else if(s[i]=='G'){
            s[i]='C';
        }
        else if(s[i]=='C'){
            s[i]='G';
        }
    }
    cout<<s;
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string s;
    getline(cin,s);
    string result=dnaComplement(s);
    fout<< result << "\n";
    fout.close();
    return 0;
}
