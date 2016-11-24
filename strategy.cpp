#include <iostream>
using namespace std;
//Strategy Clases
class Comportamiento{
    public:
        virtual void ordenar()=0;
};

class QuickSort:public Comportamiento{
    public:
        virtual void ordenar(){
            cout<<"QuickSort"<<endl;
        }
};

class MergeSort: public Comportamiento{
    public:
        virtual void ordenar(){
            cout <<"MergeSort"<<endl;
        }
};

class HeapSort:public Comportamiento{
    public:
        virtual void ordenar(){
            cout << "HeapSort" << endl;
        }
};
//Contexto
class Coleccion{
    private:
        Comportamiento *orden;
    public:
        Coleccion(){}
        setOrdenar(Comportamiento *h){
            orden = h;
        }
        void Ordenar(){
            orden->ordenar();
        }

};

int main(){
    QuickSort qs;
    MergeSort ms;
    HeapSort hp;
    Coleccion cola;
    cola.setOrdenar(&qs);
    cola.Ordenar();
    cola.setOrdenar(&ms);
    cola.Ordenar();
    cola.setOrdenar(&hp);
    cola.Ordenar();
    return 0;
}
