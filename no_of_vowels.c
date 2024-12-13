#include <stdio.h>
int tot(char x[]){
    int sum=0;
    int strlen=0;
    int j=0;
    
    while(*(x+strlen)!='\0'){
        strlen+=1;
    }
    int vowel[strlen];
    
    for(int i=0;i<strlen;i++){
        
    if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'||x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){
        sum++;
        vowel[j]=x[i];
        j++;
    }
    
}
    
printf("The vowels in the string are: ");
for(int i=0;i<j;i++){
    printf("%c ",vowel[i]);
}
return sum;
}
int main(void) {
    char x[100];
    printf("Enter a string: ");
    scanf("%s",x);
    int total=tot(x);
    printf("\n\nThe number of vowels in the string is: %d",total);
    printf("\n\n");

    return 0;
}
