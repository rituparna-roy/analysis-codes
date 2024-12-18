#include <iostream>
#include <fstream>

using namespace std;

int main()
{

int i, par=0, herr=0, perp=0, t=0, none=0, n=5000;
float a[n][3];

ifstream file1("phe-23-os.dat");
ofstream file2("prob-phe-23.dat");

for(i=0; i<n; i++)
{
	file1>>a[i][1]>>a[i][2]>>a[i][3];
}

//for(i=0; i<n; i++)
//{
//        file2<<"\t"<<a[i][1]<<"\t"<<a[i][2]<<"\t"<<a[i][3]<<"\n";
//}


for(i=0; i<n; i++)
{
        if(a[i][2] <= 6.50)
	{
		if((a[i][3] >=0.00 && a[i][3] < 30.00) || (a[i][3] >150.00 && a[i][3] <= 180.00))
		{
			par++;
		}
		else if((a[i][3] >=30.00 && a[i][3] <= 60.00) || (a[i][3] >=120.00 && a[i][3] <= 150.00))
                {
                        herr++;
                }
		else
		{
                        perp++;
                }
        }
	else
	{
		none++;
	}
}

t = par+herr+perp;

file2<<"parallel"<<"\t"<<par<<"\n";
file2<<"herringbone"<<"\t"<<herr<<"\n";
file2<<"perpendicular"<<"\t"<<perp<<"\n";
file2<<"none"<<"\t"<<none<<"\n";

file2<<"parallel-prob"<<"\t"<<(par*100.0/t)<<"\n";
file2<<"herringbone-prob"<<"\t"<<(herr*100.0/t)<<"\n";
file2<<"perpendicular-prob"<<"\t"<<(perp*100.0/t)<<"\n";


file1.close();
file2.close();
}

