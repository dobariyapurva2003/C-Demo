#include<iostream>
using namespace std;

//we can only move disk to adjacent peg.

void towerOfHanoi(int n, char first, char middle,char last)
{
    if (n == 1) {
        cout<<"Move disk : "<<n<<" from : "<<first<<" to : "<<middle<<" then move to : "<<last<<endl;
        return;
    }
    towerOfHanoi(n - 1,first,middle,last);
    cout << "Move disk " << n << " from rod " << first<< " to rod " << middle << endl;
    towerOfHanoi(n - 1, last,middle,first);
    cout << "Move disk " << n << " from rod " << middle<< " to rod " << last << endl;
    towerOfHanoi(n - 1, first,middle,last);
}
int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n,'A','C','B');
}