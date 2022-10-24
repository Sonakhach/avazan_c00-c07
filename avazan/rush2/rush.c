#include <stdio.h>
int main(int argc, char **argv)
{
	
	(void)argc;
	(void)argv;
  //  (int) *str = argv[1][0]-48+argv[2][0]-48;
	printf("%d\n", argc);
	printf("%s\n", argv[1]);
	printf("%d\n", (argv[1][0]-48)*(argv[2][0]-48));
//	printf("%d\n", str);
	return(0);
}
