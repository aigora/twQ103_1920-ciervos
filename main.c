
#include <math.h>
#include <stdio.h>

int main()																											
{
    
    	int opcion, opcion2;
	char id, contrasenia, nid, ncontrasenia;
        printf("1-Crear nuevo usuario:\n" );
        printf("2-Iniciar sesion:\n");
	printf("3-Salir.\n");
        scanf("%d", &opcion);

        

        switch (opcion)
        {
            case 1: printf( "Registar nuevo usuario: ");
                    scanf( "%s", &id );
                    printf( "Registar nueva contrasenia: ");
                    scanf( "%s", &contrasenia);
                    break;

            case 2: printf( "Nombre usuario: ");
                    scanf( "%s", &nid ); // Nombre de usuario guardado anteriormente
                    printf( "Contrasenia:  ");
                    scanf( "%s", &ncontrasenia ); //Contrasenia guardada anteriormente
                    
                   
                    	printf("Elije un numero: 1-dar de alta, 2-dar de baja o 3-mostrar coches\n");
                    	scanf("%d",&opcion2);
                    	
                    	 switch (opcion2)
                    	 {
						case 1:
							printf("Usted a elegido la opcion de dar de alta");
							//scanf("%s", &comprar);
							break;
						case 2:
							printf("Usted a elegido la opcion de dar de baja");
                    					//scanf("%s", &vender);
                    					break;
                    				case 3:
                    					printf("Usted a elegido la opcion de mostrar coches");
                    					//scanf("%s",&alquilar);
                    					break;
                	}
                    break;
                    
            case 3:
 					printf ("Saliendo...\n");
		}
			
			
return 0;
}

