#include <iostream>
#include <stdlib.h>

using namespace std;
class Episodio{
    public:
        string Titulo;

    Episodio(string t){
        Titulo=t;
    }

    Episodio(){
        Titulo="";
    }

    ~Episodio(){}
};

class Serie{
    public:
        Episodio Temporada[11];

        Serie(){}

        ~Serie(){}

    void Insert(string nombreT, int numCap)
    {
        if(numCap>11)
        {
            cout<<"numero de capitulo debe ser menor que 12"<<endl;
            system("pause");
        }
        else
        {
            if(Temporada[numCap-1].Titulo=="")
            {
                Temporada[numCap-1].Titulo=nombreT;
            }
            else
            {
                cout<<"Ya existe un capitulo"<<endl;
                system("pause");
            }


        }

    }

    int Search(string nombreEp)
    {
        for(int i=0;i<11;i++)
        {
           if(Temporada[i].Titulo==nombreEp)
            {
                return i+1;
            }
        }
        cout<<"No encontrado!"<<endl;
    }

    string Get(int posicion)
    {
        if(posicion>11)
        {
            return "Fuera de los limites";
        }
        else
        {
          return Temporada[posicion-1].Titulo;
        }
    }

    void Delete(int posicion)
    {
        if(posicion>11)
        {
            cout<<"Fuera de los limites"<<endl;
        }
        else
        {
          Temporada[posicion-1].Titulo="";
          cout<<"Elemento Borrado"<<endl;
        }
    }

    void Print()
    {
        for(int i=0;i<11;i++)
        {
            if(Temporada[i].Titulo=="")
            {
                cout<<"Vacio"<<endl;
            }
            else
            {
                cout<<"Titulo: "<<Temporada[i].Titulo<<" Episodio: "<<i+1<<endl;
            }
        }
    }

};

int main()
{
   Serie DefaultSerie;
    int res;
    string nombreEpi;
    int numEpi;
    do{
        system("cls");
        cout << "EJEMPLO LISTA ARREGLO" << endl;
        cout << "1. Insertar Episodio" << endl;
        cout << "2. Obtener Numero Episodio" << endl;
        cout << "3. Obtener Titulo" << endl;
        cout << "4. Borrar Episodio" << endl;
        cout << "5. Ver Episodios Serie" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion" << endl;
        cin>>res;
        system("cls");
        switch(res)
        {
            case 1:
                cout << "Escriba un Titulo: " << endl;
                cin>>nombreEpi;
                cout << "Escriba el numero del episodio: " << endl;
                cin>>numEpi;
                DefaultSerie.Insert(nombreEpi,numEpi);
                break;
            case 2:
                cout << "Escriba el Titulo a buscar: " << endl;
                cin>>nombreEpi;
                cout<<"Episodio: "<<DefaultSerie.Search(nombreEpi)<<endl;
                system("pause");
                break;
            case 3:
                cout << "Escriba el numero de episodio: " << endl;
                cin>>numEpi;
                cout<<"Titulo: "<<DefaultSerie.Get(numEpi)<<endl;
                system("pause");
                break;
            case 4:
                cout << "Escriba el episodio a borrar: " << endl;
                cin>>numEpi;
                DefaultSerie.Delete(numEpi);
                cout << "Lista:" << endl;
                DefaultSerie.Print();
                system("pause");
                break;
            case 5:
                cout << "Lista Episodios:" << endl;
                DefaultSerie.Print();
                system("pause");
                break;
        }
    }while(res!=0);


    return 0;
}
