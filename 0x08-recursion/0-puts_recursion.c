#include "main.h" 
  
 /** 
 *_puts_recursion -A function that prints a given string recursively 
 *@s: The string to print 
 */ 
 void _puts_recursion(char *s) 
 { 
 if (*s == '\0') 
 { 
 _putchar('\n'); 
 } 
 else 
 { 
 _putchar(*s); 
 s++; 
 _puts_recursion(s); 
 } 
 }
