 #include <stdio.h>

int main() 
{ 
	int columnas,filas,aux,fil,col,con,k,l,i,j,t; 
	//pedimos tamaño de filas
printf("Tamaño de filas de su matriz1\n"); 
scanf("%d",&filas);
//pedimos tamaño de columnas
 printf("Tamaño de columnas de su matriz1 \n");
  scanf("%d",&columnas); 
int matriz1[filas][columnas]; 
int matriz2[filas][columnas]; 
int matrizResultante[filas][columnas]; 
//llenando matriz1	
printf("Ingrese la matriz1:\n");
 for(fil=0; fil< filas; fil++) { 		
	 for(col=0; col< columnas; col++) 		{ 
printf("Elementos [%d,%d]: ",fil,col);
 scanf("%d",&matriz1[fil][col]); }	 
 } 
//llenando matriz2	
printf("Ingrese la matriz2:\n"); 
for(fil=0; fil< filas; fil++) { 		
	for(col=0; col< columnas; col++) 		{ 
printf("Posicion [%d,%d]: ",fil,col);
 scanf("%d",&matriz2[fil][col]); 
}	 
} //mostrar matriz1
printf("\n Matriz1:\n"); 	 
for(fil=0;fil<filas;fil++) 	
 { printf("[ "); 
	 for( col=0;col<columnas;col++) 	 { 
		 	 printf("%d ",matriz1[fil][col]); } 	 
printf("]"); 	 
printf("\n"); 	 } 	
//mostrar matriz2 
	printf("\n Matriz2:\n"); 	
	 for( fil=0;fil<filas;fil++) { 
		 	 printf("[ "); 	 
for( col=0;col<columnas;col++) 	 { 
	printf("%d ",matriz2[fil][col]); 
	} 
printf("]"); 	
 printf("\n");
  } 
if(columnas==filas) 	{ 
printf("matriz resultante es: \n");
 for(i=0;i<filas;i++) 	 { 
printf("[ "); 
for(j=0;j<columnas;j++) { 
	matrizResultante[i][j]=0; 
for(t=0;t<columnas;t++) { 
matrizResultante[i][j]+=matriz1[i][t]*matriz2[t][j]; }
 printf("%d ",matrizResultante[i][j]); 
 } 
 printf("]"); 
 printf("\n"); } 	} 
 	else 	{ 

} 
printf("Numeros Primos: \n"); 
//numeros primos
for(fil=0;fil<filas;fil++) 	{ 	
	 for(col=0;col<columnas;col++) 	 { 
for(t=1;t<=matrizResultante[fil][col];t++){
	 if (matrizResultante[fil][col]%t==0) { 
		 con++;
		  } 
		  } 
		 if (con==2) { 
			 
k++;
 printf("%d  la posicion  es [%d,%d] ",matrizResultante[fil][col],fil,col); 
} 
con=0; } 	
} 
printf("\n"); 
int vector[k]; 

for(fil=0;fil<filas;fil++) { 
for(col=0;col<columnas;col++) 
	 { for( t=1;t<=matrizResultante[fil][col];t++){
		  if (matrizResultante[fil][col]%t==0) { 
con++; }
 } if (con==2) {
	  vector[l]=matrizResultante[fil][col]; 
l++; }
 con=0; } 
 	} //Ordenara el vector por el metodo burbuja
 	 for (i = 0; i <k-1; i++) 
{ for(j=0; j<k-1; j++){ 
	if (vector[j]>vector[j+1]) { 
aux=vector[j]; 
vector[j]=vector[j+1]; 
vector[j+1]=aux; } 
} } 
printf("\n Numeros primos son:\n"); 
for (i = 0; i < k; i++) { 
printf("%d ",vector[i]); 
} 
return 0;
 }
