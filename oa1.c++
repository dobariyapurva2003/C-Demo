#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int BinToDec(vector<int> inp, int n)
{
    int num=0;
    for(int i=0;i<=n;i++)
    {
        num = num*10 + inp[i];
    }
    int temp = num;
    int res=0;
    int base = 1;
    while(temp)
    {
        int dig = temp%10;
        temp = temp/10;
        res += dig*base;
        base = base*2;
    }
    return res;
}

int main()
{
    vector<int> inp;
    vector<bool> res;
    string ip;
    int elem;
    getline(cin,ip);
    stringstream ss(ip);
    while(ss>>elem)
    {
        inp.push_back(elem);
    }
    for(int i=0;i<inp.size();i++)
    {
        int dec = BinToDec(inp,i);
        if(dec%5 == 0)
        {
            res.push_back(true);
        }
        else
        {
            res.push_back(false);
        }
    }
    
    for(int i=0;i<res.size();i++)
    {
        if(res[i]==0)
        cout<<"false"<<" ";
        else if(res[i]==1)
        cout<<"true"<<" ";
    }
    
    return 0;
}