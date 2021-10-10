//Complete the following function.
int sum=0,i,j;
int marks_summation(int* marks, int number_of_students, char gender)
{
  //Write your code here.
  if(gender=='g')
  {
      for(i=1;i<number_of_students;i=i+2)
      {
            sum+=*(marks+i);
      }    
  }
  else if(gender=='b')
  {
      for(j=0;j<number_of_students;j=j+2)
      {
            sum+=*(marks+j);
      }
  }
  return sum;
}
