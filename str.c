#include<stdio.h>

struct info{
    char name[50];
    int roll;
    char branch[10];
};
int main(){
    int n;

    printf("Enter the no. of students : ");
    scanf("%d", &n);

    struct info s[n];

    for(int i=0; i<n; i++){
        printf("\nEnter name of student %d : ", i+1);
        scanf("%s", &s[n].name);
        printf("Enter roll no : ");
        scanf("%d", &s[n].roll);
        printf("Enter branch : ");
        scanf("%s", &s[n].branch);
    }
    for(int i=0; i<n; i++){
        printf("\n\n...........................................\n\n");
        printf("\tName of student %d : %s\n", i+1, s[n].name);
        printf("\tRoll no : %d\n", s[n].roll);
        printf("\tBranch : %s", s[n].branch);
    }
    return 0;

}