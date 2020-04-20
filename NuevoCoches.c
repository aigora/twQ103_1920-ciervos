
#include <stdio.h>
#include <string.h>
#define N 50
#define USUARIOS 100
#define COCHES 200




struct usuario {
	char id[N];
	char contrasenia[N];
};




struct coches {
	char estado[N];
	char marca[N];
	char matricula[N];
};





int main()																											
{
    
    	int NumeroCoches=0;
    	
        struct usuario registrar[USUARIOS];
		int opcion,opcion2, i;
		FILE * pfichero;
		int nids=0;
		int check ,check1;
		char pass[50];
		char nid[50];
        
        
        struct coches stock[COCHES];
		int opcion3,opcion4, j;
		FILE * pstock;
		char x[10],y[10],z[10];
		int campo=0;
		int check3 ,check4;
		char matricula[50];
        
        
        
        
    pfichero = fopen("registrar.txt","r");
	if(pfichero==NULL)
	{
		printf("No se pudo abrir correctamente el fichero\n");
		return -1;
	}
	
		while(fscanf(pfichero,"%s   %s   \n",registrar[nids].id, registrar[nids].contrasenia)!=EOF) {
				nids++;
		    }
	
	fclose(pfichero);
	

printf("   XXXXXXXXXX                                                             XXXXXXXXXX   \n");
printf("XXXXXXXXXXXXXXXX             CONCESIONARIO              	       XXXXXXXXXXXXXXXX  \n");
printf("  0          0                                                           0          0      \n\n");



printf("Escoja una opcion para continuar\n");
do{	


	printf("1-Altas de nuevos usuarios\n");
	printf("2-Iniciar sesion\n");
	printf("3-Salir\n");
	fflush(stdin);
	scanf("%d",&opcion);



switch(opcion)
    {
    	
	case 1: {
		
	            printf("Inserte nombre de usuario:\n");
  				scanf("%s", &registrar[nids].id);
  				printf("Introduce tu password:\n");	
     			scanf("%s", &registrar[nids].contrasenia);
     			
         		
         		printf("Contraseña grabada\n");
         		
         		
         		printf("REGISTRO COMPLETADO BIENVENIDO\n");
         		
         		nids++;
         		
         		
         		pfichero =fopen("registrar.txt","w");
         		
				if(registrar==NULL)
				{
					printf("El fichero no se pudo abrir\n");
					return -1;
				}
				
				
				for (i=0;i<nids;i++)
				
         		{
         		fprintf(pfichero,"%s    %s    \n",registrar[i].id,registrar[i].contrasenia);
				}
				fclose(pfichero);		
		
		break;
	}
	
	case 2: {
		
			{
					if(nids==0)
					{
						printf("Todavia no hay ningun usuario registrado.Cree un usuario antes.");
						break;
					}
					else
					{
						pfichero=fopen("registrar.txt","r");
						if(registrar==NULL)
						{
							printf("El fichero no se pudo abrir\n");
							return -1;
						}
						else
						{

							do
							{
								
								do
								{
									printf("Introduzca su usuario:\n");
									scanf("%s",nid);
									printf("\n");
									for(i=0;i<nids;i++)
									{
										
										check=strcmp(nid,registrar[i].id);   //Comparamos con strcmp el nombre introducido con los que hay en el fichero registrar
										if(check==0)
										{
											printf("El nombre es correcto. Puede continuar\n");
										
											
											break;
										}
										else if(i==nids-1)
										{
											printf("Su nombre no esta registrado o es incorrecto.\n Repite\n");
										}
									}	
								
								}while(check!=0);
								
								
								
								i=0;
							do
								{
									printf("Contraseña:\n");
									scanf("%s",pass);
									for(i=0;i<nids;i++)
									{
										check1=strcmp(pass,registrar[i].contrasenia);  //Comparamos con strcmp la contraseña con los que hay en el fichero registrar
										if(check1==0)
										{
											printf("Contraseña correcta\n");
											
											break;
										}
										else if(i==nids-1)
										{
											printf("Contraseña incorrecta.\n Repite\n");
										}
									}
																		
								
								}while(check1!=0);
								
								i=0;
								
								fclose(pfichero);
							
							}while(fscanf(pfichero,"%s   %s   \n",registrar[i].id,registrar[i].contrasenia)!=EOF);
						}
				    printf("Ha iniciado sesion correctamente\n");
					printf("Presione el espacio\n");
					getch();
					}	
				}
	
	
	system("cls");
	
	  pstock = fopen("stock.txt","r");
	if(pstock==NULL)
	{
		printf("No se pudo abrir correctamente el fichero\n");
		return -1;
	}
		while(fscanf(pstock,"%s   %s   %f\n",&stock[campo].estado, &stock[campo].marca, &stock[campo].matricula)!=EOF) {
				campo++;
		    }
	

	fclose(pstock);
	
	
	
			do{
				
	
			printf("Elije un numero: 1-Dar de alta, 2-Dar de baja o 3-Consultar\n");
                    	scanf("%d",&opcion2);
                    	
                    	 switch (opcion2)
                    	 {
						case 1:{
		  	
				printf("Estado del vehiculo:\n");	
  				scanf("%s", &stock[campo].estado);
  				
  				printf("Introduce modelo:\n");	
     			scanf("%s", &stock[campo].marca);
     			
         		printf("Introduce matricula:\n");
         		scanf("%s",&stock[campo].matricula);
         		
         		printf("REGISTRO INTRODUCIDO\n");
         		
         		campo++;
         		


         		
         		pstock =fopen("stock.txt","w");
				if(stock==NULL)
				{
					printf("El fichero no se pudo abrir\n");
					return -1;
				}
				
				
				for (j=0;j<campo;j++)
         		{
         		fprintf(pstock,"%s    %s    %s\n",stock[j].estado,stock[j].marca,stock[j].matricula);
				}
				fclose(pstock);		
		
		break;
	}

						case 2:	{
		  	//borrar
			
     			
         		printf("Introduce matricula:\n");
         		scanf("%s",&stock[campo].matricula);
         		
         		printf("REGISTRO INTRODUCIDO\n");
         		
         		campo++;
         		
         		
         		pstock =fopen("stock.txt","w");
				if(stock==NULL)
				{
					printf("El fichero no se pudo abrir\n");
					return -1;
				}
				
				
				
				for (j=0;j<campo;j++)
         		{
         		fprintf(pstock,"%s    %s    %s\n",stock[j].estado,stock[j].marca,stock[j].matricula);
				}
				fclose(pstock);		
		
		break;
	}
							
							
                    	case 3: {
							
                    		
                    			pstock =fopen("stock.txt","r");
				if(stock==NULL)
				{
					printf("El fichero no se pudo abrir\n");
					return -1;
				}
                    		
                    			while (fscanf(pstock, "%s %s %s", &x, &y, &z) != EOF){
								printf("%s %s %s\n", x, y, z);
								NumeroCoches++;
	}
	// Mejorar el contador ya que el primer bucle el contador lo hace bien, al siguiente pone numejor al azar.
	printf("COCHES EN STOCK: %d\n", NumeroCoches);
	
	fclose(pstock);
	printf("Presione el espacio\n");
					getch();
}
}

}

	
while (opcion2>0 && opcion2<4);

    //break;

	}
	case 3: { 
	system("cls");
	printf(" HASTA LUEGO...");
		break;
	}
    
    }
    break;

}while (opcion>0 && opcion<2);
    
return 0;
}
