#include<bits/stdc++.h>
using namespace std;
int board[10][10];
bool ispossible(int row,int col,int n)
{
    //same column
    for(int i=row-1;i>=0;i--)
    {
        if(board[i][col]==1)
        {
          return false;
        }
    }
    //same left  diagonal
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j]==1)
        {
          return false;
        }
    }
    //same left  diagonal
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++)
    {
        if(board[i][j]==1)
        {
          return false;
        }
    }
    return true;


}
void nqueenhelper(int n,int row)
{
  if(row==n)
  {
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<board[i][j]<<" ";
      }
      cout<<endl;

  }
  return;

  }
  for(int i=0;i<n;i++)
  {
      if(ispossible(row,i,n))
      {
        board[row][i]=1;
        nqueenhelper(n,row+1);
        board[row][i]=0;
      }
      return;
  }
}
int main()
{
  int n;
  cin>>n;
  memset(board,0,10*10*sizeof(int));
  /*for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<board[i][j];
      }
      cout<<endl;
  }*/
  nqueenhelper(n,0);
}
