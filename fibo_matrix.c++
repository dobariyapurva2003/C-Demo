#include <iostream>
using namespace std;
void multiply(int F[2][2], int M[2][2]) {
   int a = F[0][0] * M[0][0] + F[0][1] * M[1][0];
   int b= F[0][0] * M[0][1] + F[0][1] * M[1][1];
   int c = F[1][0] * M[0][0] + F[1][1] * M[1][0];
   int d = F[1][0] * M[0][1] + F[1][1] * M[1][1];
   F[0][0] = a;
   F[0][1] = b;
   F[1][0] = c;
   F[1][1] = d;
}
void power(int F[2][2], int n) {
   if (n == 0 || n == 1)
      return;
   int M[2][2] = {{0,1},{1,1}};
   power(F, n / 2);
   multiply(F, F);
   if (n % 2 != 0)
      multiply(F, M);
}
int fibonacci_matrix(int n) {
   int F[2][2] = {{0,1},{1,1}};
   if (n == 0)
      return 0;
   power(F, n );
   int s[2][1] = {{1},{0}};
   int d[2][1];
   for(int i=0;i<2;i++)
   {
      for(int j=0;j<1;j++)
      {
         d[i][j]=0;
         for(int k=0;k<2;k++)
         d[i][j] += F[i][k]*s[k][j];
      }
   }
   return d[1][0];
}
int main() {
   int n;
      cout<<"Enter the integer n to find nth fibonacci no. (enter 0 to exit):";
      cin>>n;
      if (n == 0 || n==1)
      {
         cout<<1<<endl;
      }
      cout<<fibonacci_matrix(n+1)<<endl;
   return 0;
}