#include "View.h"

View::View(){
    
}

void View::mostrarMenu(){
    int opcion, id;
    do{
        cout << "Menu:" << endl
            << "1. Imprimir Recaudo Admin." << endl
            << "2. Imprimir Beneficios." << endl
            << "3. Imprimir propietarios con parqueadero." << endl
            << "4. Imprimir pago Admin de propietario." << endl
            << "5. Cambiar tipo de propietario." << endl
            << "0. Salir." << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
                edificio.recaudarAdmin();
                break;
            case 2:
                cout << "Escriba la id del propietario: ";
                cin >> id;
                try{
                    cout << edificio.mostrarBeneficios(id);
                }catch(std::domain_error &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 3:
                cout << edificio.mostrarPropParqueadero();
                break;
            case 4:
                cout << "Escriba la id del propietario: ";
                cin >> id;
                try{
                    edificio.mostrarPagoAdmin(id);
                }catch(std::domain_error &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 5:
                int idFundador, idReventa;
                string nombrePropReventa;
                cout << "Escriba la id del propietario que va a vender: ";
                cin >> idFundador;
                cout << "Escriba la id del nuevo propietario: ";
                cin >> idReventa;
                cout << "Escriba el nombre del nuevo propietario: ";
                fflush(stdin);
                getline(cin, nombrePropReventa);
                try{
                    edificio.cambiarTipoPropietario(idFundador, idReventa,nombrePropReventa);
                }catch(std::domain_error &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
        }
    }while(opcion);
}