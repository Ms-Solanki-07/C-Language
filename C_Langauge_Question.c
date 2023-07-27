// BASIC PROGRAM STRUCTURE

// #include<stdio.h>
// int main () {
// printf("helloworld");

//     return 0;
// }


// Question- write a program to print the average of 3 number.

// #include<stdio.h>
// int main () {
// int a, b, c;
// printf("Enter 1st Number: \n");
// scanf("%d", &a);

// printf("Enter 2nd Number: \n");
// scanf("%d", &b);

// printf("Enter 3rd Number: \n");
// scanf("%d", &c);

// printf("Average of a,b&c : %d", (a+b+c)/2);

//     return 0;
// }


// Question- write a program to check if given character is digit or not.

// #include<stdio.h>
// int main () {
// char ch;
// printf("Enter a character: \n");
// scanf("%c",&ch);

// if(ch >= '0' && ch <= '9'){
//     printf("the character is a digit. \n");
// }
// else{
//     printf("the character is not a digit. \n");
// }
//     return 0;
// }


// Question- write a program to print the samallest number of two.

// #include<stdio.h>
// int main() {
// int num1, num2;
// printf("Enter 1st Number:");
// scanf("%d",&num1);

// printf("Enter 2nd Number:");
// scanf("%d", &num2);

// if(num1 < num2){
//     printf("The smallest Number is: %d", num1);
// } else{
//     printf("The Smallest Number is : %d", num2);
// }
//     return 0;
// }


// Question- write a program to check if a given number is natural or not. (natural number start from 1)

// #include<stdio.h>
// int main () {
// int number;
// printf("Enter a number:");
// scanf("%d", &number);

// if(number > 0){
//     printf("number is Natural \n");
// } else {
//     printf("Number is Non-Natural \n");
// }

//     return 0;
// }


// Question- write a code to determine age for child, teenager & adult.

// #include<stdio.h>
// int main() {
// int age;
// printf("Enter age:");
// scanf("%d", &age);

// if(age >= 18){
//     printf("adult\n");
// }
// else if(age > 13 && age < 18){
//     printf("Teenager\n");
// } else{
//     printf("child\n");
// }

//     return 0;
// }


// Question- write a code for determine to day 

// #include<stdio.h>
// int main() {
// int day; //1-mon, 2-tues, 3-wed, 
// printf("Enter day(1-3):");
// scanf("%d", &day);

// switch(day){
//     case 1 : printf("Monday\n");
//              break;
//     case 2 : printf("Tuesday\n");
//              break;
//     case 3 : printf("wednesday\n");
//              break;
//     default : printf("NOt a valid day\n");  


// }
// return 0;
// }


// Question- write a program to chech if a given number positive-negative & even-odd

// #include<stdio.h>
// int main () {
//     int number;
// printf("Enter a Number:");
// scanf("%d",&number);

// if(number >= 0){
//     printf("positive\n");
//     if(number % 2 == 0){
//         printf("Even\n");
//     } else {
//         printf("odd\n");
//     }
// } else {
//     printf("Negative\n");
// }
//     return 0;
// }


// Question- write a program to find if a charcter entered by user is upper case or not.

// #include<stdio.h>
// int main () {
// char ch;
// printf("Enter a character:");
// scanf("%c",&ch);

// if(ch >= 'A' && ch <= 'Z'){
//     printf("Upper case\n");
// } else if(ch >= 'a' && ch <= 'z'){
//     printf("Lower case\n");
// } else {
//     printf("Not English\n");
// }


//     return 0;
// }


// Question - write a code for print the number from 0 to n, if n is given by user.

// #include<stdio.h>
// int main () {
// int n;
// printf("Enter Number");
// scanf("%d",&n);

// int i = 0;
// while(i<=n){
//     printf("%d \n",i);
//     i++;
// }

//     return 0;
// }


// Question- print the sum of first n Natural number.

// #include<stdio.h>
// int main () {
// int n;
// printf("Enter Number");
// scanf("%d",&n);

// int sum = 0;
// for(int i=1; i<=n; i++){
//     sum = sum + i;
// }
// printf("sum is : %d\n", sum);

//     return 0;
// }


// Question- write a code for print the table of a number input by user the user.

// #include<stdio.h>
// int main() {
// int n;
// printf("Enter NUmber:");
// scanf("%d", &n);

// for(int i=1; i<=10; i++){
//     printf("%d\n", n * i);
// }

//     return 0;
// }


// Question- keep taking number as input from user until user enter an odd number.

// #include<stdio.h>
// int main () {
// int n;
// do{
//     printf("Enter Number:\n");
//     scanf("%d", &n);
//     printf("%d", n);

//     if(n % 2 != 0) {
//         break;
//     }
// } while(1);
// printf("This is a odd number\n");


//     return 0;
// }


// Question- keep taking number as input from user until user enter a number which is multiple of 7.

// #include<stdio.h>
// int main () {
// int n;
// do {
// printf("Enter Number:");
// scanf("%d",&n);
// printf("%d \n", n);

// if(n % 7 == 0 ) {
//     break;
// }
// }while(1);


//     return 0;
// }


// Question- print all the odd number from  5 to 50.
//  {with help continue statement}

// #include<stdio.h>
// int main() {
// for(int i=5; i<=50; i++){
//     if(i % 2 == 0){
//        continue;
// } printf("%d\n",i);
// }
//     return 0;
// }


// Question- print reverse of the table for a number n.

// #include<stdio.h>
// int main () {
// int n;
// printf("Enter NUmber:");
// scanf("%d", &n);

// for(int i=10; i>=1; i--){
//     printf("%d\n", n * i);
// }


//     return 0;
// }


// Question- calculate the sum of all number between 5 to 50 (including 5 & 50).

// #include<stdio.h>
// int main () {
// int sum = 0;
// for(int i = 5; i<=50; i++) {
//     sum += i;

// }
// printf("sum is %d", sum);

//     return 0;
// }


// Question- print the factorial of a number n.


// #include<stdio.h>
// int main () {
// int n;
// printf("Enter Number:\n");
// scanf("%d", &n);

// int fact = 1;
// for(int i = 1; i<=n; i++) {
//     fact = fact * i;

// }
// printf("Final factorial is %d", fact);

//     return 0;
// }

// bigger value not stored in int data type 



// Question- write 2 function- one to print "hello" & second to print "goodBye"

// #include<stdio.h>
// // Declarton/Prototype
// void printHello();
// void goodBye();
// int main () {
// //Function Call
// printHello ();
// goodBye();


//     return 0;
// }
// // Function definition
// void printHello() {
//     printf("Hello\n");
// }
// void goodBye() {
//     printf("GoodBye\n");
// }


// Question- write a function that print Namaste if user is indian &  Bonjour if the user is french.


// #include<stdio.h>

// void namaste ();
// void bonjour();
// int main () {
// char ch;
// printf("Enter f for french & i for indian\n");
// scanf("%c", &ch);

// if(ch == 'i') {
//     namaste();
// } else if( ch == 'f') {
//     bonjour();
// } else {
//     printf("Non Valid Char\n");
// }

//     return 0;
// }

// void namaste () {
// printf("Namaste\n");
// }
// void bonjour () {
//     printf("Bonjour\n");
// }


// Question- use library function to calculate the square of a number given by user.

// #include<stdio.h>
// #include<math.h>
// int main () {

// int n;
// printf("Enter a number\n");
// scanf("%d", &n);

// printf("%f", pow(n,2));
//     return 0;
// } 


// Question- Write function to calculate area of a square, a circle & a rectangle.

// #include<stdio.h>
// float squareArea (float side);
// float rectangleArea (float a, float b);
// float circleArea (float rad);

// int main () {
// float a = 5.0;
// float b = 10.0;

// printf("area of rectangle is : %f", rectangleArea(a, b));

//     return 0;
// }

// float squareArea(float side) {
//     return side * side;
// }
// float circleArea(float rad){
//     return 3.14 * rad * rad;
// }
// float rectangleArea(float a, float b){
//     return a * b;
// }
//  as well as area of square & circle


// Question- print "Hello world" 5 times with help Recursion
// {Recursion- when a function calls itself, it's called Recursion}

// #include <stdio.h>

// void printHW(int count);

// int main () {
// printHW(5);
//     return 0;
// }

// // RECURSION FUNCTION
// void printHW (int count){
//     if(count == 0){
//         return;
//     }
//     printf("Hello World\n");
//     printHW(count-1); 
// }


// Question- Sum of first n Natural numbers (Recursion)

// #include<stdio.h>
// int sum (int n);

// int main () {
// printf("sum is : %d", sum(5));
//     return 0;
// }

// // Recursion 
// int sum(int n){
//     if(n ==1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1); // sum of 1 to (n-1)
//     int sumN = sumNm1 + n;
//     return sumN;
// }


// Question- calculate factorial of n (Recursion)

// #include<stdio.h>

// int fact(int n);

// int main () {
//     int n;
//     printf("Enter a number\n");
//     scanf("%d", &n);
// printf("Factorial is %d", fact(n));
// return 0;
// }

// int fact(int n) {
//     if(n == 0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }


// Question- write a function to cenvert celsius to fahrenheit.
// [FORMULA- f= (c*(9.0/5.0)) + 32]

// #include<stdio.h>
// float converTemp(float celsius);

// int main() {
// int temp;
// printf("Enter Temp in celsius:\n");
// scanf("%d", &temp);

// float far = converTemp(temp);
// printf("Temp in fahrenheit : %f\n", far);
//     return 0;
// }

// float converTemp(float celsius){
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
// }


// Question- Write a function to calculate percentage of a student from mark in Science, math & sanskrit.

// #include<stdio.h>

// int calcPercentage (int Science, int math, int sanskrit);
// int main () {
// int Science;
// int math;
// int sanskrit;;

// printf("Enter Science Marks:\n");
// scanf("%d", &Science);

// printf("Enter Math Marks:\n");
// scanf("%d", &math);

// printf("Enter sanskrit Marks:\n");
// scanf("%d", &sanskrit);

// printf("Percentage is : %d\n", calcPercentage(Science, math, sanskrit));
//     return 0;
// }
// int calcPercentage(int Science, int math, int sanskrit) {
//     return((Science+math+sanskrit)/3);
// }


// Question- write a function to print  nth term of the Fibonacci (Fibonachi) sequence.
// [Fibonacci (Fibonachi) sequence- 0,1,1,2,3,5,8,13,21......]

// #include<stdio.h>
// int fib(int n);

// int main() {
// int n;
// printf("Enter a Number\n");
// scanf("%d", &n);

// printf("%d", fib(n));
//     return 0;
// }
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
// int fibNm1 = fib(n-1);
// int fibNm2 = fib(n-2);
// int fibN = fibNm1 + fibNm2;
// return fibN;

// }
// //  what is fibonachi sequence- search on google.


// Question- Print the Value of "i" from its pointer to pointer.

// #include <stdio.h>
// int main () {
// int i = 5;
// int *ptr = &i;
// int **pptr = &ptr;
// printf("%d\n", **pptr);

//     return 0;
// }


// Concept- Different between Call by Value & call by reference function in Pointer (C-Code)

// #include<stdio.h>

// void square (int n);
// void _square (int *n);

// int main (){
// int number = 5;
// square (number); // Call by value
// printf("Number : %d\n",number);

// _square(&number); // Call by address/ reference
// printf("Number : %d\n", number);

//     return 0;
// }
// void square (int n) {
//     n = n * n;
//     printf("Square: %d\n", n);
// }
// void _square (int *n) {
//     (*n) = (*n) * (*n);
//     printf("_square: %d\n", (*n));
// }


// Question- swap 2 number, a & b.
// (swap --> interchange)

// #include<stdio.h>
// void _swap(int *a, int *b);
// int main () {
// int x = 3, y = 5;
// _swap(&x, &y);
// printf("x: %d & y : %d\n", x, y);
//     return 0;  
// }
// // call by reference
// void _swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }


// Questio- write a function to calculate the sum, product & average of two number. print that average int the main function.

// #include<stdio.h>
// void doWork(int a, int b, int *sum, int *prod, int *avg);
// int main () {
// int a = 3, b = 5;
// int sum, prod, avg;
// doWork(a, b, &sum, &prod, &avg); 
//     printf("sum: %d, prod: %d, avg: %d\n", sum, prod, avg); 
//     return 0;
// }
// void doWork (int a, int b, int *sum, int *prod, int *avg){
//     *sum = a+b;
//     *prod = a*b;
//     *avg = (a+b)/2;
// }


// Question- Write a Program to Enter Price of 3 Items & Print Their Final Cost With GST. (With Help of ARRAY)

// #include<stdio.h>
// int main () {
// float price[3];
// printf("Enter 3 price :");
// scanf("%f", & price[0]);
// scanf("%f", & price[1]);
// scanf("%f", & price[2]);

// printf("Total Price 1: %f\n", price[0] + (0.18 * price[0]));
// printf("Total Price 2: %f\n", price[0] + (0.18 * price[1]));
// printf("Total Price 3: %f\n", price[0] + (0.18 * price[2]));

//     return 0;
// }


// Question- Write a function to count the number of odd number in an array.

// #include<stdio.h>

// int countOdd (int arr[], int n);

// int main () {
// int arr[] = {1,2,3,4,5,6};
// printf("%d", countOdd(arr, 6));
//     return 0;
// }
// int countOdd(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] % 2 != 0) {
//             count ++;
//         }
//     }
//     return count;
// }


// Question- Write to reverse an array.

// #include<stdio.h>

// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main () {
// int arr[] = {1,2,3,4,5};
// reverse(arr, 5);
// printArr(arr,5);
//     return 0;
// }
// void printArr( int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }
// void reverse(int arr[], int n){
//     for(int i=0; i<n/2; i++){
//         int firstvalue = arr[i];
//         int secondvalue = arr[n-i-1];
//         arr[i] = secondvalue;
//         arr[n-i-1] = firstvalue;
//     }
// }


// Question- Write a Program to store the first n Fibonacci number.
//  (Fibonacci--> 0,1,1,2,3,5,8,13,21 .......)

// #include<stdio.h>
// int main () {
// int n;
// printf("Enter n (n>2):\n");
// scanf("%d", &n);

// int fib[n];
// fib[0] = 0;
// fib[1] = 1;

// printf("%d\t", fib[0]);
// printf("%d\t", fib[1]);

// for(int i=2; i<n; i++){
//     fib[i] = fib[i-1] + fib[i-2];
//     printf("%d\t", fib[i]);
// }
// printf("\n");

//     return 0;
// }


// Question- Write a 2-D Array, storing the Table of 2 & 3

// #include<stdio.h>
// void storeTable(int arr[][10], int n, int m, int number);
// int main (){
// int tables[2][10];
// storeTable(tables, 0, 10, 2);
// storeTable(tables, 1, 10, 3);

// for(int i=0; i<10; i++){
//     printf("%d\t", tables[0][i]);
// }
// printf("\n");
// for(int i=0; i<10; i++){
//     printf("%d\t",tables[1][i]);
// }
// printf("\n");
//     return 0;
// }
// void storeTable(int arr[][10], int n, int m, int number ){
//     for(int i=0; i<m;i++){
//         arr[n][i]= number * (i+1);
//     }
// }


// Question- Create a string firstName & lastName to store details of user & print all the character using a loop.

// #include<stdio.h>

// void printstring(char arr[]);

// int main() {
// char firstName[] = "Ms";
// char lastName[] = "TEch";

// printstring(firstName);
// printstring(lastName);


//     return 0;
// }
// void printstring(char arr[]){
//     for (int i=0; arr[i] != '\0'; i++){
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }


// Question- Make a Program that input user's name & prints its length.

// #include<stdio.h>
 
// int countLength(char arr[]);
// int main () {
// char name[100];
// fgets(name, 100, stdin);
// printf("Length is : %d", countLength(name));
//     return 0;
// }
// int countLength(char arr[]){
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count-1;
// }

// 2nd Method

// #include<stdio.h>
// #include<string.h>
// int main () {
// char name[50];
// printf("Enter Name:");
// fgets(name, 50, stdin);
// int length = strlen(name);
// printf("Length is : %d", length);
//     return 0;
// }


// Question- Take a string input from the user using %c, until user press enter key.

// #include<stdio.h>
// int main () { 
// char str[100];
// char ch;
// int i = 0;
// while(ch != '\n'){
//     scanf("%c", &ch);
//     str[i] = ch;
//     i++;
// }
//    str[i] = '\0';
//    puts(str);
// }


// Question- Find the salted form of a password entered by user if the salt is "123" & added at the end.

// #include<stdio.h>
// #include<string.h>

// void salting(char password[]);
// int main () {
// char password[100];
// scanf("%s", password);
// salting(password);

// }
// void salting( char password[]){
//     char salt[] = "123";
//     char newpass[200];
//     strcpy(newpass, password);
//     strcat(newpass, salt);
//     puts(newpass);
// }


// Question- Write a function named slice, while takes a string & returns a sliced string from index n to m. 

// #include<stdio.h>
// void slice(char str[], int n, int m);
// int main () {
// char str[] = "helloworld";
// slice(str, 3, 6);

// }
// void slice(char str[], int n, int m){
//     char newstr[100];
//     int j = 0;
//     for(int i = n; i<=m; i++, j++){
//         newstr[j] = str[i];
//     }
//     newstr[j] = '\0';
//     puts(newstr);
// }


// Question- write a function to count the occurrence of vowels in a string.

// #include<stdio.h>
// int countVowels(char str[]);
// int main () {
// char str[] = "HelloWorld";
// printf("Vowels are: %d", countVowels(str));

// }
// int countVowels(char str[]){
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]== 'o' || str[i]== 'u'){
//             count ++;
//         }
//     }
//     return count;
// }


// Question- Check if a given character is present in a string or not.

// #include<stdio.h>
// void checkchar(char str[], char ch);
// int main () {
// char str[] = "MsTech";
// char ch = 'e';

// checkchar(str, ch);

// }
// void checkchar(char str[], char ch){
//     for(int i = 0; str[i] !='\0'; i++){
//         if(str[i] == ch){
//             printf("character is present ");
//             return;
//         }
//     }
//      printf("character is not present ");
// }


// Question- Write a program to store the data of 2 student.

// #include<stdio.h>
// #include<string.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name [100];
// };
// int main () {
//     struct student s1;
//     s1.roll = 1660;
//     s1.cgpa = 7.9;
//     strcpy(s1.name, "MsTEch");

//     printf("Student Name = %s\n", s1.name);
//     printf("Student roll = %d\n", s1.roll);
//     printf("Student cgpa = %f\n", s1.cgpa);

// struct student s2;
// s2.roll = 1662;
// s2.cgpa = 8.2;
// strcpy(s2.name, "Solanki");


//     printf("Student Name = %s\n", s2.name);
//     printf("Student roll = %d\n", s2.roll);
//     printf("Student cgpa = %f\n", s2.cgpa);

// return 0;
// }


// Question- Enter address (House No, Block, City, State) of 2 people.

// #include<stdio.h>
// struct address {
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };
// void printAdd(struct address add);
// int main () {
// struct address adds[2];
// // input
// printf("Enter info for person 1 :");
// scanf("%d", &adds[0].houseNo);
// scanf("%d", &adds[0].block);
// scanf("%s", adds[0].city);
// scanf("%s", adds[0].state);

// printf("Enter info for person 2 :");
// scanf("%d", &adds[1].houseNo);
// scanf("%d", &adds[1].block);
// scanf("%s", adds[1].city);
// scanf("%s", adds[1].state);

// printAdd(adds[0]);
// printAdd(adds[1]);
//     return 0;
// }
// void printAdd(struct address add){
//     printf("address is: %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
// }

// Question- Create a structure to store vectors. Then makes function to return sum of 2 vectors.

// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// void calcSum(struct vector v1, struct vector v2, struct vector sum);
//  int main () {
// struct vector v1 = {5,10};
// struct vector v2 = {3,7};
// struct vector sum = {0};
// calcSum(v1, v2, sum);
//     return 0;
//  }
//  void calcSum(struct vector v1, struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("Sum of x is : %d\n", sum.x);
//      printf("Sum of y is : %d\n", sum.y);
//  }


//  Question- Create a structure to store complex numbers.(Use Arrow Operators)

// #include<stdio.h>
// struct complex{
//     int real;
//     int img;
// };
// int main () {
// struct complex number1 = {5,8};
// struct complex *ptr = &number1;
// printf("Real Part : %d\n", ptr-> real);
// printf("Img Part : %d\n", ptr -> img);
//    return 0;
// }


// Question- Make a structure to store Bank Account Information of ABC Bank. also make an alias(nick name of structure) for it

// #include<stdio.h>
// typedef struct bankAccount{
//     int accountNo;
//     char name [100];
// } acc;
// int main () {
// acc acc1 = {123,"shradha"};
// acc acc2 = {124, "rajit"};
// acc acc3 = {125, "sudhir"};

// printf("acc no: %d, name: %s\n", acc1.accountNo, acc1.name);
// printf("acc no: %d, name: %s\n", acc2.accountNo, acc2.name);
// printf("acc no: %d, name: %s\n", acc3.accountNo, acc3.name);
//     return 0;
// }


// Question- Make a Program to input student infromation from a user & Enter it to a file.

// #include<stdio.h>
// int main () {
// FILE *fptr;
// fptr = fopen("Student.txt","w");

// char name [100];
// int age;
// float cgpa;

// printf("Enter Name : \n");
// scanf("%s", name);
// printf("Enter age : \n");
// scanf("%d",&age);
// printf("Enter cgpa : \n");
// scanf("%f",&cgpa);

// fprintf(fptr, "Student Name %s\n", name);
// fprintf(fptr, "age %d\n", age);
// fprintf(fptr, "cgpa %f\n", cgpa);

// fclose(fptr);
//     return 0;
// }


// Question- Write a program to write all the odd number from 1 to n in a file.

// #include<stdio.h>
// int main () {
// FILE *fptr;
// fptr = fopen("ODD.txt", "w");

// int n;
// printf("Enter N :\n");
// scanf("%d", &n);

// for(int i= 1; i<=n; i++){
//     if(i % 2 != 0){
//         fprintf(fptr, "%d\n", i);
//     }
// }
// fclose(fptr);

//     return 0;
// }


// Question- Two Number - a & b, are write in file, Write a Program to replace the with their sum.

// #include<stdio.h>
// int main () {
// FILE *fptr;
// fptr = fopen("Sum.txt", "r");

// int a, b;
// fscanf(fptr, "%d", &a);
// fscanf(fptr, "%d", &b);

// fclose(fptr);

// fptr = fopen("Sum.txt", "w");
// fprintf(fptr, "a+b: %d", a + b);
// fclose(fptr);


//     return 0;
// }


// Question- Write a program to allocate Memory to store 5 Prices.

// #include<stdio.h>
// #include<stdlib.h>

// int main () {
// float *ptr;
// ptr = (float*)malloc(5 * sizeof(float));

// ptr[0] = 1;
// ptr[1] = 3;
// ptr[2] = 50;
// ptr[3] = 70;
// ptr[4] = 45;

// for(int i=0; i<5; i++){
//     printf("%f\n",ptr[i]);
// }

//     return 0;
// }


// Question- Write a program to allocate Memory of size n, where n is Entered by user.

// #include<stdio.h>
// #include<stdlib.h>

// int main () {
// int *ptr;
// int n;

// printf("Enter n:");
// scanf("%d", &n);

// ptr = (int*)calloc(n,sizeof(int));

// for(int i=0; i<n; i++){
//     printf("%d\n", ptr[i]);
// }

//     return 0;
// }


// Question- Alloate Memory for 5 number, then Dynamically increase it to 8 Number.

// #include<stdio.h>
// #include<stdlib.h>

// int main () {
// int *ptr;
// ptr = (int*)calloc(5, sizeof(int));

// printf("Enter Number: (5):");
// for(int i=0; i<5; i++){
//     scanf("%d", &ptr[i]);
// }

// ptr= realloc(ptr, 8);
// printf("Enter Number: (8):");
// for(int i=0; i<8; i++){
//     scanf("%d", &ptr[i]);
// }
// // print
// for(int i=0; i<8; i++){
//     printf("number %d is %d\n",i, ptr[i]);
// }
//     return 0;
// }



// Question- Create an ARRAY of size 5(using calloc) & Enter its value from the user.

// #include<stdio.h>
// #include<stdlib.h>

// int main () {
// int *ptr;
// ptr = (int*)calloc(5, sizeof(int));
// printf("Enter Number(5):");
// for(int i=0; i<5; i++){
//     scanf("%d", &ptr[i]);
// }
// for(int i=0; i<5; i++){
//    printf("number %d is %d\n",i, &ptr[i]);
// }

//     return 0;
// }



// Question- Allocate Memory to store first 5 odd number, then reallocate it to store first 6 even number.


#include<stdio.h>
#include<stdlib.h>

int main () {
int *ptr;
ptr = (int*)calloc(5, sizeof(int));

ptr[0] = 1;
ptr[1] = 3;
ptr[2] = 5;
ptr[3] = 7;
ptr[4] = 9;
 for(int i= 0; i<5; i++){
    printf("%d\t", ptr[i]);
 }
printf("\n");

ptr= realloc(ptr, 6);

ptr[0] = 2;
ptr[1] = 4;
ptr[2] = 6;
ptr[3] = 8;
ptr[4] = 10;
ptr[5] = 12;

for(int i= 0; i<6; i++){
    printf("%d\t", ptr[i]);
 }
 free(ptr);
    return 0;
}
