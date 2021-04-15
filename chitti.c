#include  <stdio.h>
int main()
{
    int n ,arr[1000],c,d,t,flag=0;
    scanf("%d",&n);
    
for(c=0;c<n;c++)
{
        scanf("%d",&arr[c]);
}
        
    for(c=1,c<=n-1,c++)
    {
        t=arr[c];
        
        for(d=c-1;d>=0;d--)
        {
            if (arr[d]>t)
            {
                arr[d+1]=arr[d];
                flag=1;
            }
            else
            {
                break;
            }
            if(flag)
            {
             arr[d+1]=t;
            }
            
        }
    }

    for(c=0;c<=n-1;c++){
            printf("%d\n",arr[c]);
        }
        return 0;
}

