#include <iostream>

using namespace std;

int main()
{
    int num, password=123;
do{
    cout<<"Usuario: Admin \n\n\npassword: ";
    cin>>num;

    if(num!=password)

        cout<<"\nClave incorrecta\n\n\n";
}
    while(num!=password);

    cout<<"\nClave correcta \n";

    return 0;
}


