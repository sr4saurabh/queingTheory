//"First they ignore you, then they ridicule you, then they fight you, and then you win.”
#include<bits/stdc++.h>
using namespace std;


void mm1()
{
  cout<<"Enter the value of lambda and neu\n";
  double l,n;
  cin>>l>>n;
  double r;
  r=l/n;
  double p;
  p=1-r;

  double k,t;
  cout<<"Utilisation factor/Traffic Intensity/Prob(server busy) = "<<r<<'\n';
  cout<<"Idle Rate/P(server free) = "<<1-r<<'\n';
  cout<<"Expected number of customer in system = "<<(r/(1-r))<<'\n';
  cout<<"Expected number of customer in queue = "<<(r/(1-r))-r<<'\n';
  cout<<"Expected waiting time in system = "<<1/(n-l)<<'\n';
  cout<<"Expected waiting time in queue = "<<l/(n*(n-l))<<'\n';
  cout<<"---------------------------------------------------------------------"<<'\n';
  cout<<"Enter the no. of customer -->k\n";
  cin>>k;
  cout<<"Enter the waiting time t\n";
  cin>>t;
  cout<<"---------------------------------------------------------------------"<<'\n';
  cout<<"Probability number of customer in system greater than k = "<<pow(r,k+1)<<'\n';
  cout<<"Probability number of customer in system greater than or equal to k = "<<pow(r,k)<<'\n';
  cout<<"Probability that waiting time exceeds t in queue = "<<r*pow(2.71828,(l-n)*t)<<'\n';
  cout<<"Probability that waiting time exceeds t in system = "<<pow(2.71828,(l-n)*t)<<'\n';
  cout<<"Probability that zero customer are waiting in queue = "<<1-r<<'\n';

}

void mm12()
{
  cout<<"Enter the value of lambda and neu and max customer in the SYSTEM(queue no. + 1)\n";

  double l,n,c;
  cin>>l>>n>>c;
  double r;
  r=l/n;
  double p,pn,ear,los,loq,et,ew;
  if(r==1)
    p=1/(c+1);
  else
  p=(1-r)/(1-pow(r,c+1));

  ear=n*(1-p);
  if(r==1)
    los=c/2;
  else
    los=(r/(1-r)) - (c+1)*(pow(r,c+1))/(1-pow(r,c+1));

  loq=los-ear/n;
  et=los/ear;
  ew=loq/ear;





  double k;



  cout<<"Utilisation factor/Traffic Intensity/Prob(server busy) = "<<r<<'\n';
  cout<<"Idle Rate/P(server free) = "<<p<<'\n';
  cout<<"Effective arrival rate"<<ear<<'\n';
  cout<<"Expected number of customer in system = "<<los<<'\n';
  cout<<"Expected number of customer in queue = "<<loq<<'\n';
  cout<<"Expected waiting time in system = "<<et<<'\n';
  cout<<"Expected waiting time in queue = "<<ew<<'\n';
  cout<<"---------------------------------------------------------------------"<<'\n';
  cout<<"Enter the no. of customer -->k\n";
  cin>>k;
  cout<<"---------------------------------------------------------------------"<<'\n';
  cout<<"Probability number of customer in system equal to k/ probability customers are turned away if you entered k=queue length = "<<pow(r,k)*p<<'\n';


}

void mg1()
{

  double l,n,d,r,ew,et,en,em,p;

    cout<<"Enter the value of lambda and neu and deviation(sigma) Remember sigma=0 when \n";
    cin>>l>>n>>d;

    r=l/n;
    p=1-r;
    ew=(l*l*d*d + r*r)/(2*l*(1-r));
    et=ew+(1/n);
    en=l*et;
    em=l*ew;



    cout<<"Utilisation factor/Traffic Intensity/Prob(server busy) = "<<r<<'\n';
  cout<<"Idle Rate/P(server free) = "<<p<<'\n';

  cout<<"Expected number of customer in system = "<<en<<'\n';
  cout<<"Expected number of customer in queue = "<<em<<'\n';
  cout<<"Expected waiting time in system = "<<et<<'\n';
  cout<<"Expected waiting time in queue = "<<ew<<'\n';
  cout<<"---------------------------------------------------------------------"<<'\n';



















}

























int main()
{


  cout<<fixed<<setprecision(8);
  cout<<"Welcome to queuing theory solver By Saurabh Chaubey\n";


    cout<<"Enter 0 to quit and 1 to continue\n";
    int c;
    cin>>c;
    if(c==0)
      exit(0);
    else
    {


        cout<<"Enter\n 1 for M/M/1- infinite\n 2 forM/M/1 -finite\n 3 for M/G/1 - 1server\n";

        int choice;
        cin>>choice;




        if(choice==1)
        {
          mm1();
        }
        else
          if(choice==2)
          {
            mm12();
          }
          else
            mg1();



    }

  return 0;
}
