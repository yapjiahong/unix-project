     1	
     2	#include"pgmhead"
     3	
     4	void GroupInsert(struct Student b[])
     5	{
     6		char FILENAME[max];
     7		int FileFlag = 0;
     8		FILE *FilePtr;
     9		int student_num = 0;
    10		int credit = 0;
    11		char NameFlag[max];
    12	
    13		while(FileFlag != 1)
    14		{
    15			printf("Please enter the filename to be loaded> ");
    16			scanf("%s",&FILENAME);
    17			FilePtr = fopen(FILENAME,"r");
    18			
    19			if(FilePtr == NULL)
    20			{
    21				printf("Could not open %s for reading\n",FILENAME);
    22				scanf("%*s");
    23			}
    24			else
    25			{	FileFlag = 1; }
    26		}
    27		
    28		printf("Credit of course %s> ",FILENAME);scanf("%d",&credit);
    29		
    30		while(1)
    31		{
    32			
    33			struct Student *Buffer;
    34			struct Course *NowCourse;
    35			
    36			Buffer = (struct Student*)malloc(sizeof(struct Student));
    37			NowCourse = (struct Course*)malloc(sizeof(struct Course));
    38	
    39			fscanf(FilePtr,"%s%d",Buffer->StudentID,&NowCourse->Score);
    40			if(feof(FilePtr))
    41			{
    42				free(Buffer);
    43				free(NowCourse);
    44				break;
    45			}
    46			student_num = NameSearch(Buffer->StudentID,b);
    47			
    48			if(student_num!=100)
    49			{
    50				NowCourse->NextCourse = NULL;
    51				strcpy((NowCourse->CourseCode),FILENAME);
    52				printf("\nCourse code %s\n",NowCourse->CourseCode);
    53	
    54				NowCourse->NextCourse = b[student_num].FirstCourse;
    55				b[student_num].FirstCourse = NowCourse;
    56				
    57				b[student_num].TotCredits = b[student_num].TotCredits + credit;
    58				b[student_num].TotCoursePoints = b[student_num].TotCoursePoints + (NowCourse->Score * credit);
    59				printf("StudentId: %s\n",b[student_num].StudentID);
    60				printf("Name: %s\n",b[student_num].StudentName);
    61				printf("score: %d\n",NowCourse->Score);
    62			}
    63			else if(student_num = 100)
    64			{
    65				printf("invaild id > %s\n",Buffer->StudentID);
    66				free(NowCourse);
    67			}
    68			
    69			printf("\n");
    70			free(Buffer);
    71			fflush(stdin);
    72		}
    73		//fclose(FilePtr);
    74	}
