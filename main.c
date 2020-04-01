//
//  main.c
//  menu
//
//  Created by Jaime casas on 27/3/20.
//  Copyright © 2020 Jaime casas. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int opc1,opc2;
    char id, contraseña, nid, ncontraseña;
    printf("1-Crear nuevo usuario:\n" );
    printf("2-Iniciar sesion:\n");
    printf("3-Salir.\n");
    scanf("%d", &opc1);
    
    
    
    switch (opc1)
    {
        case 1: printf( "Registar nuevo usuario: ");
            scanf( "%s", &id );
            printf( "Registar nueva contrasenia: ");
            scanf( "%s", &contraseña);
            break;
            
       
        case 2:
            printf( "Nombre usuario: ");
            scanf( "%s", &nid );
            printf( "Contraseña: ");
            scanf( "%s", &ncontraseña );
            printf("Qué desea?\n");
            printf("1-Vender\n");
            printf("2-Comprar\n");
            printf("3-Alquilar\n");
            scanf("%d",&opc2);
            switch (opc2) {
                case 1:
                    printf("Para vender blablal\n");
                    break;
                case 2:
                    printf("Para comprar blablabla\n");
                    break;
                case 3:
                    printf("Para alquilar blabl\n");
                default:
                    printf("No has escogido una opcion valida\n");
                    break;
            }
            break;
            
        case 3:
            printf ("Saliendo...\n");
    }
    
    
    return 0;

}
