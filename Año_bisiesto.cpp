#include <iostream>

using namespace std;


/*
CONSIGNA
(*)Crear un programa que permita al usuario ingresar un año y determine si es bisiesto o
no. Un año es bisiesto si es divisible por 4, pero no por 100, a menos que también sea
divisible por 400.

    Algoritmo
    (*)Hacer una variable para tener el resultado de la división, para poder decir en los "IF'S" que si el (resultado_del_año_dividido==0)
        lo que quiere decir si es divisible o no
    (*)Hacer una variable de tipo entero ingresando el anio
    (*)Usar una estructura decisiva para decicir si es año bisiesto o no
    (*)Usar "IF" para saber si ese año ingresado es divisible por 4 y no por 100
    (*)Hacer "IF ELSE" preguntando si es divisible por 4, por 100, y por 400.



    int anio_ingresado;
    cout<<"ingrese el anio para saber si es bisiesto o no :";
    cin>>anio_ingresado;
        if ((anio_ingresado%4==0 && anio_ingresado%100!=0)||(anio_ingresado%400==0)){
            cout<<"Es anio bisiesto";}

            else {cout<<"No es un anio bisiesto";}

    _________________________________________________________________________________________

    CONSIGNA
    Solicite al usuario ingresar un número entero positivo desde el teclado. Luego, el
    programa deberá solicitar al usuario ingresar un límite máximo para la tabla de
    multiplicación. A continuación, se mostrará la tabla de multiplicación del número
    ingresado desde 1 hasta el límite máximo especificado. El programa debe validar que
    tanto el número ingresado como el límite máximo sean enteros positivos. En caso de
    que se ingresen valores inválidos, se deberá mostrar un mensaje de error y solicitar al
    Usuario que ingrese los valores nuevamente

    ALGORITMO
    {+}Solicitar al usuario que ingrese un numero entero posititivo con un <cin>
    {+}Solicitar al usuario que ingrese un limite maximo
    {+}<FOR> para multiplicar tantas veces como me diga el numero maximo ingresado
    {+}Mostrar la table de multiplicación del numero que ingresé primero, hasta el numero maximo que ingrese despues.
    {+}<IF> para validar que los datos ingresados sean enteros mayores a <1>
    {+}<ELSE> para mostrar un mensaje de error y pedir que ingrese los valores nuevamente.


    int numero_ingresado;
    int numero_maximo;
    cout<<"Ingrese un numero entero positivo :";
    cin>>numero_ingresado;
    cout<<"Ingrese un numero entero como limite maximo :";
    cin>>numero_maximo;

    if(numero_ingresado<0){
        cout<<"debe ingresar un numero entero positivo";
    }

    for (int i=1; i<=numero_maximo; i++){
        cout<<numero_ingresado<<" X "<<i<<"="<<numero_ingresado*i<<endl;
    }

    _________________________________________________________________________________________

    CONSIGNA
    Crear un programa que permita al usuario ingresar un número y calcular la serie de
    Fibonacci hasta ese número. La serie de Fibonacci es una secuencia de números en la
    que cada número es la suma de los dos números anteriores, comenzando por 0 y 1.

    ALGORITMO
    {+}Pedir al usuario que ingrese un numero
    {+}Hacer un <FOR> para recorrer hasta donde haya dicho el usuario
        {+}Hacer que vaya desde 0 y 1
        {+}sumar los dos numeros anteriores y guardarlos
        {+}reemplazarlos por nuevos.

    int prim_num;
    int seg_num;
    int numero_ingresado;
    cout<<"Ingrese un numero para calcular la serie de Fibonacci: ";
    cin>>numero_ingresado;
    int  fib1=0;
    int  fib2=1;
    cout<< fib1<<" ";
    cout<< fib2<<" ";

        for (int siguiente_fib=fib1+fib2; siguiente_fib<=numero_ingresado; siguiente_fib=fib1+fib2){

        cout<<siguiente_fib<<" ";
        fib1=fib2;
        fib2=siguiente_fib;}

    cout<<numero_ingresado;


______________________________________________________________________________________________
    CONSIGNA
    Crear un programa que cuente la cantidad de de caracteres repetidos que hay en una cadena de texto
    por ejemplo: char[] cadenaDeCaracteres = "EaAbbBcde";
    esto devolvera 2 ya que se repiten la a y la b


    ALGORITMO
    {+}Definir un array de caracteres como tipo char y copiar la string que se desea convertir(cadena de caracteres)
    {+}Sacar el largo del array y restarle 1 <sizeof(nombre_del_array)-1>
    {+}Hacer un for para recorrer el array, desde 0 hasta el largo que tenga el texto<LargoTexto> y de i++
    {+}Dentro del for hacer una variable que se llame caracter y revisar lo que tiene <texto[1]>
    {+}Hacer una proposición para que cuando recorra se pregunte si ese caracter es igual al que busco
            <(caracter=='0'){
                <texto[1]='a'>  <---Este if dice que si encuentra una 'o' en algún espacio del array(el texto) que la reemplace



    char texto[] = "Hola mundo";

    int LargoTexto = sizeof(texto)-1;

    for (int i = 0; i<LargoTexto; i++){

            char caracter = texto[i];
            if (caracter=='o'){
                texto[i] ='a';
            }
    }


    cout<<texto;


*/
main() {

  for (int i=1; i<=100; i++){

        if(i%3==0 && i%5==0){
            cout<<"fizzbuzz"<<endl;
        }
            else if(i%3==0){
            cout<<"fizz"<<endl;
        }
            else if(i%5==0){
            cout<<"buzz"<<endl;
        }
        else {cout<<i<<endl;}
  }










return 0;
}
