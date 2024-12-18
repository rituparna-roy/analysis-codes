#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
double a[400][3], mat[20][20];
int i,j,k;
int n1, n2, n3, n4, n5;
string ss;

ifstream file1("avg-coor.dat");
ofstream file2("matrix-hb.dat");


for(i=1; i<=400; i++)
{
file1>>a[i][1]>>a[i][2]>>a[i][3]>>n1>>n2>>n3>>n4>>ss;
}

for(i=1; i<=20; i++)
{
	for(j=1; j<=20; j++)
	{
		k = (i-1)*20+j;
		mat[i][j] = a[k][2];
	}

}


for(i=1; i<=20; i++)
{
	for(j=1; j<=20; j++)
	{
		file2<<mat[i][j]<<"\t";
	}
	file2<<"\n";
}

file1.close();
file2.close();
}

