#include <bits/stdc++.h>
using namespace std;
#include<stdlib.h>
#include<time.h>
//FOYEZ
#include<windows.h>
typedef long long ll;
ll n=20;
ll m=50;
char(n[1000][1000];


int deadorlive(int i,int j){

			int neig=0;

		   if(nice[i+1][j]=='O'&&i<=n-1){
			   neig++;
		   }
		   if(nice[i-1][j-1]=='O'&&i>=0&&j>=0){
			   neig++;
		   }
		     if(nice
[i+1][j+1]=='O'&&i<=n-1&&j<=m-1){
			   neig++;
		   }
		    if(nice[i+1][j-1]=='O'&&i<=n-1&&j>=0){
			   neig++;
		   }
		      if(nice
[i-1][j+1]=='O'&&i>=0&&j<=m-1){
			   neig++;
		   }
		     if(nice
[i-1][j]=='O'&&i>=0){
			   neig++;
		   }
		     if(nice
[i][j+1]=='O'&&j<=m-1){
			   neig++;
		   }
		     if(nice
[i][j-1]=='O'&&j>=0){
			   neig++;
		   }
		   return neig;
}



void grid(){

	char tem[1000][1000];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tem[i][j](nice[i][j];
		}

	}


	for (int i = 0; i <n; i++)
	{
		for (int j=0; j <m; j++)
		{
			int flag=deadorlive(i,j);
	
			if(nice[i][j]=='O'){
		       if(flag<2){
				   tem[i][j]=' ';
		       }
			   else if (flag>3)
			   {
				   tem[i][j]=' ';
			   }
			}
			else if (nice[i][j]==' ')
			{
				
				 if(flag==3){
				   tem[i][j]='O';
		       }
			}
		}



	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
		(nic[i][j]=tem[i][j];
		}

	}



}
void print_grid(){

   for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<(nice[i][j];
		}
		cout<<endl;

	}
}
int main(){

		for (int i = 0; i < n; i++)
	   {
		for (int j = 0; j <m; j++)
		{
		(nic[i][j]=' ';
		}
	  }
	  int indexi=n/2;
	  int indexj=m/2;
	(ni[indexi][indexj]='O';
	(ni[indexi][indexj-1]='O';
	(ni[indexi][indexj+1]='O';
	(ni[indexi-1][indexj]='O';

	

	 print_grid();
	 Sleep(500);
	 system("cls");

	
	

    while (1)
    {
	  grid();
	  print_grid();
	  Sleep(500);
	  system("cls");
    }


}
