#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()

{
    int opcion, nuci, total, a, opcion2;
    char nompa[100];
    char notra[100];
    char desc[100];
    float horas;
    float catra;
    float prun;
    do {
        cout << "bienvenido al sonsultorio de tatalan (Angel Jonathan Garza Orozco)" << endl;
        cout << "1-agendar una cita <3" << endl;
        cout << "2-modificar una cita" << endl;
        cout << "3-eliminar cita" << endl;
        cout << "4-lista de citas vigentes" << endl;
        cout << "5-limpar pantalla" << endl;
        cout << "6-salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el numero de cita" << endl;
            cin >> nuci;
            cout << "Ingrese el nombre del paciente" << endl;
            cin.ignore();
            cin.getline(nompa, 100, '\n');
            cout << "Ingrese la hora del tratamiento (favor de ingresarlo en 24 horas)" << endl;
            cin >> horas;
            cout << "Ingrese el nombre del tratamiento" << endl;
            cin.ignore();
            cin.getline(notra, 100, '\n');
            cout << "Ingrese una descripcion" << endl;
            cin.ignore();
            cin.getline(desc, 100, '\n');
            cout << "Ingrese la cantidad del tratamiento" << endl;
            cin >> catra;
            cout << "Ingrese el precio unitario" << endl;
            cin >> prun;
            total = prun * catra;
            cout << "El total es:" << total << endl;

            cout << "¿desear regresar?" << endl;
            cout << "1-si" << endl;
            cout << "2-no" << endl;
            cin >> a;
            break;

        case 2:
            cout << "Ingrese el numero de cita" << endl;
            cin >> nuci;
            cout << "Ingrese el dato que desee modificar" << endl;
            cout << "1-Nombre del paciente" << endl;
            cout << "2-Hora del tratamiento" << endl;
            cout << "3-Nombre del tratamiento" << endl;
            cout << "4-cantidad del tratamiento" << endl;
            cout << "5-Presio Unitario" << endl;
            
            cin>> opcion2;
                switch (opcion2)
                {
                case 1:
                    cout << "Ingrese el nuevo nombre del paciente" << endl;
                        cin.ignore();
                    cin.getline(nompa, 100, '\n');
                    break;
                case 2:
                    cout << "Igrese la nueva hora" << endl;
                    cin >> horas;
                    break;
                case 3:
                    cout << "Ingrese el nuevo nombre del tratamiento" << endl;
                        cin.ignore();
                    cin.getline(notra, 100, '\n');
                case 4:
                    cout << "Ingrese una nueva cantidad de tratamiento" << endl;
                    cin >> catra;
                    break;
                case 5:
                    cout << "Ingrese un nuevo presio unitario" << endl;
                    cin >> prun;
                    break;
                

                }
                cout << "¿desear regresar?" << endl;
                cout << "1-si" << endl;
                cout << "2-no" << endl;
                cin >> a;
                break;
        case 3:
            break;
        case 4:
            break;

        }




    } while (a == 1);
    cout << "muchas gracias por su visita, que tenga un buen dia" << endl;
}