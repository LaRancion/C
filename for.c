#include <stdio.h>
int main() {
int i, j;
for (i=0, j=0; i < 10; i+=1, j+=10) {
printf("i+j = %d\n", i+j);
}
return 0;
}
//