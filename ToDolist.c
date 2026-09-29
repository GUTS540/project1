#include<stdio.h>
#include<string.h>
int main (){
    char str1[100];
    int i,n=0,p;
    printf("Enter ToDO list\n");
    fgets(str1,100,stdin);
    
    
    while(n!=5){
        printf("Enter\n1.To see your ToDO list \n2. To edit your ToDo list\n3.To create a new ToDo list\n4.To delete your ToDo list\n5.To exit\n");
    scanf("%d",&n);
    getchar();
        switch(n){
            case 1:
            printf("Your ToDo list \n");
            printf("%s",str1);
            break;
            case 2:{
            char str2[100];
    printf("Things to add to your ToDo:\n");
    fgets(str2, 100, stdin);

    
    str1[strcspn(str1, "\n")] = '\0';

    strcat(str1," ");
    strcat(str1, str2);

    printf("\nYour ToDo List:\n%s", str1);
            break;
            }
    case 3:
    printf("Enter your new ToDo list\n");
    str1[0]='\0';
    fgets(str1,100,stdin);
    printf("%s",str1);
    break;
    case 4:
    str1[0]='\0';
    break;
        
    case 5:
        printf("Exiting ToDo list\nThank You <3");
        break;
        default :
    break;
    }
    
}
}