#include <stdio.h>
void findduplicate(int x);
int hashfunction(int x,int n);
int n=7;
int i,j,ioa;
//chnage made 
// 2nd change done to file
//3rd change made to file
void main()
{
    
    int n=7;
    int arr[7] = {5,35,120,17,5,35,17};
    findduplicate(arr[n]);
    
}
int hashfunction(int x,int n)
{
    
    return x%n;
    
}

struct count
{
    
    int element[7];
    int count[7];
    
};
struct count ans[10];
void findduplicate(int x)
{
    int arr[7] = {5,35,17,7,5,35,17};
    
      int n=5;
      for(i=0;i<10;i++)
       {
         for(j=0;j<n;j++)
          {
            ans[i].count[j] = 0;
            ans[i].element[j] = '\0';
          }
       }   
      int m=0;
      for(i=0;i<7;i++)
      {
          int ioa = hashfunction(arr[i],n);
         
          
              for(m=0;m<7;m++)
              {
                  if(ans[ioa].element[m] == arr[i])
                  {
                      ans[ioa].count[m]++;
                  }

              }
          
		  
           if(ans[ioa].count[i] == 0)
          {
              ans[ioa].element[i] = arr[i];
              ans[ioa].count[i]++;
          }
          
          
        
      }
      
      printf("Repeated Elements are:\n");
      for(i=0;i<10;i++)
      {
          for(j=0;j<7;j++)
          {
              if(ans[i].count[j] > 1)
              {
                printf("%d \n",ans[i].element[j]);  
              }
                
          }
      }
}
