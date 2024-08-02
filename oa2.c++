#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> inp;
    string s;
    getline(cin,s);
    stringstream ss(s);
    int elem;
    while(ss>>elem)
    {
        inp.push_back(elem);
    }
    int K;
    cin>>K;

    deque<int> res;
    for(int i=0;i<inp.size();i++)
    {
        while(!res.empty() && inp[i]<res.back() && (res.size() + inp.size()-i-1)>= K)
        {
            res.pop_back();
        }
        res.push_back(inp[i]);
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

    
}