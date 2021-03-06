#include <stdlib.h>
#include <stdio.h>

int binarysearch(int *ptr,int n,int m,int l,int u)
{
    
    
    int mid,c=0;
     
   
   
    if(l<=u)
    {
        mid=(l+u)/2;
        if(ptr[mid]==m)
        {
           c=1;
        }else if(m<ptr[mid])
        {
        return binarysearch(ptr,n,m,mid-1,u);
        }else
        {
        return binarysearch(ptr,n,m,mid+1,u);
        }
    }else
    {
        return c;
    }
    
}


void display(int *ptr,int n)
{
    int i;
      for(i=0;i<n;i++)
    {
        printf("%d\t ",ptr[i]);
        
    }
}


void search(int *ptr,int n)
{
    int i,c,pos,flag=0;
     printf("\nEnter the desired element to be searched:");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(ptr[i]==c){
                flag++;
            pos=i+1;
            break;
        }else{
        continue;}
    }
    if(flag==1){
        printf("\nElement found at position %d",pos);
    }else{
    printf("\nElement NOt Found");
    }

}

void sort(int *ptr,int n)
{
    int i,j,temp;
     for(i=0;i<n;i++){
        for(j=1;j<(n-i);j++){
            if(ptr[j-1]>ptr[j]){
               temp=ptr[j-1];
               ptr[j-1]=ptr[j];
               ptr[j]=temp;
            }
        }
    }

        
}

int main()
{
    int *ptr,n,i,choice,c,m;
    char ch;

    printf("\nEnter the number of elements");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("\nMemory not available");
        exit(0);
    }
    printf("\nEnter the elements in array: ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the elements in array at %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    

do
    {
        system("cls");
        printf("\n***********MENU**************\n");
        printf("\n1. Searching");
        printf("\n2. Sorting");
        printf("\n3. Display");
        printf("\n4. Binary Search");
        printf("\n5. Exit");
        printf("\n\n*****************************");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: search(ptr,n);
                    break;
            case 2: sort(ptr,n);
                    break;
            case 3: display(ptr,n);
                    break;
            case 4: sort(ptr,n);
                    printf("\nEnter the element to be searched: ");
                    scanf("%d",&m);
                    c=binarysearch(ptr,n,m,0,n-1);
                     if(c==0)
                        {
                            printf("Number Not found");
                        }else
                        {
                            printf("\nNumber found");
                        }
                    break;
            case 5: exit(0);
                    
            default:printf("\nInvalid Choice");
                    break;
        }
        printf("\nDo you want to continue[y/n]");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');

   
    
    printf("\n");
    return 0;
}

