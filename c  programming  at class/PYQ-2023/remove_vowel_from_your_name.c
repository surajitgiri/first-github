#include<stdio.h>
int is_vowel(char ch){
    ch=(ch>='A' && ch<='Z') ? ch+('a'-'A'):ch;
    return (ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
int main(){
    char name[100],result[100];
    int i,j=0;
    printf("enter your names: ");
    fgets(name,sizeof(name),stdin);

    for(i=0;name[i]!='\0';i++){
        if(!is_vowel(name[i])){
            result[j++]=name[i];
        }
        result[j]='\0';
    }
    printf("your name without vowel is: %s",result);
    return 0;
}



// #include <stdio.h>

// // Function to check if a character is a vowel
// int is_vowel(char ch) {
//     ch = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch; // Convert to lowercase if uppercase
//     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
// }

// int main() {
//     char name[100], result[100];
//     int i, j = 0;

//     // Input the name
//     printf("Enter your name and surname: ");
//     fgets(name, sizeof(name), stdin);

//     // Remove vowels
//     for (i = 0; name[i] != '\0'; i++) {
//         if (!is_vowel(name[i])) {
//             result[j++] = name[i];
//         }
//     }
//     result[j] = '\0'; // Null terminate the result string

//     // Output the modified name
//     printf("Name after removing vowels: %s", result);
    
//     return 0;
// }
