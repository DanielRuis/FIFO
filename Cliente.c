#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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
        printf("|4-Salir                           |\n");
        printf("------------------------------------\n->");
        scanf("%i",&menup);
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
//----------------------CLIENTES--------------------------------
//Menu para acciones con clientes
int menuCliente(){
    int menu;
    printf("------------------------------------\n");
    printf("                MENU                \n");
    printf("------------------------------------\n");
    printf("|1-Agregar cliente                 |\n");
    printf("|2-Actualizar cliente              |\n");
    printf("|3-Borrar cliente                  |\n");
    printf("|4-Mostrar lista de clientes       |\n");
    printf("|5-Salir                           |\n");
    printf("------------------------------------\n");
    scanf("%i",&menu);
    switch(menu){
        //agregar clientes
        case 1:
            addCliente();
        break;
        //borrar clientes
        case 2:
            updateCliente();
        break;
        //borrar cliente
        case 3:
            deleteCliente();
        break;
        //Mostrar clientes
        case 4:
            showCLientes();
        break;
    }
}
//Añadir clientes
int addCliente(){
    //*Nota: Los gets no funcionan (cortan el programa)

    char nombre[200]="", apellido[200]="",rfc[50]="",direccion[300]="",pais[10]="",tel[20]="", edad[3]="";
    char sql[999], sql2[900];
    int problem=0;
    printf("*******Agregar Cliente********* \n");
    printf("-------------------------------\n");
    //nombre-----------------------
    printf("Nombre\n");
    scanf("%s",&nombre);
    //Apellidos-----------------------
    printf("Apellidos\n");
    scanf("%s",&apellido);
    //rfc-------------------------
    printf("RFC\n");
    scanf("%s",&rfc);
    for (int indice = 0; rfc[indice] != '\0'; ++indice){
		rfc[indice] = toupper(rfc[indice]);
	}
    //Direccion-----------------------
    printf("Direccion\n");
    scanf("%s",&direccion);
    //Edad-----------------------------
    printf("Edad\n");
    scanf("%s",&edad);
    //Pais------------------------------
    printf("Pais\n");
    scanf("%s",&pais);
    for (int indice = 0; pais[indice] != '\0'; ++indice){
		pais[indice] = toupper(pais[indice]);
	}
    //Telefono-----------------------------
    printf("Telefono\n");
    scanf("%s",&tel);
    //Evaluador---------------------------
    if(atoi(edad)>=18&&strcmp(pais,"MEXICO")==0){
        sprintf(sql, "SELECT insertar_cliente ('%s','%s' ,'%s', '%s', '%s', '%s')",nombre,apellido,rfc,direccion,edad,pais);
    
    }
    if(atoi(edad)<18){
        problem++;
        printf("x%i->Solo se pueden admitir mayores de edad\n",problem);
    }
    if(strcmp(pais,"MEXICO")!=0){
        problem++;
        printf("x%i->Este pais no se encuentra dentro de nuestra lista permitida\n",problem);
    }

    
 
}