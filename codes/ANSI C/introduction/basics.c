# include<stdio.h>
 int main()
 {
    float faren,celcius;
    float lower,step,upper;
    

    lower=0;
    upper=300;
    step=10;

    faren=lower;

    while (faren<=upper)
    {
      celcius= 5*(faren-32)/9;
      printf("%3.f\t%6.1f\n",faren,celcius);
      faren=faren+step;


    }

   return 0;
 }