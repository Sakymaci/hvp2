#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) // gcc -c prog.c -o prog <- ezzel forditod le a programot terminalba
                                        //./prog alma "1 2" 3 4 56 <- igy inditod el a progot parancssori argumentumokkal
{
    /*
    if(argc == 1){
        return 1;  // "echo $?"-el tudod lekérdezni a program return-jét terminálba futtatás után!
    }
    for (int i = 0; i < argc; i++)
    {
        //printf("%s\n", argv[i]); kiirod az argumentumonkat
        printf("Standard kimenet\n");

        // ha ./prog 1> output 2> hiba -val megadjuk a stdout-ot és a stderr-t
        // >> -al nem irod felul a file-t

        fprintf(stdout, "Standard kimenet\n"); // file-ba irsz, stdout helyyett file kell, igy terminalba ir

        fprintf(stderr, "Standard hiba\n"); //file-ba irsz, de ez a hibazas helyere ir
    }
    */
    /*
    char tomb[100];
       scanf("%s", tomb); // echo abc | ./prog -al egy prog kimenetet tudod kuldeni egy masik prog bemenetekent ("|" teszi lehetove)

       printf("Kimenet: %s\n", tomb);
       */
      //system("ls -a"); //lefuttat system kodot; man system -el a terminalba meg tudod nezni az include-ot

      for (int i = 1; i < argc; i++)
      {
          system(argv[i]);
      }
      
    
    return 0;
}
