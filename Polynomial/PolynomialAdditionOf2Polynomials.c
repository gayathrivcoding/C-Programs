#include <stdio.h>
#include <stdlib.h>


/* Author      : Gayathri V
   Date        : 20-10-2020
   Description : Program of Polynomial
*/
   
int main()
{
    printf("....................Program of polynomial.................\n");
    
    
    int poly1[30],poly2[30],poly3[30];   //array need some max value  even if we want to declare d1 and d2
    int d1,d2,i ;
    
    
    
   
   /*  Method of printing as 10 sized polynomial each
   
   //use array size 10 for this method
   
    printf("\nEnter the coffeficents of First Polynomial: \n");//reading from 0 to 10
   
    for(i=0 ; i<10 ;i++)
            {
                  scanf("%d",&poly1[i]);
            }
            
            
    printf("\nEnter the coffeficents of second Polynomial: \n");  //reading from 0 to 10
     for(i=0 ; i<10 ;i++)
                {
                  scanf("%d",&poly2[i]);
                }
  
  
    printf("The sum of  Two  Polynomial is:\n");   //calculating sum
  	
  	// printing in reverse order 0 to 10
  	
  	
  	 for(i=0;i<=10;i++) 
		  {
			poly3[i] = poly1[i] + poly2[i];
		  }
		 
  	for(i=0;i<10;i++)
         {
                if(i==1)
                printf("+  %d X  ", poly3[i]);
        
                else if(i==0)
                printf("+  %d  ", poly3[i]);
                
                else
                printf("+  %d X^%d  ",poly3[i],i);
                
            
         }//forclosing


*/
    


    printf("\nEnter the Degree of First Polynomial: \n");
    scanf("%d",&d1);
    
    while (d1<1)  // while loop ; till degree reaches the value greater than 1
    {
         printf("Degree should be greater than 1");
     
         printf("\n\nEnter the Degree of First Polynomial: \n");
         scanf("%d",&d1);
    }
    
        printf("\nCoefficient of polynomial in order starting from X^%d \n",d1);//reading coefficient
        for(i=d1 ; i>=0 ;i--)
            {
                  scanf("%d",&poly1[i]);
            }
     
 
    printf("\nEnter the Degree of Second Polynomial: \n");
    scanf("%d",&d2);

         
    while (d2<1)// while loop ; till degree reaches the value greater than 1
    {
            printf("Degree should be greater than 1");
     
            printf("\n\nEnter the Degree of Second Polynomial: \n");
            scanf("%d",&d2);
    }
          
   printf("\nCoefficient of polynomial in order starting from X^%d \n",d2);   //reading coefficient
   for(i=d2 ; i>=0 ;i--)
   {
    scanf("%d",&poly2[i]);
   }
  
 
  printf("\n\n");// next line for printing the arrays
         


             printf("The First Polynomial is:\n");
             for(i=d1;i>=0;i--)
             {
                 if(poly1[i]!=0) //first if
                 {
                      if(i==d1)
                        {
                    
                               if( i!=0 && i!=1){
                                   printf("\t%d X^%d  ",poly1[i],i); }
                               else if(i==1){
                                   printf("\t%d X  ",poly1[i]);}
                                else {
                                    printf("\t%d  ",poly1[i]);}
                        }
                
                       else if(i==1) {
                       printf("+  %d X  ", poly1[i]); }
        
                       else if(i==0) {
                       printf("+  %d  ", poly1[i]); }
                
                       else {
                       printf("+  %d X^%d  ",poly1[i],i); }
                
                 }//first if closing
             
                 else{
                    printf("");}
             }//for closing
         
         
             printf("\n\n"); // new line after first polynomial
 
 
             printf("The Second Polynomial is:\n");
             for(i=d2;i>=0;i--){

               if(poly2[i]!=0){
                
                   if(i==d2)
                   {
                    
                       if( i!=0 && i!=1)
                           printf("\t%d X^%d  ",poly2[i],i);
                       else if(i==1)
                           printf("\t%d X  ",poly2[i]);
                       else
                         printf("\t%d  ",poly2[i]);
                   }
                
                   else if(i==1)
                      printf("+  %d X  ", poly2[i]);
        
                   else if(i==0)
                      printf("+  %d  ", poly2[i]);
                
                   else
                      printf("+  %d X^%d  ",poly2[i],i);
                
                }
             
               else
                  printf("");
             
             }//for closing
         
             printf("\n\n");  // new line after second polynomial
         
     
    
    
    
//Adding the polynomials	
if(d1>d2)
{
		 for(i=0;i<=d2;i++)
		   {
			  poly3[i] = poly1[i] + poly2[i];
		   }
		  
		  for(i=d2+1;i<=d1;i++)
		  {
			  poly3[i] = poly1[i];
		
		  }

		  
	      printf("The sum of  Two  Polynomial is:\n");
          for(i=d1;i>=0;i--)
         {
             if(poly3[i]!=0)
             {
                  if(i==d1)
                 {
                    
                     if( i!=0 && i!=1)
                     printf("\t%d X^%d  ",poly3[i],i);
                     else if(i==1)
                     printf("\t%d X  ",poly3[i]);
                     else 
                     printf("\t%d  ",poly3[i]);
                 }
                
                else if(i==1)
                printf("+  %d X  ", poly3[i]);
        
                else if(i==0)
                printf("+  %d  ", poly3[i]);
                
                else
                printf("+  %d X^%d  ",poly3[i],i);
                
             }
             else
             printf("");
        
         }//for closing
		  

}//if closing
	
	

else if(d1=d2)   //SAME DEGREES
{
	   for(i=0; i<=d1; i++)
       {
          poly3[i] = poly1[i] + poly2[i];
       }

    printf("The sum of  Two  Polynomial is:\n");
        for(i=d1;i>=0;i--)
         {
             if(poly3[i]!=0)
             {
                  if(i==d1)
                 {
                    
                     if( i!=0 && i!=1)
                     printf("\t%d X^%d  ",poly3[i],i);
                     else if(i==1)
                     printf("\t%d X  ",poly3[i]);
                     else 
                     printf("\t%d  ",poly3[i]);
                 }
                
                else if(i==1)
                printf("+  %d X  ", poly3[i]);
        
                else if(i==0)
                printf("+  %d  ", poly3[i]);
                
                else
                printf("+  %d X^%d  ",poly3[i],i);
                
             }
             else
             printf("");
             
         }//forclosing
	
	
}//else if closing
	
else
{
     
     
     for(i=0; i<=d2; i++)
      {
          poly3[i] = poly1[i] + poly2[i];//corrected
      }
    
     for(i=d1+1;i<=d2;i++)
      {
        poly3[i] = poly2[i];
      }
      
      
      
    printf("The sum Polynomial is:\n");
          for(i=d2;i>=0;i--)
          {
             if(poly3[i]!=0)
            {
                
                  if(i==d2)
                 {
                    
                     if( i!=0 && i!=1)
                     printf("\t%d X^%d  ",poly3[i],i);
                     else if(i==1)
                     printf("\t%d X  ",poly3[i]);
                     else 
                     printf("\t%d  ",poly3[i]);
                 }
                
                else if(i==1)
                printf("+  %d X  ", poly3[i]);
        
                else if(i==0)
                printf("+  %d  ", poly3[i]);
                
                else
                printf("+  %d X^%d  ",poly3[i],i);
                
             }
             else
             printf("");
             
         }//for closing
    
}//else closing
    
    
	
/*	
	//ANOTHER METHOD OF assigning the remaining elements of d1 with zero if d2 > d1
else
    {
     
     for(i=d1+1; i<=d2 ; i++)
     {
     poly1[i]=0;
     }
     for(i=0; i<=d2; i++)
      {
          poly3[i] = poly1[i] + poly2[i];
      }
    
     
      
    printf("The sum Polynomial is:\n");
          for(i=d2;i>=0;i--)
          {
            
                  if(i==d2)
                 {
                    
                     if( i!=0 && i!=1)
                     printf("\t%d X^%d  ",poly3[i],i);
                     else if(i==1)
                     printf("\t%d X  ",poly3[i]);
                     else 
                     printf("\t%d  ",poly3[i]);
                 }
                
                else if(i==1)
                printf("+  %d X  ", poly3[i]);
        
                else if(i==0)
                printf("+  %d  ", poly3[i]);
                
                else
                printf("+  %d X^%d  ",poly3[i],i);
          
             
         }//for closing
    
}//else closing  */
    
   
   
   

    
printf("\n\n");
}
    
    
 
   
    
      
       
    
    
    
         
    
  
  
     
