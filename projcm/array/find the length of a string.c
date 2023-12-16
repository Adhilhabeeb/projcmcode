int main() {
  
  int len1, len2;
  
  //initializing the strings
  char string1[] = "Hello";
  char string2[] = {'c','o','m','p','u','t','e','r','\0'};
  
  //calculating the length of the two strings
  len1 = strlen(string1);
  len2 = strlen(string2);
  
  //displaying the values
  printf("Length of string1 is: %d \n", len1);
  printf("Length of string2 is: %d \n", len2);
}
