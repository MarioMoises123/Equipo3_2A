#include <iostream>
#include <cstdlib>
#include <conio.h>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

void limpiar_pantalla()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Función auxiliar para invertir una cadena
string invertirCadena(const string &cadena)
{
    string invertida;
    for (int i = cadena.length() - 1; i >= 0; i--)
    {
        invertida += cadena[i];
    }
    return invertida;
}

// Función para el modo espejo
void asAmirror()
{
    char opcion;
    do
    {
        limpiar_pantalla();

        string frase;
        cout << "Ingrese una frase: ";
        getline(cin >> ws, frase);

        string resultado;
        string palabra;
        for (int i = 0; i < frase.length(); i++)
        {
            if (frase[i] == ' ' || i == frase.length() - 1)
            {
                if (i == frase.length() - 1)
                    palabra += frase[i];
                resultado += invertirCadena(palabra) + ' ';
                palabra = "";
            }
            else
            {
                palabra += frase[i];
            }
        }

        cout << "Frase invertida: " << resultado << endl;

        cout << "\nPresione 's' para regresar al menú principal o cualquier otra tecla para repetir: ";
        cin >> opcion;
    } while (opcion != 's');
}

// Función para eliminar letras 'a', 'b' y 'c' de una cadena
string deleteABC(const string &cadena)
{
    string modificada;
    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] != 'a' && cadena[i] != 'b' && cadena[i] != 'c')
        {
            modificada += cadena[i];
        }
    }
    return modificada;
}

// Función para la opción 2
void funcion2()
{
    char opcion;
    do
    {
        limpiar_pantalla();

        string cadena;
        cout << "Ingrese una cadena de caracteres: ";
        getline(cin >> ws, cadena);

        string resultado = deleteABC(cadena);

        cout << "Cadena modificada: " << resultado << endl;

        cout << "\nPresione 's' para regresar al menú principal o cualquier otra tecla para repetir: ";
        cin >> opcion;
    } while (opcion != 's');
}

// Función para la opción 3
void funcion3()
{
    char opcion;
    do
    {
        limpiar_pantalla();

        const int tam = 15;
        int numeros[tam];

        cout << "Ingrese 15 números enteros entre 0 y 200:\n";
        for (int i = 0; i < tam; i++)
        {
            cout << "Número " << i + 1 << ": ";
            cin >> numeros[i];
        }

        int mayores[tam];
        int contador = 0;
        for (int i = 0; i < tam; i++)
        {
            if (numeros[i] > 100)
            {
                mayores[contador] = numeros[i];
                contador++;
            }
        }

        cout << "\nNúmeros mayores a 100:\n";
        for (int i = 0; i < contador; i++)
        {
            cout << mayores[i] << " ";
        }
        cout << endl;

        cout << "\nPresione 's' para regresar al menú principal o cualquier otra tecla para repetir: ";
        cin >> opcion;
    } while (opcion != 's');
}

// Función para la opción 4
void listados()
{
   	char salir;
    do
    {
limpiar_pantalla();

        cout << "*********************** LISTADOS *****************************\n\n";

        int opcion;
        cout << "Seleccione el tipo de operación:\n";
        cout << "1. Capturar Nombres\n";
        cout << "2. Capturar Enteros\n";
        cout << "0. Regresar al menú principal\n";
        cout << "\nSelecciona una opción: ";
        cin >> opcion;


        int cantidad;
        cout << "Ingrese la cantidad de datos a capturar: ";
        cin >> cantidad;

        if (opcion == 1)
        {
            string nombres[cantidad];
            for (int i = 0; i < cantidad; i++)
            {
                cout << "Ingrese el nombre " << i + 1 << ": ";
                cin >> nombres[i];
            }

            cout << "Listado de nombres:\n";
            for (int i = 0; i < cantidad; i++)
            {
                cout << nombres[i] << endl;
            }
        }
        else if (opcion == 2)
        {
            int enteros[cantidad];
            for (int i = 0; i < cantidad; i++)
            {
                cout << "Ingrese el entero " << i + 1 << ": ";
                cin >> enteros[i];
            }

            cout << "Listado de enteros:\n";
            for (int i = 0; i < cantidad; i++)
            {
                cout << enteros[i] << endl;
            }
        }
        else
        {
            cout << "Opción inválida\n";
        }


        cout << "\nPresione 's' para regresar al menú principal o cualquier otra tecla para repetir: ";
        cin >> salir;
    } while (salir != 's'  );
}

// Función para contar coincidencias en un arreglo
int contarCoincidencias(int numeros[], int tam, int numeroBuscar)
{
    int contador = 0;
    for (int i = 0; i < tam; i++)
    {
        if (numeros[i] == numeroBuscar)
        {
            contador++;
        }
    }
    return contador;
}

// Función para la opción 5
void funcion5()
{
    char opcion;
    do
    {
        limpiar_pantalla();

        const int tam = 10;
        int numeros[tam];

        cout << "Ingrese 10 números enteros:\n";
        for (int i = 0; i < tam; i++)
        {
            cout << "Número " << i + 1 << ": ";
            cin >> numeros[i];
        }

        int numeroBuscar;
        cout << "\nIngrese el número que desea buscar: ";
        cin >> numeroBuscar;

        int coincidencias = contarCoincidencias(numeros, tam, numeroBuscar);

        cout << "\nEl número " << numeroBuscar << " se repite " << coincidencias << " veces.\n";

        cout << "\nPresione 's' para regresar al menú principal o cualquier otra tecla para repetir: ";
        cin >> opcion;
    } while (opcion != 's');
}

// Función para la opción 6
void funcion6()
{
    char opcion;
    do
    {
        limpiar_pantalla();

        const int tam = 5;
        string nombres[tam];

        cout << "Ingrese 5 nombres:\n";
        for (int i = 0; i < tam; i++)
        {
            cout << "Nombre " << i + 1 << ": ";
            cin >> nombres[i];
        }

        string resultado;
        for (int i = 0; i < tam; i++)
        {
            resultado += nombres[i];
            if (i != tam - 1)
            {
                resultado[resultado.length() - 1] = toupper(resultado[resultado.length() - 1]);
            }
        }

        cout << "\nNombres concatenados en formato Camel: " << resultado << endl;

        cout << "\nPresione 's' para regresar al menú principal o cualquier otra tecla para repetir: ";
        cin >> opcion;
    } while (opcion != 's');
}

// Función para la opción 7
void funcion7()
{
    char opcion;
    do
    {
        limpiar_pantalla();

        int n;
        cout << "Ingrese el número de filas del triángulo: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        cout << "\nPresione 's' para regresar al menúprincipal o cualquier otra tecla para repetir: ";
        cin >> opcion;
    } while (opcion != 's');
}

int main()
{
    int opc = 0;
    do
    {
        limpiar_pantalla();
        cout << "*********************** MENU PRINCIPAL *****************************\n\n\n\n\n";
        cout << "1 Modo Espejo\n";
        cout << "2 BorrarABC\n";
        cout << "3 Función3\n";
        cout << "4 Listados\n";
        cout << "5 Coincidencias\n";
        cout << "6 CamelString\n";
        cout << "7 Dibuja Triángulo\n";
        cout << "0 Salir\n";
        cout << "\n\n\nSelecciona alguna opción:_ ";
        cin >> opc;
        limpiar_pantalla();
        switch (opc)
        {
        case 1:
            asAmirror();
            break;
        case 2:
            funcion2();
            break;
        case 3:
            funcion3();
            break;
        case 4:
            listados();
            break;
        case 5:
            funcion5();
            break;
        case 6:
            funcion6();
            break;
        case 7:
            funcion7();
            break;
        }
    } while (opc != 0);

    return 0;
}
