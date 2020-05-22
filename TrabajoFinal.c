
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
        int clave;
        int intento=0;
        
        
        struct coches stock[COCHES];
		int  j;
		FILE * pstock;
		char x[10],y[10],z[10];
		int campo=0;
		char bmarca[80];
		char matricula[50];
        int pregunta;
        int control=0;
        
        
    pfichero = fopen("registro3.txt","r");
	if(pfichero==NULL)
		{
			printf("No se pudo abrir correctamente el fichero\n");
			return -1;
		}
			while(fscanf(pfichero,"%s   %s   \n",registrar[nids].id, registrar[nids].contrasenia)!=EOF) {
					nids++;
			    }
		fclose(pfichero);
		
		
			  pstock = fopen("stock3.txt","r");
	if(pstock==NULL)
		{
			printf("No se pudo abrir correctamente el fichero\n");
			return -1;
		}
			while(fscanf(pstock,"%s   %s   %s\n",&stock[campo].estado, &stock[campo].marca, &stock[campo].matricula)!=EOF) {
					campo++;
			    }
		fclose(pstock);
	


do{	


	opcion=menu1();
			switch(opcion)
		    {
		    
			 	case 0: {
		    	
				    	do {
				    		cabecera();
						printf("                                 MENU ADMINISTRADOR\n");
						printf("                                 -------------------\n\n\n");

						printf("Clave Administrador (SOLO NUMEROS) --> ");
						scanf("%d",&clave);
										
						if(clave!=1234) {
								
							printf("\n");		
							printf("Clave incorrecta, pulse para intentarlo de nuevo");

							getch();
							system("cls");
							intento++;
						//	break;
									
						}else{
							
							printf("\n");
							printf("Clave correcta, pulse para continuar");
							int clave;
							getch();
							system("cls");
							cabecera();							
							printf("                                 MENU ADMINISTRADOR\n");
							printf("                                 -------------------\n\n\n");

		
							printf("Estado del vehiculo:\n");	
			  				scanf("%s", stock[campo].estado);
			  				
			  				fflush(stdin);
			  				
			  				printf("Introduce modelo:\n");	
			     			scanf("%s", &stock[campo].marca);
			     			
			     			fflush(stdin);
			     			
			         		printf("Introduce matricula:\n");
			         		scanf("%s",&stock[campo].matricula);
							campo++;
			
			         		pstock =fopen("stock3.txt","wb");
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
			         		printf("\n");
			         		printf("REGISTRO INTRODUCIDO\n");
			         		printf("\n");
			         		printf("Desea dar de alta otro vehiculo?  SI= 1 / NO= 0 --> ");
			         		scanf("%d",&pregunta);
			         		if(pregunta!=1) {
							 
							 	system("cls");					
								break;		
												
							}else{
								
								system("cls");
								continue;
								break;
							
							}
			         		
			         		getch();
							break;
					}
					}while  (intento<3);
					break;
				}
			
				
				case 1: {
					        cabecera();
					         
				            printf("Inserte nombre de usuario:\n");
			  				scanf("%s", &registrar[nids].id);
			  				printf("\n"); 
			  				printf("Introduce tu password:\n");	
			     			scanf("%s", &registrar[nids].contrasenia);
			     		 
			         		printf("Contraseña guardada\n");       		
			         		printf("\n"); 
			         		printf("REGISTRO COMPLETADO BIENVENIDO\n");
			         		
			         		nids++;
			         		         		
			         		pfichero =fopen("registro3.txt","w");
			         		
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
							
								printf("Presione el espacio\n");
								getch();
								system("cls");	
								
					break;
						
				}
				
				case 2: {
							cabecera();
						{
							if(nids==0)
							{
								printf("Todavia no hay ningun usuario registrado. Cree un usuario antes.");
								break;
							}
							else
							{
								pfichero=fopen("registro3.txt","r");
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
												
												check=strcmp(nid,registrar[i].id); //Comparamos con strcmp el nombre introducido con los que hay en el fichero registrar
												if(check==0)
												{
													
													printf("El nombre es correcto. Puede continuar\n");
													printf("\n");
													break;
												}
												else if(i==nids-1)
												{
													printf("Su nombre no esta registrado o es incorrecto.Repite\n");
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
												check1=strcmp(pass,registrar[i].contrasenia); //Comparammos la contrase? que introduce el usuario con las ya registradas en el caso 1
												if(check1==0)
												{
													printf("\n");
													printf("Contraseña correcta\n");
													
													break;
												}
												else if(i==nids-1)
												{
													printf("Contraseña incorrecta.Repite\n");
												}
											}
																				
										
										}while(check1!=0);
										
										i=0;
										
										fclose(pfichero);
									
									}while(fscanf(pfichero,"%s   %s   \n",registrar[i].id,registrar[i].contrasenia)!=EOF);
								}
							printf("\n");
						    printf("Ha iniciado sesion correctamente\n");
							printf("Presione el espacio\n");
							getch();
							}	
						}
				
						system("cls");
						
					
								do{
									
									opcion2=menu2();
									
									switch(opcion2)
				
	
				                    	scanf("%d",&opcion2);
				                   	
				                    	 switch (opcion2)
				                    	 {
				
										case 1:	{
								  			 
												pstock =fopen("stock3.txt","r");
												if(stock==NULL)
												{
												printf("El fichero no se pudo abrir\n");
												return -1;
												}
							
												do
												{
												
													printf("Introduzca la marca:\n");
													scanf("%s",bmarca);
													printf("\n");
													control=0;
													
													for(i=0;i<campo;i++){
													
														check=strcmp(bmarca,stock[i].marca); //Comparamos con strcmp el nombre introducido con los que hay en el fichero registrar
														if(check==0)
														
														{
														printf("%s %s %s\n",stock[i].estado,stock[i].marca,stock[i].matricula);
														control=1;
														}
													
														 else if(i==campo-1 && control==0)
														{
															printf("Su busqueda no existe, pulse enter para continuar\n");	
														//	break;					
														}	
							
																	}	
													getch();
												}while(i==campo-1);
											
												fclose(pstock);				
												break;
												}										
											
						                case 2: {
							                pstock =fopen("stock3.txt","r");
											if(stock==NULL)
											{
												printf("El fichero no se pudo abrir\n");
												return -1;
											}
							                system("cls");
											cabecera();   		
				                    		while (fscanf(pstock, "%s %s %s", &x, &y, &z) != EOF)
												{
												printf("%s %s %s\n", x, y, z);
												NumeroCoches++;
												}
								
											printf("COCHES EN STOCK: %d\n", NumeroCoches);
											fclose(pstock);
											printf("Presione el espacio\n");
											NumeroCoches=0;
															getch();
															break;
											}
						
										case 3: { 
											system("cls");
											cabecera();
											printf("\n\n");
											printf("                             GRACIAS POR UTILIZAR NUESTROS SERVICIOS");
											printf("\n\n");
										    return 0;
															
											}
										
											}
											
											}
				//while (opcion2>0 && opcion2<4);
					while (opcion2>0);
					}
		
	case 3: { 
			system("cls");
			cabecera();
			printf("\n\n");
			printf("                             GRACIAS POR UTILIZAR NUESTROS SERVICIOS");
			printf("\n\n");
				return 0;

	}
	
	
    }

			
}while (opcion >-1);					


return 0;
}





int menu1(){
	
	
	int opcion;
	
			cabecera();
		
			printf("                                 0-Altas (Solo Administradores)\n");
			printf("                                 1-Altas de nuevos usuarios\n");
			printf("                                 2-Iniciar sesion\n");
			printf("                                 3-Salir\n");
			printf("\n");	
			printf("                                 Escoja una opcion --> "); 	
			fflush(stdin);
			scanf("%d",&opcion);
		    system("cls");
	return opcion;
	
} 

int menu2(){
	
	int opcion2;
			system("cls");
			cabecera();
									
			printf("                                1-Buscar por Marca\n");
			printf("                                2-Consultar modelos a la venta\n");
			printf("                                3-Salir\n");
			printf("\n");	
			printf("                                Escoja una opcion --> "); 	

			fflush(stdin);
			scanf("%d",&opcion2);
			return opcion2;
	
}

cabecera(){
	

	
	printf("      XXXX                                                                                   XXXX   \n");	
			printf("   XXXXXXXXXX                                                                             XXXXXXXXXX   \n");
			printf("XXXXXXXXXXXXXXXX             CONCESIONARIO DE COCHES MULTIMARCA             	       XXXXXXXXXXXXXXXX  \n");
			printf("  0          0                                                                           0          0      \n\n");
			printf("-------------------------------------------------------------------------------------------------------\n\n");
		

	
} 

