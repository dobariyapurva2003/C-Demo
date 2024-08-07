#include<iostream>
using namespace std;

int main()
{
    //Count the number of subarrays with given xor K (from striver sheet A-Z)
    int A[] = {4, 2, 2, 6, 4};
    int B=6;
    int n1=5;
    int res=0;
    for(int i=0;i<n1-1;i++)
    {
        int temp = A[i];
        if(temp == B)
        res++; 
        for(int j=i+1;j<n1;j++)
        {
            temp = temp^A[j];
            if(temp==B)
            {
                res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}