#include <iostream>
using namespace std;


int main() {
    int personas;
    int costoPizza = 25000;
    int costoHamburguesa = 10000;
    int operacion;
    int cantidadHamburgesas;
    float descuento = 0.1;
    int dj = 240000;
    int costoDj;
    int totalCover;


    cout<<"Ingrese el numero de persona que asistieron a la fiesta: ";
    cin>>personas;

    if (personas <= 18){
        if(personas <= 4){
            cout<<"No hay pizza";
        }
        if(personas >= 5 && personas <= 11){
            operacion = costoPizza / personas;
            cout<<"Tiene derecho a 1 pizza y el costo por persona: " << operacion<<endl;
            costoDj = dj / personas;
            totalCover = costoDj + operacion;
            cout<<"Su cover total es de: "<<totalCover<<endl;
            
        }
        if(personas >=12 && personas <= 14){
            operacion = costoPizza / personas;
            cout<<"Tiene derecho a 2 pizza y el costo por persona es: " << operacion<<endl;
            costoDj = dj / personas;
            totalCover = costoDj + operacion;
            cout<<"Su cover total es de: "<<totalCover<<endl;
        }
        if (personas >= 15 && personas <= 18){
            operacion = costoPizza / personas;
            cout<<"Tiene derecho a 3 pizza y el costo por persona es: " << operacion<<endl;
            costoDj = dj / personas;
            totalCover = costoDj + operacion;
            cout<<"Su cover total es de: "<<totalCover<<endl;
        }
        
    }


    else if (personas >= 19 && personas <=29){
        cout<<"Cuantas Hamburguesas desea llevar: ";
        cin>>cantidadHamburgesas;
        operacion = cantidadHamburgesas * costoHamburguesa;
        cout<<"El costo de sus hamburguesas es: "<<operacion<<endl;
        costoDj = dj / personas;
        totalCover = costoDj + operacion;
        cout<<"Su cover total es de: "<<totalCover<<endl;
    }else{
        cout<<"Cuantas Hamburguesas desea llevar: ";
        cin>>cantidadHamburgesas;
        operacion = cantidadHamburgesas * costoHamburguesa - descuento;
        cout<<"El costo de las hamburguesas es de: "<<operacion<<endl;
        costoDj = dj / personas;
        totalCover = costoDj + operacion;
        cout<<"Su cover total es de: "<<totalCover<<endl;
    }

    return 0;
} 