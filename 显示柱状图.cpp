#include<stdio.h>
#include<stdlib.h>
int main()
{
   char table[20][30];
   int num[19];
   char sign[19];
   int n, i, j, up=0, down=0;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
		if(num[i]>up&&num[i]>=0)
		up=num[i];
		else if(num[i]<=0&&down>num[i])
            down=num[i];
        scanf("%c", &sign[i]);
    }
    int row=up-down+1;
    for(j=0;j<n;j++){
    	if(num[j]>0){
    		for(i=0;i<row;i++){
                if(i<up-num[j])
                {
                    table[i][j]=' ';
                }
                else if(i<up&&i>=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    }
                    else{
                        table[i][j]=sign[j];
                    }

                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else
                {
                    table[i][j]=' ';
                }
            }
        }
        else
        {
            for(i=0;i<row;i++)
            {

                if(i<up)
                {
                    table[i][j]=' ';
                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else if(i>up&&i<=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    } else{
                        table[i][j]=sign[j];
                    }
                }
                else
                    {
                     table[i][j]=' ';

                }
            }

        }
    }


    for(i=0;i<row;i++)
    {
        if(i==up)
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                {
                    printf("%c",table[i][j]);
                }
                else
                {
                    printf("%c-",table[i][j]);
                }

            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",table[i][j]);
            }
        }
        printf("\n");
    }   
return 0;
}
