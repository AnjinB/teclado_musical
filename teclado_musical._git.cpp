#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>


int main ()

{

int tecla;
setlocale(LC_ALL,"");

tecla=getchar();

printf("D�\n") ;
Beep (554, 2000);

printf("R�\n");
Beep (587, 2000);

printf("R�#\n");
Beep (622, 2000);

printf("Mi\n");
Beep (659, 2000);

printf("F�\n");
Beep (698, 2000);

printf("F�#\n");
Beep (740, 2000);

printf("Sol\n");
Beep (784, 2000);

printf("Sol#\n");
Beep (831, 2000);

printf("L�\n");
Beep (880, 2000);

printf("L�#\n");
Beep (932, 2000);

printf("Si\n");
Beep (998, 2000);

printf("Si#\n");
Beep (1047, 2000);


return 0;
}


