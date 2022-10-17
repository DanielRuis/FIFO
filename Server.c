#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <libpq-fe.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

PGconn *cnn = NULL;
PGresult *result = NULL;

char *host = "localhost";
char *port = "5432";
char *dataBase = "tienda1";
char *user = "postgres";
char *passwd = "31342522";
int i,j;

int main(){
    int menup,fd1,fd2;
    char txt[2];
    while(1){

        printf("------------------------------------\n");
        printf("                MENU                \n");
        printf("------------------------------------\n");
        printf("|1-Clientes                        |\n");
        printf("|2-Articulos                       |\n");
        printf("|3-Facturas                        |\n");
        printf("------------------------------------\n->");
        fd1=open("menup",O_RDONLY);
        read(fd1,txt,sizeof(txt));
        menup=atoi(txt);
        printf("->%i",menup);
        switch(menup){
            //clientes
            case 1:

            break;
            //Articulos
            case 2:

            break;
            //Facturas
            case 3:

            break;
        }
    }
}
