#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void Tarea1();
void PiedraPapeloTijera();
void PoN();
void Sum2Dig();
void DigPar();
void NumAlto();
void ParMinMax();
void JuegoAhorcado();

int main()
{
    int HWChoice = 0;
    bool ExitMain = false;

    do
    {
        cout << "Bienvenido el conjunto de tareas realizadas por Gibran Garcia Coss y Leon" << endl;
        cout << "Durante la clase de Programacion 2 en la carrera de Ingenieria de programacion de videojuegos" << endl;
        cout << "Elija la tarea que quiera correr: \n1.Tarea 1\n2.Piedra Papel o Tijera\n3.Juego de ahorcado \n4.Salir" << endl;
        cin >> HWChoice;

        switch (HWChoice)
        {
        case 1:
            system("cls");
            Tarea1();
            break;

        case 2:
            system("cls");
            PiedraPapeloTijera();
            break;

        case 3:
            system("cls");
            JuegoAhorcado();
            break;
        case 4:
            ExitMain = true;
            break;
        default:
            cout << "Opcion no valida" << endl;
        }

    } while (ExitMain == false);

}


void JuegoAhorcado()
{
    int TotalAttempts = 6;
    int UserAttempts = 0;

    vector<string>WordOptions;
    WordOptions.push_back("ABEJA");
    WordOptions.push_back("OSCURIDAD");
    WordOptions.push_back("ESPADA");
    WordOptions.push_back("CASTILLO");
    WordOptions.push_back("ESTERNOMASCLOIDEO");
    WordOptions.push_back("PROTOCOL");

    srand(time(NULL));
    random_shuffle(WordOptions.begin(), WordOptions.end());
    const string CHOSENWORD = WordOptions[0];
    string UsedLetters = "";
    string WordsSoFar(CHOSENWORD.size(),  '-' );
    char UserLetter;
    cout << "Bienvenido al juego del ahorcado, tienes 6 vidas para adivinar la palabra seleccionada" << endl;
    cout << "[TEST MODE]: Tu palabra es: " << CHOSENWORD << " recuerda, solo tienes 6 vidas. Este es el espacio vacio de esta: " << WordsSoFar << endl;

      
        cout << " ___________.._______" << endl;
        cout << "| .__________))______|" << endl;
        cout << "| | / /      ||" << endl;
        cout << "| |/ /       ||" << endl;
        cout << "| | /        ||     " << endl;
        cout << "| |/         ||       " << endl;
        cout << "| |          ||      " << endl;
        cout << "| |         //\\\\     " << endl;
        cout << "| |        ((  ))" << endl;
        cout << "| |         `--'      " << endl;
        cout << "| |       " << endl;
        cout << "| |      " << endl;
        cout << "| |     " << endl;
        cout << "| |         " << endl;
        cout << "| |          " << endl;
        cout << "| |          " << endl;
        cout << "| |         " << endl;
        cout << "| |         " << endl;
        cout << "----------| _        | ---| " << endl;
        cout << "|-|-------\\ \\            " << endl;
        cout << "| |        \\ \\       | |" << endl;
        cout << ": :         \\ \\       : :  " << endl;
        cout << ". .          `'       . ." << endl;
        do
        {

            do
            {

            
               cout << "Introduce las letras que creas que estan en la palabra seleccionada " << endl;
               cout << "Tu progreso hasta ahora:  " << WordsSoFar << endl;
               cout << "Ya has usado estas letras hasta ahora: " << UsedLetters << endl;
               cin >> UserLetter;
               system("cls");
               if (UserLetter == '0' || UserLetter == '1' || UserLetter == '2' || UserLetter == '3' || UserLetter == '4' || UserLetter == '5' || UserLetter == '6' || UserLetter == '7' || UserLetter == '8' || UserLetter == '9')
               {
                   cout << "No se permiten numeros, ni ninguna de las palabras los contienen, Cease please" << endl;
               }


            } while (UserLetter == '0' || UserLetter == '1' || UserLetter == '2' || UserLetter == '3' || UserLetter == '4' || UserLetter == '5' || UserLetter == '6' || UserLetter == '7' || UserLetter == '8' || UserLetter == '9');
       
            
       UserLetter = toupper(UserLetter);
       if (UsedLetters.find(UserLetter) != string::npos)
       {
           cout << "             ------------------------------------------------------------------" << endl;
           cout << "             |                                                                |" << endl;
           cout << ">>>>>>>>>>>>>|Esa letra ya la has usado, te la perdonaremos asi que elige otra|<<<<<<<<<<<<<" << endl;
           cout << "             |                                                                |" << endl;
           cout << "             ------------------------------------------------------------------" << endl;

       }
       else if (CHOSENWORD.find(UserLetter) != string::npos)
       {
           for (int i = 0; i < CHOSENWORD.length(); i++)
           {
               if (CHOSENWORD[i] == UserLetter)
                   WordsSoFar[i] = UserLetter;
           }
       

       }
       else
       {
           UserAttempts++;
           UsedLetters += UserLetter;
       }
       switch (UserAttempts)
       {
       case 0:
           cout << " ___________.._______" << endl;
           cout << "| .__________))______|" << endl;
           cout << "| | / /      ||" << endl;
           cout << "| |/ /       ||" << endl;
           cout << "| | /        ||     " << endl;
           cout << "| |/         ||       " << endl;
           cout << "| |          ||      " << endl;
           cout << "| |         //\\\\     " << endl;
           cout << "| |        ((  ))" << endl;
           cout << "| |         `--'      " << endl;
           cout << "| |       " << endl;
           cout << "| |      " << endl;
           cout << "| |     " << endl;
           cout << "| |         " << endl;
           cout << "| |          " << endl;
           cout << "| |          " << endl;
           cout << "| |         " << endl;
           cout << "| |         " << endl;
           cout << "----------| _        | ---| " << endl;
           cout << "|-|-------\\ \\            " << endl;
           cout << "| |        \\ \\       | |" << endl;
           cout << ": :         \\ \\       : :  " << endl;
           cout << ". .          `'       . ." << endl;
           break;
       case 1:
           cout << " ___________.._______" << endl;
           cout << "| .__________))______|" << endl;
           cout << "| | / /      ||" << endl;
           cout << "| |/ /       ||" << endl;
           cout << "| | /        ||.-''." << endl;
           cout << "| |/         |/     \\ " << endl;
           cout << "| |          ||     | " << endl;
           cout << "| |          (\\`_.' " << endl;
           cout << "| |         " << endl;
           cout << "| |        " << endl;
           cout << "| |        " << endl;
           cout << "| |      " << endl;
           cout << "| |     " << endl;
           cout << "| |        " << endl;
           cout << "| |         " << endl;
           cout << "| |          " << endl;
           cout << "| |          " << endl;
           cout << "| |          " << endl;
           cout << "----------| _        | ---| " << endl;
           cout << "|-|-------\\ \\            " << endl;
           cout << "| |        \\ \\        | |" << endl;
           cout << ": :         \\ \\       : :  " << endl;
           cout << ". .          `'       . ." << endl;
           
           break;
       case 2:
           cout << " ___________.._______" << endl;
           cout << "| .__________))______|" << endl;
           cout << "| | / /      ||" << endl;
           cout << "| |/ /       ||" << endl;
           cout << "| | /        ||.-''." << endl;
           cout << "| |/         |/     \\ " << endl;
           cout << "| |          ||     | " << endl;
           cout << "| |          (\\`_.' " << endl;
           cout << "| |         .-`--'. " << endl;
           cout << "| |         Y     Y " << endl;
           cout << "| |          |   |  " << endl;
           cout << "| |          |   | " << endl;
           cout << "| |          |   | " << endl;
           cout << "| |          -----" << endl;
           cout << "| |          " << endl;
           cout << "| |         " << endl;
           cout << "| |          " << endl;
           cout << "| |         " << endl;
           cout << "----------| _        | ---| " << endl;
           cout << "|-|-------\\ \\            " << endl;
           cout << "| |        \\ \\        | |" << endl;
           cout << ": :         \\ \\       : :  " << endl;
           cout << ". .          `'       . ." << endl;
           break;
       case 3:
           cout << " ___________.._______" << endl;
           cout << "| .__________))______|" << endl;
           cout << "| | / /      ||" << endl;
           cout << "| |/ /       ||" << endl;
           cout << "| | /        ||.-''." << endl;
           cout << "| |/         |/     \\ " << endl;
           cout << "| |          ||     | " << endl;
           cout << "| |          (\\`_.' " << endl;
           cout << "| |         .-`--'. " << endl;
           cout << "| |        /Y     Y\\ " << endl;
           cout << "| |       // |   | " << endl;
           cout << "| |      //  |   |  " << endl;
           cout << "| |    (')   |   |   " << endl;
           cout << "| |          -----" << endl;
           cout << "| |                    " << endl;
           cout << "| |                 " << endl;
           cout << "| |                 " << endl;
           cout << "| |                 " << endl;
           cout << "----------| _        | ---| " << endl;
           cout << "|-|-------\\ \\            " << endl;
           cout << "| |        \\ \\        | |" << endl;
           cout << ": :         \\ \\       : :  " << endl;
           cout << ". .          `'       . ." << endl;
           break;
       case 4:
           cout << " ___________.._______" << endl;
           cout << "| .__________))______|" << endl;
           cout << "| | / /      ||" << endl;
           cout << "| |/ /       ||" << endl;
           cout << "| | /        ||.-''." << endl;
           cout << "| |/         |/     \\ " << endl;
           cout << "| |          ||     | " << endl;
           cout << "| |          (\\`_.' " << endl;
           cout << "| |         .-`--'. " << endl;
           cout << "| |        /Y     Y\\ " << endl;
           cout << "| |       // |   | \\\\ " << endl;
           cout << "| |      //  |   |  \\\\" << endl;
           cout << "| |    (')   |   |   (`)" << endl;
           cout << "| |          -----" << endl;
           cout << "| |                    " << endl;
           cout << "| |                 " << endl;
           cout << "| |                 " << endl;
           cout << "| |                 " << endl;
           cout << "----------| _        | ---| " << endl;
           cout << "|-|-------\\ \\            " << endl;
           cout << "| |        \\ \\        | |" << endl;
           cout << ": :         \\ \\       : :  " << endl;
           cout << ". .          `'       . ." << endl;
           break;
       case 5:
           cout << " ___________.._______" << endl;
           cout << "| .__________))______|" << endl;
           cout << "| | / /      ||" << endl;
           cout << "| |/ /       ||" << endl;
           cout << "| | /        ||.-''." << endl;
           cout << "| |/         |/     \\ " << endl;
           cout << "| |          ||     | " << endl;
           cout << "| |          (\\`_.' " << endl;
           cout << "| |         .-`--'. " << endl;
           cout << "| |        /Y     Y\\ " << endl;
           cout << "| |       // |   | \\\\ " << endl;
           cout << "| |      //  |   |  \\\\" << endl;
           cout << "| |    (')   |   |   (`)" << endl;
           cout << "| |          ||   " << endl;
           cout << "| |          ||   " << endl;
           cout << "| |          ||   " << endl;
           cout << "| |          ||   " << endl;
           cout << "| |         / |     " << endl;
           cout << "----------| _`-'     | ---| " << endl;
           cout << "|-|-------\\ \\            " << endl;
           cout << "| |        \\ \\        | |" << endl;
           cout << ": :         \\ \\       : :  " << endl;
           cout << ". .          `'       . ." << endl;
           break;
       case 6:
           cout << " ___________.._______" << endl;
           cout << "| .__________))______|" << endl;
           cout << "| | / /      ||" << endl;
           cout << "| |/ /       ||" << endl;
           cout << "| | /        ||.-''." << endl;
           cout << "| |/         |/     \\ " << endl;
           cout << "| |          ||     | " << endl;
           cout << "| |          (\\`_.' " << endl;
           cout << "| |         .-`--'. " << endl;
           cout << "| |        /Y     Y\\ " << endl;
           cout << "| |       // |   | \\\\ " << endl;
           cout << "| |      //  |   |  \\\\" << endl;
           cout << "| |    (')   |   |   (`)" << endl;
           cout << "| |          || ||" << endl;
           cout << "| |          || ||" << endl;
           cout << "| |          || ||" << endl;
           cout << "| |          || ||" << endl;
           cout << "| |         / | | \\ " << endl;
           cout << "----------| _`-' `-' | ---| " << endl;
           cout << "|-|-------\\ \\            " << endl;
           cout << "| |        \\ \\        | |" << endl;
           cout << ": :         \\ \\       : :  " << endl;
           cout << ". .          `'       . .\n\n" << endl;

           cout << "             ------------------------------------------------------------------" << endl;
           cout << ">>>>>>>>>>>>>|                                                                |<<<<<<<<<<<<<" << endl;
           cout << ">>>>>>>>>>>>>|                      AHORCADO, Fin del juego                   |<<<<<<<<<<<<<" << endl;
           cout << ">>>>>>>>>>>>>|                                                                |<<<<<<<<<<<<<" << endl;
           cout << "             ------------------------------------------------------------------" << endl;
           break;
       }
       if (WordsSoFar==CHOSENWORD)
       {
           cout << "             ------------------------------------------------------------------" << endl;
           cout << "             |                                                                |" << endl;
           cout << ">>>>>>>>>>>>>|          CORRECTO!!! GANASTE Y TE SALVASTE DE LA HORCA         |<<<<<<<<<<<<<" << endl;
           cout << "             |                                                                |" << endl;
           cout << "             ------------------------------------------------------------------" << endl;

       }
        } while (WordsSoFar!=CHOSENWORD && UserAttempts!=TotalAttempts);
    

    
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

void PiedraPapeloTijera()
{

    int SeleccionCompu;
    int SeleccionUsuario = 0;
    int PuntuacionUsuario = 0;
    int PuntuacionCompu = 0;

    cout << "Bienvenido a el piedra papel o tijera!" << endl;
    do {
        cout << "Jugaras contra la maquina y el primero en ganar 2 de 3 ganara el juego" << endl;
        do {
            srand(time(NULL));
            SeleccionCompu = (rand() % 2) + 1; ///Se pone aqui para que se genere un numero nuevo cada ciclo
            cout << "Elije tu arma 1.Piedra 2.Papel 3.Tijera" << endl;
            cout << "Puntuacion del usuario: " << PuntuacionUsuario << endl;
            cout << "Puntuacion de la computadora: " << PuntuacionCompu << endl;
            cout << "MODO TEST: El numero que eligio la computadora es: " << SeleccionCompu <<endl;
            cin >> SeleccionUsuario;
            switch (SeleccionUsuario) {
            case 1:
                cout << "Seleccionaste: **PIEDRA**" << endl;
                break;

            case 2:
                cout << "Seleccionaste: **PAPEL**" << endl;
                break;

            case 3:
                cout << "Seleccionaste: **TIJERA**" << endl;
                break;

            default:
                cout << "Opcion invalida, porfavor selecciona uno de los 3 numeros señalados" << endl;
                break;

            }
        } while (SeleccionUsuario > 3 || SeleccionUsuario < 1);

        ///Informamos que eligio la computadora///
        if (SeleccionCompu == 1) {
            cout << "Tu Computadora selecciono: **PIEDRA**\n" << endl;
        }
        else if (SeleccionCompu == 2) {
            cout << "Tu Computadora selecciono: **PAPEL**\n" << endl;
        }
        else if (SeleccionCompu == 3) {
            cout << "Tu Computadora selecciono: **TIJERA**\n" << endl;
        }

        ///Comparacion de opciones///
        ///Casos en los que se gana///
        if (SeleccionUsuario == 1 && SeleccionCompu == 3) {
            cout << "GANASTE LA RONDA\n" << endl;
            PuntuacionUsuario = PuntuacionUsuario + 1;
        }
        else if (SeleccionUsuario == 2 && SeleccionCompu == 1) {
            cout << "GANASTE LA RONDA\n" << endl;
            PuntuacionUsuario = PuntuacionUsuario + 1;
        }
        else if (SeleccionUsuario == 3 && SeleccionCompu == 2) {
            cout << "GANASTE LA RONDA\n" << endl;
            PuntuacionUsuario = PuntuacionUsuario + 1;
        }

        ///Casos en los que se pierde///

        else if (SeleccionUsuario == 3 && SeleccionCompu == 1) {
            cout << "Perdiste la ronda...\n" << endl;
            PuntuacionCompu = PuntuacionCompu + 1;
        }
        else if (SeleccionUsuario == 1 && SeleccionCompu == 2) {
            cout << "Perdiste la ronda...\n" << endl;
            PuntuacionCompu = PuntuacionCompu + 1;
        }
        else if (SeleccionUsuario == 2 && SeleccionCompu == 3) {
            cout << "Perdiste la ronda...\n" << endl;
            PuntuacionCompu = PuntuacionCompu + 1;
        }

        ///Caso de empate///

        else if (SeleccionUsuario == SeleccionCompu) {
            cout << "Los dos seleccionaron lo mismo..." << endl;
        }


        if (PuntuacionUsuario == 2) {
            cout << "Ganaste el juego!!!!" << endl;
            system("Color 01"); //Recordatorio de que en esta funcion el primer caracter (despues de color) es el background y el segundo es el color del texto
            Sleep(250);
            system("Color 04");
            Sleep(250);
            system("Color 02");
            Sleep(250);
            system("Color 01");
            Sleep(250);
            system("Color 07");
        }
        else if (PuntuacionCompu == 2) {
            cout << "La computadora gano el juego, vuelve a intentarlo" << endl;
        }
    } while (PuntuacionCompu != 2 && PuntuacionUsuario != 2);




}
