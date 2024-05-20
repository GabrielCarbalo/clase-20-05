#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
    int opcion, ganar = 0, perder = 0, empatar = 0, terminar =0;
    do
    {
        cout << "Tiene que ingresar las siguientes opciones" << endl << endl;
        cout << "1. piedra: " << endl << "2. papel: " << endl << "3. tijera: " << endl;
        int opcpc, t;
         t = time(NULL);
        srand(t);
        t=rand()%3+1;

        cout << "Ingrese numero para jugar: ";
        cin >> opcion;

        switch (opcpc)
        {
        case 1:

        if (opcion==1)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "EMPATE" << endl;
            empatar = empatar + 1;
        }
        else if (opcion==2)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "Gana" << endl;
            ganar = ganar + 1;
        }
        else if (opcion==3)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "pierde" << endl;
            perder = perder + 1;
        }
        else 
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << endl << endl << "El juego ah termino:) " << endl;
        }
        break;
        
        case 2:
        if (opcion==1)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "EMPATE" << endl;
            empatar = empatar + 1;
        }
        else if (opcion==2)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "Gana" << endl;
            ganar = ganar + 1;
        }
        else if (opcion==3)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "pierde" << endl;
            perder = perder + 1;
        }
        else 
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << endl << endl << "El juego ah termino:) " << endl;
        }
        break;
        
        case 3:
          if (opcion==1)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "EMPATE" << endl;
            empatar = empatar + 1;
        }
        else if (opcion==2)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "Gana" << endl;
            ganar = ganar + 1;
        }
        else if (opcion==3)
        {
            cout << "La computadora elige: " << opcpc << endl;
            cout << "pierde" << endl;
            perder = perder + 1;
        }

            break;
        
        default:
            break;
        }

    } while (opcion != terminar);

    cout << "Veces que has ganado: " << ganar << endl;
    cout << "Veces que has empatado: " << empatar << endl;
    cout << "Veces que has perdido: " << perder << endl;
    
    return 0; 
}