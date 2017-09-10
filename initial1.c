     1	
     2	#include"pgmhead"
     3	
     4	
     5	
     6	void initial(struct Student b[])
     7	{
     8		char default1[] = "y";
     9		char default2[] = "D9999999";
    10		char default3[] = "xxxxxxxxxxxxxxxxxxx";
    11		int default4 = 0;
    12		float default5 = 0.00;
    13		int num = 0;
    14		
    15		while(num<max)
    16		{
    17			strcpy((b[num].ActFlag),default1);
    18			strcpy(b[num].StudentID,default2);
    19			strcpy(b[num].StudentName,default3);
    20			b[num].TotCoursePoints = default4;
    21			b[num].TotCredits = default4;
    22			b[num].Average = default5;
    23			b[num].FirstCourse = NULL;
    24			num = num + 1;
    25		}
    26		printf("\nInitial...\n\n");
    27	}
