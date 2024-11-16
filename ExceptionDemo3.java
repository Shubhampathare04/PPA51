import java.util.Scanner;
class ExceptionDemo3
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0, Ans = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first number : ");
        No1 = sobj.nextInt();
        System.out.println("Enter second number : ");
        No2 = sobj.nextInt();

        try
        {
            System.out.println("Inside try block");
            Ans = No1 / No2 ;
        }
        catch(ArthemeticException obj)
        {
            System.out.println("Inside the block");
            System
        }

    }

System.out.println("Division is : "+Ans);