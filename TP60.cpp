#include <iostream>
#include <string>
using namespace std;
string BuscarPosiciones (string frase, string letra);
int main()
{
    string frase, letra;
    cout<<"Ingresa la frase: ";
    getline(cin,frase);
    cout<<"Ingresa la letra a buscar: ";
    cin>>letra;
    cout<<"El valor de las letras es: "<<BuscarPosiciones (frase, letra);
    return 0;
}
string BuscarPosiciones (string frase, string letra)
{
	int posicion=-1;
	string msg="La palabra no esta";
	for(int i=0; i< frase.size();i++)
	{
		if(frase.find(letra) != string::npos)
		{
		    msg="La palabra esta ubicada en ";
		    posicion=i;
		}
	}
	if (posicion != -1)
    {
        msg += to_string(posicion);
    }
	return msg;
}
