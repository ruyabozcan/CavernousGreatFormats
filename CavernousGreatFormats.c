#include <stdio.h>
#include <string.h>
#define SIZE 5
int main(void) {
  void printStringArray(char[][25],int);
  void sortString(char[][25],int);
  void readString(char[][25],int);
  void reverse(char[][25],int);
  char names[SIZE][25];
  readString(names, SIZE);
  sortString(names, SIZE);
  printf("Sorted names:\n");
  printStringArray(names,SIZE);
  reverse(names,SIZE);
  printf("After reversing, names:\n");
  printStringArray(names,SIZE);

  return 0;
}

//--------------------
void printStringArray(char names[][25],int size){
  for(int i=0;i<size;i++)
    printf("%s\n",names[i]);
}
//------------------------
void sortString(char names[][25],int size){
  char temp[25];
  for(int i=0;i<SIZE-1;i++)
    for(int j=i+1;j<SIZE;j++)
     if(strcmp(names[i],names[j])>0){
       strcpy(temp,names[i]);
       strcpy(names[i],names[j]);
       strcpy(names[j],temp);
     }
}
//-----------------------
void readString(char names[][25],int size){
  for(int i=0;i<SIZE;i++){
    printf("Enter full name %d: ",i+1);
    scanf("%s",names[i]);
  }
}
//--------------------------------
void reverse(char names[][25],int size){
  char temp[25];
  char names2[SIZE][25];
  
  for(int i=0;i<size/2;i++){
    strcpy(temp,names[i]);
    strcpy(names[i],names[size-i-1]);
    strcpy(names[size-i-1],temp);
   }
}
//