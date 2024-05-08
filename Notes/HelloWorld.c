#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

// Using BroCode's video as guide (https://www.youtube.com/watch?v=87SH2Cn0s9A)

void birthday(){
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you\n");
}

void greetins(char name[], int age){
    printf("\nHi %s, please to meet you", name);
    printf("\nYou're %d years old, right?\n", age);
}

double squared(double x){
    return x * x;
}

int greater(int x,int y){
    return (x > y) ? x : y;
}

void hello(char name[],int age);

// structs
struct pessoa{
    int idade;
    char nome[20];
};

typedef struct{
    int age;
    char name[25];
    char keyword[25];
}user;

int main(){
    // The main() function is set as an int because it's return is a "number" (even if it's an status)
    // When setting a number higher than a variable can handle, it is set back to it's lowest value possible, for example, a short int would be: -32,768
 
    //                                                                      Setting variables
    /*
    int  normal_int = 2147483648;                       //4 bytes | (range from -2,147,483,648 to 2,147,483,648)
    unsigned int uint = 4294967295;                     //4 bytes | (range from 0 to 4,294,967,295)

    short sint = 32767;                                 //2 bytes | (range from -32,768 to 32,767) (it can be indexed using 'short int' too)
    unsigned short usint = 65535;                       //2 bytes | (range from 0 to 65,535) (it can be indexed using 'unsigned short int' too)

    long long llint = 9223372036854775807;              //8 bytes | (range from -9 quintillion to 9 quintillion) (it can be indexed using 'large large int' too)
    unsigned long long ullint= 18446733073709551615U;   //8 bytes | (range from 0 to 18 quintillion) (it can be indexed using 'unsigned large large int' too) (U in front to avoid an warning)

    float normal_float = 0.0512312;                     //4 bytes | Store with precision numbers up to 7 digits (32 bits)
    double dfloat = 3.141592653589793;                  //8 bytes | Store with precision numbers up to 16 digits (64 bits)

    bool boolean = true;                                //1 byte  | true(represented as 1) or false(represented as 0) (1 byte)

    char normal_char = 'J';                             //Store a character only
    char number_char = 127;                             //Search for Ascii table (numbers range from -128 to 127) (1 byte)
    char char_array[] = "João Bonin";                   //Array of characters
    unsigned char uchar = 200;                          //Same as char but has a range from (numbers range from 0 to 255) (ASCII character go only up to 127 anyway) (1 byte)

    const float HEIGHT = 1.80;                          //Cons make the variable impossible to edit(the letters in a variable are usually all upper cased, only as good practice)
    */

    //                                                               How to print different kinds of variables 
    /*
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("%s\n",char_array);                          // %s for strings
    printf("%d\n",normal_int);                          // %d for integers
    printf("%u\n",uint);                                // %u for unsigned integers
    printf("%lld",llint);                               // %ll for large large integers
    printf("%llu",ullint);                              // %llu for unsigned large large integers
    printf("%d\n",boolean);
    printf("%c\n",percentage);
    printf("%c\n",normal_char);                         // %c for characters and transform numbers in symbols
    printf("%d\n",uchar);
    printf("%f\n",normal_float);                        // %f for float (the amount of characters after . could be setted as the example below)
    printf("%0.16lf\n",dfloat);                         // %lf stands for large float (use the 0.16 after the % to specify how many character will be exhibited)
    printf("%p\n",&normal_int);                         // %p is for variable memory adress
    */

    //                                                                            Format specifiers

    /*
    printf("Your number is: %.3f\n",normal_float);     //The amount of characters after '.' could be setted as the example below
    printf("Your number is: %10.3f\n",normal_float);   //Set a minimal amount of spaces in the print (aligned right)
    printf("Your number is: %-10.3f\n",normal_float);  //Set a minimal amount of spaces in the print (aligned left)
    */ 
   
    //                                                                           Arithmetic elif

    // + plus
    // - minus
    // * multiplication
    // / division
    // % remainder
    // ++ increment (same as x = x + 1)
    // -- decrement (same as x = x - 1)

    // These all represent: number before '=' (operator used) number after '='.
    // += plus
    // -= minus
    // *= multiplication
    // /= division
    // %= remainder

    /*
    int x = 5;
    int y = 2;
    float z = x / (float)y;                         //When the result of a division of integers is not exact, all the numbers after the '.' are discarted. When divisor is sset to float, it does not happen anymore
    printf("%f",z);
    
    x += 3;
    printf("%d",x);
    */
    
    //                                                                                 User input
    //scanf and fgets needs to be just after the print line to work

    /*
    char name[25];                                  //The number inside the '[]' defines the max size to the char array
    int age;
 
    printf("What\'s your name?\n");
    fgets(name, 25, stdin);                         //The fgets function can read spaces | fgets(variable, number of characters, pointer(no idea)) | fgets puts a \n at the end of the response
    name[strlen(name)-1] = '\0';                    //Set the fgets '\n' to null (strlen() function included in <string.h>)
    //scanf("%s", &name);                           //While using scanf() to get strings, it will only get strings ultil the first space

    printf("Insert your age here\n");
    scanf("%d", &age);                              //Use the & as a adress to the variable you're using

    printf("You are %d years old and your name is %s",age,name);
    */

    //                                                                                 Math functions
    /*
    double a = sqrt(4);                             //sqrt() stands for square root
    double b = pow(2, 4);                           //pow() stands for to the power of | In this example: 2^4

    int c = round(3.14);                            //The number inside the function is rounded to the closest full number
    int d = ceil(3.14);                             //ceil() works the same as round() but the number is always rounded up
    int e = floor(3.70);                            //floor() works the same as round() but the number is always rounded down

    double f = fabs(-100);                          //The number inside fabs() is transformed to positive
    
    double g = log(3);                              
    double h = sin(45);
    double i = cos(45);
    double j = tan(45);

    printf("%d",c);
    */

    //                                                                                    Logical operators
    // The && (AND) logical operator checks if two conditions are true
    // The || (OR) logical operator checks if any of two conditions are true
    // The ! (NOR) logical operator reverse the stateof a condition
   
    /*
    bool sunny = false;
    if(!sunny){
        printf("The weather is good");
    } else {
        printf("The weather is awful");
    }
    */

    //                                                                                       Functions
    //A function is storaged a piece of code. When needed, it can be evoked
    //Check the birthday() function before the main() at the beggining of the code
    
    /*
    birthday();
    birthday();
    birthday();
    */

    //                                                                                 Arguments and parameters
    // To set a function with variables within it, you should use parametes to tell it what to do
    // To use a function with variables within it, you should use arguments to tell it what to do
    // Check the greetings() function before the main() at the beggining of the code
    // When setting a function, it's necessary to preceed the variable with it's type
    // The name of tghe variable in the code doesn't need to match the names in the function setting, just need to be the same type

    /*
    int number = 18;
    char string[] = "Joao";

    greetins(string, number);
    */

    //                                                                                     Return statement
    // When using the return statement in the function, it will be assigned to the value returned
    // The assigned whould be assigned with it's return type of variable
    
    /*
    double squared_result = squared(3.14);
    printf("%lf",squared_result);
    */
    
    //                                                                                    Ternary operator
    // Shortcut to if/else when returning a value in a function
    // Check the greater() function before the main() at the beggining of the code
    // return (condition) ? (value returned if true) : (value returned if false)

    /*
    int result = greater(6,4);
    printf("%d", result);
    return 0;
    */

    //                                                                                   Function protoype
    // When using a function prototype, the true function can be writed after the main(), clearing up the code.
    // When using a function whithout as prototype, and writing it after the main(), the code can be runned without some arguments, but the result is randomized.
    // Check the hello() function before and after the main() at the beggining of the code

    //                                                                                     String types
    // Some string functions and what they do (#include <string.h> nedded)
    
    /*
    strlwr(string1);                                        //lowercase the string
    strupr(string1);                                        //uppercase the string
    strcat(string1, string2);                               //append string 2 to string 1
    strncat(string1, string2, n);                           //append n character from string 2 to string 1
    strcpy(string1, string2);                               //copy string2 to string1
    strncpy(string1, string2, n);                           //copy n characters of string2 to string1

    strset(string1, 'x');                                   //set all characters to a specific one
    strnset(string1, 'x', n);                               //sets firsts n charactes of a string to a specific one
    strrev(string1);                                        //reverses a string

    int r = strlen(string1);                                //returns the number of characters in a string as an int
    int r = strcmp(string1, string2);                       //return the number of equal characters in a string as an int
    int r = strncmp(string1, string2, n);                   //return the number of n equal characters in a string as an int
    int r = strcmpi(string1, string2);                      //return the number of equal characters in a string as an int (ignore case)
    int r = strnicmp(string1, string2, n);                  //return the number of n equal characters in a string as an int (ignore case)
    */

    //                                                                                       for loops
    // While the condition inside the function remains false, the loop continues
    // for(set an index(variable); condition; set how many will be added to your variable for every loop)

    /*
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }
    */

    //                                                                                      while loops
    // While the condition inside the function remains true, the loop continues
    
    /*
    int numero = 0;
    while(numero < 5){
        printf("Sexo com os parceiros\n");
        numero++;
    }
    */

   //                                                                                     do while loops
   // do while loops execute a block of code once before considering the while loop
   // useful when you enter a loop not satisfying a condition, and then satisfy it

   /*
   int num;
   int sum;

   do{
    printf("Insert any number");
    scanf("%d", &num);
    if(num > 0 ){
        sum += num;
    }
   }while(num > 0);

   printf("\nYour number is: %d", sum);
   */

   //                                                                                         Arrays
   // Storess multiple values of the same data type;
   // If the array has a fixed size, does not accept more than it's set to;
   // sizeof() function returns the quantity of bytes inside a vaiable, so dividing the full array for just one of it's components gives exactly the quantity of objects in the array
   
   /*
   float name[] = {12,20,30,40,50};

   for(int i; i < sizeof(name)/sizeof(name[0]); i++){
    printf("I fuck bitches %f\n",name[i]);
   }
   */

   //                                                                                       2D Arrays
   // Is a array containing arrays
   // The 2D array is set by giving the number of 'columns' and 'rows': int 2Darray[rows][columns]
   // This is how to set a 2D array with already set objects (No need to take all this space)

   /*
   int numbers[2][3]= { 
                       {1,2,3},
                       {4,5,6}
                      };
   */

    // This is how to set a 2D aaray, object by object
    /*
    int numbers[2][3];

    numbers[0][0] = 0;
    numbers[0][1] = 1;
    numbers[0][2] = 2;
    numbers[1][0] = 3;
    numbers[1][1] = 4;
    numbers[1][2] = 5;
    */
   
    // Printing 2D arrays 
    /*
    int rows = sizeof(numbers)/sizeof(numbers[0]);               //by dividing the whole quyantity of numbers by just one row, we got the total of rows
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);      //by dividing the quantity of rows by a sole number, we got the total of columns

    for(int i = 0; i < rows;i++){
        for(int j = 0;j < columns; j++){
            printf("%d ",numbers[i][j]);
            }
        printf("\n");
    }
    */
   
    //                                                                                String Arrays
    // #include <string.h> needed
   
    /*
    char names[][10] = {{"Joao"},{"Jorge"},{"Matheus"}};
   
    //names[0] = "Luis"; This don't work because you're trying to assign a string to a 'char' variable
    strcpy(names[0],"Luis");

    for(int i; i < sizeof(names)/sizeof(names[0]); i++){
    printf("%s\n",names[i]);
    }
    */

    //                                                                           Swapping variables contents (chars and strings)
 
    // if content is a char:
    /*
    char x = 'X';
    char y = 'Y';
    char temp; 

    temp = x;
    x = y;
    y = temp; 

    printf("x = %c\ny = %c",x,y);
    */

    // if content is a string:
    /*
    char x[15] = "Coitus";
    char y[15] = "Sex";
    char temp[15];
 
    strcpy(temp,x);
    strcpy(x, y);                    // If y is smaller than x when it's settet like this, the result's gonna be messed up , so it's good practice to set the string size (x[size])
    strcpy(y, temp);

    printf("x = %s\ny = %s",x,y);
    */

    //                                                                                          Sorting arrays
    /*
    int array[] = {6,7,5,9,4,8,2,1,3,9,0};
    int size = sizeof(array)/sizeof(array[0]);
    
    for(int i = 0; i < size - 1; i++){
        for(int j = 0;j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    */

    //                                                                                              Structs
    // Struct works like a pre-setted array (check before the int main() function)
    // Can store more than 2 data types
    /*
    struct pessoa joao;
    struct pessoa pedro;

    joao.idade = 18;
    strcpy(joao.nome, "Joao Gabriel");

    pedro.idade = 19;
    strcpy(pedro.nome, "Pedro Lima");

    printf("Idade1: %d\nNome1: %s\n\nIdade2: %d\nNome2: %s",joao.idade,joao.nome,pedro.idade,pedro.nome);
    */

    //                                                                                              typedef
    // Defines a nickname to a specific data type
    // Can be used together with struct (check before int main())
    /*
    typedef char user[25]; 

    user nome = "Joao Gabriel";
    printf("%s",nome);
    */
    /*
    user joao = {18,"Joao Gabriel","ABC1234"};
    printf("Nome: %s, Idade: %d, Senha %s",joao.name,joao.age,joao.keyword);
    */

    //                                                                                          List of Structs
    // Does not work when using typedef (At least what i know of)
    /*
    struct pessoa joao = {18,"Joao Gabriel"};
    struct pessoa Pedro = {19,"Pedro Lima"};
    struct pessoa Leo = {18,"Leo Tezta"};

    struct pessoa people[] = {joao, Pedro, Leo};

    for(int i;i < sizeof(people)/sizeof(people[0]);i++){
        printf("%-s\t%d\n",people[i].nome,people[i].idade);
    }
    */
    
    //                                                                                                enum
    // Works before end after int main()
    // Give values to variables in order
    // Help making code more readable
    /*
    enum day{seg = 1,ter,qua,qui,sex,sab,dom};

    int dia = seg;

    if (dia == dom || dia == sab){
        printf("Fim de semana porra");
    } else {
        printf("Vou me matar");
    }
    */

    //                                                                                        Pseudo random numbers
    // A set of number that are statistically random (do not use in security or criptography)
    /*
    srand(time(0)); //Uses the current time as a seed to generade random numbers (time() needs to include <time.h> library)

    int rand_number = (rand() % 6) + 1; //The rand function generates a number between 0 and 33767 - The % gives only the rest of a division (in this case, only 0 to 5) - The + 1 is used to get numbers between 1 and 6]
   
    printf("%d",rand_number); // stdlib.h library needed to not get an error
    */
    
    //                                                                                      Bitwise Operator(Binary)
    // & = AND
    // | = OR
    // ^ = XOR // Only one side must be true to result true
    // >> = Right shift // Offset the binary to the right
    // << = Left shift  // Offset the binary to the right
    /*
    int x = 6;      // 00000110
    int y = 12;     // 00001100
    int z = 0;      // 00000000

    z = x & y;      // 00000100
    printf("AND: %d\n",z);

    z = x | y;      // 00001110
    printf("OR: %d\n",z);

    z = x ^ y;      // 00001010
    printf("XOR: %d\n",z);

    z = x >> 1;     // 00000011 (cuts by half)
    printf("Right shift: %d\n",z);

    z = x << 1;     // 00001100 (double)
    printf("Left shift: %d\n",z);
    */

    
}

void hello(char name[],int age){
    printf("Hello %s",name);
    printf("You're age is %d", age);
}