     1	
     2	#include"pgmhead"
     3	
     4	void average(struct Student b[])
     5	{
     6		float avg = 0.00;
     7		int num = 0;
     8		char def[] = "D9999999";
     9		int flag = 0;
    10	
    11		while(num<max)
    12		{
    13			if(b[num].ActFlag[0] == 'y')
    14			{
    15				flag = strcmp(b[num].StudentID,def);
    16				if((flag !=0 )&&(b[num].TotCredits != 0))
    17				{
    18					flag = strcmp(b[num].StudentID,def);
    19					if((flag != 0)&&(b[num].TotCredits != 0))
    20					{
    21						avg = (float)(b[num].TotCoursePoints)/(b[num].TotCredits);
    22					b[num].Average = avg;
    23					}
    24				}	
    25			}
    26			num = num + 1;
    27		}
    28		printf("\nAll Student`s average have done\n\n");
    29	}
