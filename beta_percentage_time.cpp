#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
double b[25000],c[25000],d[25000],e[25000],f[25000],g[25000],h[25000],t[25000];
int i,a[25000];

ifstream file1("program.dat");
//ofstream file2("beta_time.dat");
ofstream file2("beta_time_ext.dat");
//ofstream file3("beta_time_bridge.dat");

for(i=1; i<=25000; i++)
{
file1>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i]>>g[i]>>h[i];
}

//for(i=1; i<=25000; i++)
//{
//t[i] = b[i] + c[i];
//}

for(i=1; i<=25000; i++)
{
//file2<<0.04*i<<"\t"<<100*t[i]<<"\n";
file2<<0.04*i<<"\t"<<100*b[i]<<"\n";
//file3<<0.04*i<<"\t"<<100*c[i]<<"\n";
}


file1.close();
file2.close();
//file3.close();
}
