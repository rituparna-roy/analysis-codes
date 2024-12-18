#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
double a[74][2];
int i, n1, n2, n3, n4, n5;
string ss;

ifstream file1("total_copied.dat");
ofstream file2("coor-first.dat");
ofstream file3("coor-second.dat");

for(i=1; i<=74; i++)
{
file1>>n1>>a[i][1]>>a[i][2]>>n2>>n3>>n4>>n5>>ss;
}

for(i=1; i<=74; i++)
{
a[i][2] = a[i][2]/sqrt(5000);
}


for(i=1; i<=37; i++)
{
file2<<i<<"\t"<<a[2*i-1][1]<<"\t"<<a[2*i-1][2]<<"\n";
file3<<i<<"\t"<<a[2*i][1]<<"\t"<<a[2*i][2]<<"\n";
}

file1.close();
file2.close();
file3.close();
}

