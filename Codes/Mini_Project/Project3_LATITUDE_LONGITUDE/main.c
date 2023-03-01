/*
   WAP to filter the gps data depending upon the user
  GPS DATA :-  $GPGGA,181908.00,3404.7041778,N,07044.3966270,W,4,13,1.00,495.144,M,29.200,M,0.10,0000*40
*/ 



#include<stdio.h>

int main(){
char gps[] ={"$GPGGA, 181908.00, 3404.704, N,7044.396, W, 4, 13, 1.00, 495.144, M, 29.200, M, 0.10, 40*40"};
printf("\nThe GPS data are given below-->\n");
for(int i=0;i<=78;i++){
printf("%c",gps[i]);
}
printf("\n\n");
printf("\nLatitude is given below-->\n");
for(int i=0;i<=29;i++){
printf("%c",gps[i]);
}

printf("\n");
printf("\nLongitude is given below-->\n");
for(int i=31;i<=63;i++){
printf("%c",gps[i]);
}
return 0;
}
