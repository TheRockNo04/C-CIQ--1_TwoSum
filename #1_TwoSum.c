#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){srand(time(0));
 int sizeofarray=10,array[sizeofarray],temp,i,j,target=20;

 for(i=0;i<sizeofarray;i++){array[i]=rand()%20;}

 printf("%d\n\n",target);

 for(i=0;i<sizeofarray;i++){printf("%d : %d\n",i+1,array[i]);}

 for(j=0;j<sizeofarray;j++){
    for(i=j;i<sizeofarray;i++){
        if(j==i)
            continue;

        else if(array[j]+array[i]==target)
            printf("\n%d.%d + %d.%d = %d\n",j+1,array[j],i+1,array[i],target);

    }
 }
getch();
return 0;
}
