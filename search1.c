     1	
     2	#include"pgmhead"
     3	
     4	int NameSearch(char s[],struct Student b[])
     5	{
     6		int flag = 0;
     7		int num = 0;
     8		int check = 0;
     9	
    10		while(flag!=1)
    11		{
    12			check = strcmp(b[num].StudentID,s);
    13			if(check!=0)
    14			{
    15				if(num == max)
    16				{
    17					flag = 1;
    18					num = 100;
    19				}
    20				else
    21				 num = num + 1; 
    22			}
    23			else if(check == 0)
    24			{
    25				flag = 1;
    26		 	}
    27			else if(num == max )
    28			{
    29				num = 100;
    30				flag = 1;
    31			}
    32		}
    33		return num;
    34	}
