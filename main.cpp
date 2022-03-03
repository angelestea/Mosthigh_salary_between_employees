#include <iostream>//--->Para poder hacer uso del 'cout' y 'cin'
#include <conio.h>//-->conio.h para usar la función getch();
#include <stdlib.h>//Se declara stdlib.h para poder hacer uso de cin.ignore()

using namespace std;
int n;//--->Se declara n como entero ya que será la cantidad de veces que nuestro ciclo for se iterará
double salarioMayor=0;//-->Se la declara e inicializa con 0 para evitar cualquier dato basura que ingrese dentro de la variable

int main()
{

    cout<<"**********************************************************"<<endl;
    cout<<"*****************Software para saber**********************"<<endl;
    cout<<"******************que empleado tiene *********************"<<endl;
    cout<<"********************mayor salario!!***********************"<<endl;
    cout<<"**********************************************************"<<endl;

    cout<<"Escriba el numero de empleados"<<endl;
    cin>>n;//-->Se recepta el número de empleados

    struct empleado{//--->Se declara la estructura
    char nombre[40];//-->La cantidad de caracteres posible que entra el nombre del empleado
    double salario;//-->El salario como double ya que puede ser un número real
    }empleados[n];//--->Se declara esta cadena como un array logrando así poder almacenar varias veces estos datos, ahorrando código

    for(int i = 0;i < n;i++){//--->El ciclo for irá desde i valor a 0 hasta que sea menor a n
    cout<<"Ingrese el nombre del empleado "<<i+1<<endl;//--->Se solicita al usuario el ingreso de el nombre
    cin.ignore();//--->Para que C++ lea la cadena de carateres, sin erros en puesta en escena
    cin.getline(empleados[i].nombre,40,'\n');//--->Receptará atravez de getline en la posicón que este i dentro de for el nombre con 40 caracteres, hasta que el usuario de enter
    cout<<"Ingrese el salario del empleado "<<i+1<<endl;
    cin>>empleados[i].salario;//--->Se solicita al usuario ingresar el valor del salario del empleado en la posición de i
    system("cls");//--->Se limpia pantalla para una mayor claridad dentro del programa
    if(empleados[i].salario>0){//--->Condicional if, para guardar el valor del salario del empleado
        salarioMayor=empleados[i].salario;//--->En caso de cumplir la condición, se guarda dentro de la variable, previamente declarada salarioMayor
    }else if(empleados[i].salario>salarioMayor){//--->Como esta condición solo se podría cumplirse después de la primer vuelta del ciclo for, se la declara en else if
        salarioMayor=empleados[i].salario;//--->En caso de cumplir el empleado en posicón de i con el salario ingresado por el usuario, remplazará el dato anterior por el dato actual
    }
}
    cout << "El salario mayor de los "<<n<<" empleados es "<<salarioMayor << endl;//--->Mostrará el dato guardado por la condiconal if
    getch();
    return 0;
}


