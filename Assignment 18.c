#include <stdio.h>
#include <string.h>

void main() {
char str1[100], str2[100];
int len, i, j, flag = 1;

printf("Enter first string: ");
fgets(str1, sizeof(str1), stdin);
str1[strcspn(str1, "\n")] = 0;

printf("Enter second string: ");
fgets(str2, sizeof(str2), stdin);
str2[strcspn(str2, "\n")] = 0;

len = strlen(str1);
printf("Length of string = %d\n", len);
printf("Reversed string = ");
for(i = len - 1; i >= 0; i--) {
printf("%c", str1[i]);
}
printf("\n");
if(strcmp(str1, str2) == 0)
printf("Strings are equal\n");
else
printf("Strings are not equal\n");

for(i = 0, j = len - 1; i < j; i++, j--) {
if(str1[i] != str1[j]) {
flag = 0;
break;
}
}
if(flag)
printf("String is a palindrome\n");
else
printf("String is not a palindrome\n");

if(strstr(str1, str2) != NULL)
printf("Second string is a substring of first\n");
else
printf("Second string is not a substring of first\n");

}
