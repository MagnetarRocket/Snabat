#include<stdio.h>
#include<stdlib.h> 
//#include<err.h>
#include<time.h>
//random > rand
//© MagnetarRocket 2023

/*int Main(int argc, char **argsv)
{
	//need to dump in the file name from args
	unsigned int fileLines = 0, lotsPick = 0;
	char ;
	//while(int bee <= argc, bee = 5, bee++)
	if (argc > 1)
	{}
	else
	{

	}
}*/
FILE* dump;
char blurt;
int fileLines = 0, lotsPick = 0;
char WorkingFile[];

//int Main(int argc, char **argsv)
int Main(int argc, char *argsv[])
{
	//need to dump in the file name from args
	printf("arguements: %d", argc);
	printf("argv's: %d", argc);
	srandom(time(0));
	//srand( time(0) );
	/*while()
	{}*/
	
	/*while (EOF != (scanf ("%*[^\n]"), scanf("%[^\n]") ) )
	{  
		fileLines++; 
	}

	while (EOF != (fileLines= getchar()) )//
	{
		if(fileLines == '\n')
		{
			fileLines++;
		}
	}*/

	for(int bee = 0; bee <= argsv; bee++)
	{
		dump = fopen(argsv[bee], "r");
		if (dump == NULL)
		printf("%s was not found, contuining on…", dump);
		else
		{
			/*for (blurt = getc(dump);blurt != EOF;)
			{
				if (blurt == '\n')
				{
					fileLines++;
				}

			}*/

		}
		lotsPick = random() % fileLines;
		printf(dump[lotsPick]);

		fclose(dump);
		fileLines = 0;
	}
	//while(int bee <= argc, bee = 5, bee++)
	/*if (argc > 1)
	{
		printf ("Too much arguements, try one at an time.");
	}
	else
	{

	}*/
	//fclose(dump);
	return 0;
}

int ArgOptions(char inputC)
{
	switch (inputC)
	{
	case 'e':
		/* code */
		break;
	
	default:
		break;
	}
}