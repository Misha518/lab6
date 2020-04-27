#include <iostream>
#include <fstream>
using namespace std;
double f(double x, double y)
{
    return  (-42 * x - 12 * y - 3 * x*x - 2 * y*y-158);
}
double gradX(double x, double y)
{
    return (-42 - 6 * x);
}
double gradY(double x, double y)
{
    return  (-12 - 4 * y);
}
int main()
{ 
   double L = 1.0;
   double x = 1, y = 8;
   double fv = f(x, y);
   ofstream fout;
   fout.open("tochki.txt");
   while(L > 0.005)
   {
      double gx = gradX(x, y);
      double gy = gradY(x, y);
      double nx = x + L*gx;
      double ny = y + L*gy;
      double nf = f(nx, ny);
      if( nf >= (fv + 0.5*L*(gx*gx + gy*gy)) )
      {
         x = nx;
         y = ny;
         fv = nf;
      }
      else
      {
         L = L * 0.5;
      }
      fout<<nx<<" "<<ny<<endl;
   }
   fout.close();
   cout <<"max(x;y)=("<< x << ";"  << y <<")"<<endl;
   system("python3 lab6.py");
   return 0;
}
