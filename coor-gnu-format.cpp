#include <iostream>
#include <fstream>

using namespace std;

int main()
{
double a[444][2];
int i, j, n1, n2, n3, n4, n5;
string ss;


ifstream file1("total_copied.dat");
ofstream file2("coor-res.gnu");


for(i=1; i<=444; i++)
{
file1>>n1>>a[i][1]>>a[i][2]>>n2>>n3>>n4>>n5>>ss;
}


for(i=1; i<=37; i++)
{
double count=0.000;	
for(j=2*i; j<=444; j=j+74)
{
count = count+1.000;	
file2<<i<<".000"<<"\t"<<count<<".000"<<"\t"<<a[j][1]<<"\n";
//file2<<i<<".000"<<"\t"<<count<<"\t"<<a[j][1]<<"\n";
}
file2<<i<<".000"<<"\t"<<"7.000"<<"\t"<<"0.0"<<"\n";
file2<<"\n";
}

for(i=1; i<=6; i++)
{
file2<<"38.000"<<"\t"<<i<<".000"<<"\t"<<"0.0"<<"\n";	
}

file1.close();
file2.close();
}

