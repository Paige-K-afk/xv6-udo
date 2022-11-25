#include "types.h"
#include "user.h"

int main(int argc, char *argv[]){
    if(argv[1] == "-r")
    {shutdown(1);}
    else{
    shutdown(0);
    }
    exit();
}