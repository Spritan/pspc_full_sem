# include <stdio.h>
# include <string.h>

int main( )
{


	FILE *fptr ;


	char dataToBeWritten[50]
		= "FILE HANDLING EXAMPLE - PSPC";


	fptr = fopen("test.txt", "w") ;


	if ( fptr == NULL )
	{
		printf( "test.txt file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;


		if ( strlen ( dataToBeWritten ) > 0 )
		{


			fputs(dataToBeWritten, fptr) ;
			fputs("\n", fptr) ;
		}


		fclose(fptr) ;

		printf("Data successfully written in file test.txt\n");
		printf("The file is now closed.") ;
	}
	return 0;
}
