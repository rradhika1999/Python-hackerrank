int sum=0,i,j;
int marks_summation(int* marks, int number_of_students, char gender)
{
    switch (gender)
    {
           case 'g': for(i=1;i<number_of_students;i=i+2)
                     {
                        sum+=*(marks+i);
                     } 
                   break;
           case 'b': for(j=0;j<number_of_students;j=j+2)
                     {
                        sum+=*(marks+j);
                     }
                    break;
           default: printf("Enter a valid choice...");
                    break;    
    }
    return sum;
}
