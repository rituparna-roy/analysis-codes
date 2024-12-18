#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
int n = 350;
double r1[n], r2[n], g1[n], g2[n], v1[n], v2[n], tau[n];
int i,j;
double delr = 0.1;
double pi = 3.14;
double ac = 4.0;
double av = 85.862;
double ad;

ifstream file1("rdf-bb.dat");
ifstream file2("rdf-bb-wat.dat");
ofstream file3("pi-bb-wat.dat");

for(i=1; i<=n; i++)
{
file1>>r1[i]>>g1[i];
file2>>r2[i]>>g2[i];
}

ad = ac/(pow(av,3));

for(i=1; i<=n; i++)
{
for(j=1; j<=i; j++)
{
v1[i] = v1[i] + 4.0*pi*(g1[j]-1)*(pow(r1[j],2))*delr;
v2[i] = v2[i] + 4.0*pi*(g2[j]-1)*(pow(r2[j],2))*delr;
}
tau[i] = ad*(v1[i]-v2[i]);
}


for(i=1; i<=n; i++)
{
file3<<r1[i]<<"\t"<<tau[i]<<"\n";
}

file1.close();
file2.close();
file3.close();
}
