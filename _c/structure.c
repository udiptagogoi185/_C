#include<stdio.h>
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
        printf("\n\tEnter name of student %d : ", i+1);
        scanf("\n%s", &s[i].name);

        printf("\tEnter Roll no : ");
        scanf("\n%d", &s[i].roll);

        printf("\tEnter Branch : ");
        scanf("\n%s", &s[i].branch);        
    }
    for(int i=0; i<n; i++){

        printf("_____________________________________\n\n");

        printf("Name of student_%d : %s\n", i+1, s[i].name);
        printf("Roll no : %d\n", s[i].roll);
        printf("Branch : %s\n", s[i].branch);
    }
    int search;
    printf("_____________________________________\n\n");
    printf("Enter the roll no to find : ");
    scanf("%d", &search);
    int found = 0;
    for(int i=0; i<n; i++){

        if(s[i].roll == search){
            printf("Name of student : %s\n", s[i].name);
            printf("Roll no : %d\n", s[i].roll);
            printf("Branch : %s\n", s[i].branch);
            found = 1;
            break;
        }
    }if(found == 0){
            printf("Not found");
    }
    return 0;
}