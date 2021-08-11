# include <stdio.h>
# include <string.h>

int main( )
{


	FILE *fptr ;


	char dataToBeRead[50];


	fptr = fopen("D:\\Google Drive\\AEC 2nd Sem Section D\\programs_lecture\\Text_FH_writing\\test.txt", "r") ;


	if ( fptr == NULL )
	{
		printf( "test.txt file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;


		while( fgets ( dataToBeRead, 50, fptr ) != NULL )
		{


			printf( "%s" , dataToBeRead ) ;
		}


		fclose(fptr) ;

		printf("Data successfully read from file test.txt\n");
		printf("The file is now closed.") ;
	}
	return 0;
}
