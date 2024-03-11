#include<stdio.h>
struct data{
    char Name[50];
    int Roll;
    char Branch[30];
};
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    struct data s[n];

    for(int i=0; i<n; i++){
        printf("enter name %d : ", i+1);
        scanf("%s", &s[i].Name);

        printf("enter roll : ");
        scanf("%d", &s[i].Roll);

        printf("enter Branch : ");
        scanf("%s", &s[i].Branch);
    }
    for(int i=0; i<n; i++){
        printf("\n\nName of %d : %s", i+1, s[i].Name);
        printf("\nRollno : %d", s[i].Roll);
        printf("\nBarnch : %s", s[i].Branch);
    }
    int search;
    int found = 0;

    printf("\nEnter the roll no to find student :");
    scanf("%d", &search);

    for(int i=0; i<n; i++){

        if(search == s[i].Roll){
        printf("\n\nName of %d : %s", i+1, s[i].Name);
        printf("\nRollno : %d", s[i].Roll);
        printf("\nBarnch : %s", s[i].Branch);
        found = 1;
        break;
        }
    } if(!found){
        printf("Not found!!!");
    }
    return 0;
}