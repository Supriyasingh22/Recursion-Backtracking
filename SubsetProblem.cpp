#include<iostream>
#include<vector>
#include<string> 
using namespace std ;

void Subset(string p, string q, vector<string>&v,int i)
{
    if(i>=p.size())
    {
        return ;
    }

    v.push_back(q+p[i]);

    Subset(p,q,v,i+1);
    Subset(p,q+p[i],v,i+1);
    

}

int main()
{
    string Str ;
    cout<<"Enter String : ";
    cin>>Str ;

    string subS ="";
    vector<string>v ;

    Subset(Str,subS,v,0);

    for(auto u : v)
    {
        cout<<u<<" ";
    }

    return 0; 
}