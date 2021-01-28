#include <stdio.h>
/*int main() {
int a = 28;
int i = (a - 1);
int b = a;

     while (i > 0) {
    i--;
    if (a % i == 0) {
  b = a - i;
        break;
 if (b <= 0) {
        break;
  if (i == 1) {
             printf("true");
        break;
		}
 else {
              printf("false");
        break;
					
	}
	}
	}
	}*/
 /*int main() {
  int   number = 7;
 float res = 0, i = 0, a, 
 counter = 1;
for (; (res * res) != number && counter < 1000000;)
  {
   a = (res + i / counter) * (res + i / counter);
   if (a > number) {
   res += (i - 1) / counter; counter *= 10; i = 0;
    }
    i++;
  }  */ 
int main() {
  int number = 7;
  
  float res = 0, i = 0, a, counter = 1;

  do
  {
    a = (res + i / counter) * (res + i / counter);
    if (a > number) {
      res += (i - 1) / counter; counter *= 10; i = 0;
    }
    i++;
  } while ((res * res) != number && counter < 1000000);


 return 0;
 }
 
 
 
 
 
 
 
 
