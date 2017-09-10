     1	
     2	#include"pgmhead"
     3	
     4	void load(struct Student b[])
     5	{
     6		char FILENAME[max];
     7		FILE *fopen(), *FilePtr;
     8		int FileFlag = 0;
     9		int num = 0;
    10		int test = 0;
    11		
    12		while(FileFlag!=1)
    13		{
    14			printf("Please enter the filename for reading> ");
    15			scanf("%s",&FILENAME);
    16	
    17			FilePtr = fopen(FILENAME,"r");
    18			
    19			if(FilePtr == NULL)
    20			{
    21				printf("Could not open %s for reading\n",FILENAME);
    22					scanf("%*s");
    23			}
    24			else
    25			{
    26					FileFlag = 1;
    27			
    28			}
    29		}
    30		printf("\n");
    31		while(1)
    32		{
    33			fscanf(FilePtr,"%s",b[num].StudentID);
    34			fscanf(FilePtr,"%s",b[num].StudentName);
    35			if(feof(FilePtr))
    36				break;
    37			printf("%s\t%s\n\n",b[num].StudentID,b[num].StudentName);
    38			b[num].ActFlag[0] = 'y';
    39			num = num + 1;
    40		}
    41		printf("Have been loaded\n\n");
    42		fflush(FilePtr);
    43		fclose(FilePtr);
    44	}
