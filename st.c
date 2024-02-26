#include<stdio.h>
// #include<string.h>

struct data{
    char name[50];
    int roll;
    char branch[10];
};
int main(){
    int n;
    
    printf("enter the number of students : ");
    scanf("%d", &n);

    struct data s[n];

    for(int i=0; i<n; i++){
        printf("\n\t\tEnter name of student %d : ", i+1);
        scanf("\n%s", &s[n].name);

        printf("\t\tEnter Roll no : ");
        scanf("\n%d", &s[n].roll);

        printf("\t\tEnter Branch : ");
        scanf("\n%s", &s[n].branch);
        
    }
    for(int i=0; i<n; i++){

        printf("_____________________________________\n\n");

        printf("Name of student_%d : %s\n", i+1, s[n].name);
        printf("Roll no : %d\n", s[n].roll);
        printf("Branch : %s\n", s[n].branch);
    }
    
    return 0;
}