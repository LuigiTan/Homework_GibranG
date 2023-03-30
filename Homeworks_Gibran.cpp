
#include <iostream>
using namespace std;
void Tarea1();
void PoN();
void Sum2Dig();
void DigPar();
void NumAlto();
void ParMinMax();



void PoN()
{
    int Num = 0;
    bool RepPoN = true;
    do
    {
        cout << "Introduzca un numero para determinar si es positivo o negativo" << endl;
        cin >> Num;

        if (Num < 0)
        {
            cout << "Su numero es Negativo" << endl;
        }
        else if (Num > 0)
        {
            cout << "Su numero es Positivo" << endl;
        }
        else
        {
            cout << "Numero no valido, intente de nuevo" << endl;
        }
    } while (RepPoN == true);

}

void Sum2Dig()
{
    int NumEnt = 0;
    int NumEx = 0;
    int SumNum = 0;
    bool RepSum2Dig = true;
    do
    {
        cout << "Introduzca un numero de dos digitos para sumar estos" << endl;
        cin >> NumEnt; //Usemos como ejemplo el numero 25 

        if (NumEnt > 99 || NumEnt < 10) //25 no aplica aqui asi que pasa a la siguiente linea
        {
            cout << "Numero no valido, tiene que ser de dos digitos" << endl;
        }
        else
        {
            while (NumEnt != 0) {
                NumEx = NumEnt % 10;    //El modulo de 25/10 es 5, esto se guarda en NumEx
                NumEnt = NumEnt / 10;     //El numero ingresado se iguala a su divsion entre 10 en entero en este caso es 2
                SumNum = SumNum + NumEx;    //La variable SumNum se iguala a esta misma mas el 5 de NumEx
            }                               //Se repite esto hasta que el numero ingresado sean puros decimales al dividirse por 10
                                            //Lo cual como es un *int* va a quedar en 0 cuando no queden digitos
            cout << "La suma de los 2 digitos es de: " << SumNum << endl;//La respuesta seria 7
        }

    } while (RepSum2Dig == true);//Se sigue repitiendo hasta que le meta una opcion para continuar 


}

void DigPar()
{
    int NumEnt = 0;
    int NumDerecha = 0;
    int NumIzquierda = 0;

    bool RepDigPar = true;
    do
    {
        cout << "Introduzca un numero de dos digitos para determinar cual de los 2 es par" << endl;
        cin >> NumEnt;

        if (NumEnt > 99 || NumEnt < 10)
        {
            cout << "Numero no valido, tiene que ser de dos digitos" << endl;
        }
        else
        {

            NumDerecha = NumEnt % 10;   ///Numero de la derecha se guarda aqui 
            NumIzquierda = NumEnt / 10;   //El de la izquierda se guarda aqui usando la misma logica que del ejercicio anterior  

            if (NumDerecha % 2 == 0 && NumIzquierda % 2 == 0)
            {
                cout << " !!!!!Ambos digitos son par!!!! " << endl;
            }
            else if (NumDerecha % 2 == 0)
            {
                cout << "El numero " << NumDerecha << " es par" << endl;
            }
            else if (NumIzquierda % 2 == 0)
            {
                cout << "El numero " << NumIzquierda << " es par" << endl;
            }
            else
            {
                cout << "Ninguno es par" << endl;
            }


        }

    } while (RepDigPar == true);
}

void NumAlto()
{
    int Num1 = 0;
    int Num2 = 0;
    int Num3 = 0;
    bool RepNumAlto = true;
    do
    {
        cout << "Introduzca tres numeros para determinar cual es el mayor" << endl;
        cout << "Introduzca el 1er numero" << endl;
        cin >> Num1;
        cout << "Introduzca el 2do numero" << endl;
        cin >> Num2;
        cout << "Introduzca el 3er numero" << endl;
        cin >> Num3;

        if (Num1 > Num2 && Num1 > Num3)
        {
            cout << "El numero mas grande es: " << Num1 << endl;
        }
        else if (Num2 > Num1 && Num2 > Num3)
        {
            cout << "El numero mas grande es: " << Num2 << endl;
        }
        else if (Num3 > Num1 && Num3 > Num2)
        {
            cout << "El numero mas grande es: " << Num3 << endl;
        }


    } while (RepNumAlto == true);
}

void ParMinMax()
{
    int Min = 0;
    int Max = 0;
    bool RepParMinMax = true;

    do
    {
        cout << "Introduzca el rango Maximo" << endl;
        cin >> Max;
        cout << "Introduzca el rango Minimo" << endl;
        cin >> Min;
        cout << "Los numero pares del " << Min << " al " << Max << " son:" << endl;
        for (int i = Min; i <= Max; i++)
        {

            if (i % 2 == 0)
            {

                cout << i << ", ";
            }
        }
        cout << endl;
    } while (RepParMinMax == true);

}


void Tarea1()
{
    int MenuTarea1 = 0;
    cout << "-----------Elija que ejercicio desea ver-----------" << endl;
    cout << "1. Determinar si un numero es positivo o negativo" << endl;
    cout << "2. Suma de los 2 digitos de un numero dado" << endl;
    cout << "3. Determinar si los digitos de un numero son par o impar" << endl;
    cout << "4. Determinar que numero es el mas alto de 3 numeros" << endl;
    cout << "5. Todos los numeros pares dentro de un rango dado" << endl;
    cin >> MenuTarea1;
    switch (MenuTarea1)
    {
    case 1:
        PoN();
        break;

    case 2:
        Sum2Dig();
        break;

    case 3:
        DigPar();
        break;

    case 4:
        NumAlto();
        break;
    case 5:
        ParMinMax();
        break;
    default:
        cout << "Opcion no valida";
        break;

    }

}

int main()
{
    int HWChoice = 0;
    bool ExitMain = false;

    do
    {
        cout << "Bienvenido el conjunto de tareas realizadas por Gibran Garcia Coss y Leon" << endl;
        cout << "Durante la clase de Programacion 2 en la carrera de Ingenieria de programacion de videojuegos" << endl;
        cout << "Elija la tarea que quiera correr: \n1.Tarea 1\n2.Salir" << endl;
        cin >> HWChoice;

        switch (HWChoice)
        {
        case 1:
            system("cls");
            Tarea1();
            break;

        case 2:
            ExitMain = true;
            break;

        default:
            cout << "Opcion no valida" << endl;
        }

    } while (ExitMain == false);

}

