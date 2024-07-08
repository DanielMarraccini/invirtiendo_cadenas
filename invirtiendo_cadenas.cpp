#include <iostream>
#include <string>

using namespace std;


string inputData(string str1);

string invertirString(string str1);


int main(){

    string str1;

    str1 = inputData(str1);

    string str2 = invertirString(str1);

    cout<<"Cadena original: "<<str1;
    cout<<"\nCadena invertida: "<<str2;

    cout<<endl<<endl;

    cout<<"Presione ENTER para finalizar...";
    cin.get();
    return 0;
}

string inputData(string str1){


    cout<<"Ingrese una cadena de caracteres: "; getline(cin, str1);

    cout<<endl<<endl;

    return str1;
}

string invertirString(string str1){

    int aux, e = str1.length() - 1;

    for (int i = 0; i <= e/2; i++){

        aux = str1[i];
        str1[i] = str1[e - i];
        str1[e-i] = aux;
    }

    return str1;
}
