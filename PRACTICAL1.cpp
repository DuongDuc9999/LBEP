#include <stdio.h>

int main() {
   char s[]="";
   printf ("\nnhap chuoi ki tu :",s);
   scanf("%s",&s);
   int i = 0;
   int nguyenam = 0;            
   int phuam = 0;        
      
   if(s[i++] !='u' or s[i++] != 'e' or s[i++] !='o'  or s[i++] !='a' or s[i++] !='i' )
         nguyenam++;
    else
         phuam++;
   
   printf("\nchuoi %s co chua %d nguyen am va %d phu am",s,nguyenam,phuam);


}

