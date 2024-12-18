#include <iostream>
#include <fstream>

using namespace std;

int main()
{
double a[148],pa[148],ap[148],th[148],al[148],pi[148],tu[148],bn[148],pa1[37],ap1[37],th1[37],al1[37],pi1[37],tu1[37],bn1[37],c[37];
int i;

ifstream file1("program-1.dat");
ofstream file2("res_beta.dat");
ofstream file3("res_coil.dat");
//ofstream file4("res_sec.dat");

for(i=1; i<=148; i++)
{
file1>>a[i]>>pa[i]>>ap[i]>>th[i]>>al[i]>>pi[i]>>tu[i]>>bn[i];
}

for(int j=1; j<=37; j++)
{
for(i=j; i<=148; i=i+37)
{
pa1[j] = pa1[j] + pa[i];
ap1[j] = ap1[j] + ap[i];
th1[j] = th1[j] + th[i];
al1[j] = al1[j] + al[i];
pi1[j] = pi1[j] + pi[i];
tu1[j] = tu1[j] + tu[i];
bn1[j] = bn1[j] + bn[i];
}
pa1[j] = pa1[j]*25.0;
ap1[j] = ap1[j]*25.0;
th1[j] = th1[j]*25.0;
al1[j] = al1[j]*25.0;
pi1[j] = pi1[j]*25.0;
tu1[j] = tu1[j]*25.0;
bn1[j] = bn1[j]*25.0;
c[j] = 100-(pa1[j]+ap1[j]+th1[j]+al1[j]+pi1[j]+tu1[j]+bn1[j]);
}


for(int j=1; j<=37; j++)
{
//file4<<a[j]<<"\t"<<pa1[j]<<"\t"<<ap1[j]<<"\t"<<th1[j]<<"\t"<<al1[j]<<"\t"<<pi1[j]<<"\t"<<tu1[j]<<"\t"<<bn1[j]<<"\n";
//file4<<a[j]<<"\t"<<pa1[j]<<"\t"<<ap1[j]<<"\t"<<th1[j]<<"\t"<<al1[j]<<"\t"<<pi1[j]<<"\t"<<tu1[j]<<"\t"<<bn1[j]<<"\t"<<c[j]<<"\n";
//file2<<a[j]<<"\t"<<pa1[j]+ap1[j]<<"\n";
file2<<a[j]<<"\t"<<pa1[j]<<"\n";
file3<<a[j]<<"\t"<<c[j]<<"\n";
}

file1.close();
file2.close();
file3.close();
//file4.close();
}
