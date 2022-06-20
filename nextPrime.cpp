#include <iostream>
using namespace std;
int sigprimo(int signum);
int main()
{
    int num, div, cont=0, salida;
    cout<<"Digite un numero y si es primo , le diremos el siguiente primo:  ";
    cin>>num;
    for(div=1; div<=num; div++)
    {
        if(num%div==0)
        {
            cont++;

        }
    }
    if (cont==2)
    {
        salida=sigprimo(num);
        cout<<"El siguiente primo es:   "<< salida<<endl;
        main();

    }
    else
    {
        main();
    }
}
int sigprimo(int signum)
{
    int div,cont=0;
    cont=0;
    signum=signum+1;

    for(div=1; div<=signum; div++)
    {
        if(signum%div==0)
        {
            cont++;
        }
    }
    if (cont==2)
    {
        return signum;
    }
    else
    {
        sigprimo(signum);
    }
}
