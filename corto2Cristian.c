# include <Stdio.h>;
int main(){
int ta,i,j;
//Pedimos el tamaño de vector
printf("Ingrese el tamaño de su vector\n");
scanf("%d",ta);

int vector[ta];


//llenamos el vector sin repetir datos
for (i = 0; i < ta; i++)
{
   int v;
   printf("\nIngrese el dato numero ",(i+1)," para su vector\n");
	 scanf("%d",v);
         int p=0;
    	for (j = 0; j < ta ; j++)
	      {     
		if (v==vector[j])
	     {
	    p++;
    	 }		
	}
        if (p==0) {
    vector[i]=v;
        p=0;    
    }else{
            printf("\nEl valor ya existe ingrese otro nuevo valor\n");
		i--;
       p=0;
   }
}

//Mostramos el vector
printf("\nTu vector es :\n");
for (i = 0; i < ta; i++)
{
	printf("%d",vector[i]);
}


// Ordenamos el vector desendentemente

for (i = 0; i < ta-1; i++)
{
	for (j = i+1; j < ta; j++)
	{
		 if (vector[j]>vector[i])
		 {
			 int auxiliar=vector[j];
			 vector[j]=vector[i];
			 vector[i]=auxiliar;
		 }
	}
}
//Mostramos el vector ordenado desendentemente
printf("\nTu vector vector ordenado desendentemente es :\n");
for (i = 0; i < ta; i++)
{
	printf("%d",vector[i]);
}

    int media=0;
// calculamos la media aritmetica
    for (i = 0; i < ta ; i++)
  {
	media=media+vector[i];
 }
// imprimimos la media aritmetica
 float r=media/ta;
 printf("\nLa media aritmetica del vector es\n");
 printf("%f",r);
 media=0;
//claculmos el numero mayor y menor
  int mayor=vector[0],menor=vector[0];
  for (i = 0; i < ta; i++)
  {
	if (mayor<vector[i])
	  {
		mayor=vector[i];
	}
	if(menor>vector[i]){
		menor=vector[i];
   }	
 }
//Mostramos el dato mayory menor
 printf("\nEl numero mayor del vector es\n");
 printf("%d",mayor);
printf("\nEl numero menor del vector es\n");
 printf("%d",menor);
return 0;
}

