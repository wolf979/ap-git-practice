#include <stdio.h>
void red(){printf("[0;31m");}
void Purple(){printf("[0;35m");}
void Blue (){printf("[0;34m");}
int main () {
red();
printf("Hello ");
Purple();
printf("world");
Blue();
printf("!!!
");
return 0;
}
