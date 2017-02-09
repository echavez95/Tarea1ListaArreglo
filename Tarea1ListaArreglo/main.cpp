#include <iostream>

using namespace std;
class Episodio{
    public:
        string Titulo;

    Episodio(string t){
        Titulo=t;
    }

    Episodio(){
    }

    ~Episodio(){}
};

class Serie{
    public:
        Episodio Temporada[12];

    Serie(){}

    ~Serie(){}

    void Insertar(string nombreT, int numCap)
    {
        Temporada[numCap].Titulo=nombreT;
    }



};

int main()
{
    cout << "Hello world!" << endl;


    return 0;
}
