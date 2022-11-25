#include "types.h"
#include "user.h"

int main(int argc, char *argv[]){
    
    //char str1 [1] = "-r";

    if (argc > 1)
    {
   // if(argv[1] == str1){
        shutdown(1);
    //}
        exit();
    }
    shutdown(0);
    exit();
}