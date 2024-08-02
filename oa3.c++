#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int grid[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"row : "<<i<<" , col : "<<j<<" , enter value : ";
            cin>>grid[i][j];
        }
    }

    int no_taxi;
    cin>>no_taxi;
    int co_tax[no_taxi][2];
    for(int i=0;i<no_taxi;i++)
    {
            cout<<"taxi no : "<<i<<" , enter value of x cord : ";
            cin>>co_tax[i][0];
            cout<<"taxi no : "<<i<<" , enter value of y cord : ";
            cin>>co_tax[i][1];   
    }
     
     int p_cor[2];
     cout<<"enter x cord for psngr : ";
     cin>>p_cor[0];
    cout<<"enter y cord for psngr : ";
     cin>>p_cor[1];

     //incompelet

}