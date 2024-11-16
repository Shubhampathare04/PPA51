import java.util.Scanner;

class AgeInvalidException extends Exception
{
    public AgeInvalidException(String str)
    {
        super(str);
    }
}

class ExceptionDemo6
{
    public static void main(String A[])
    {
        int Age = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your age : ");
        Age = sobj.nextInt();
        try
        {
            System.out.println("Inside try");
            if(Age < 18)
            {
                AgeInvalidException aobj = new AgeInvalidException("Your age is less then 18 ");
                throw aobj;
            }
        }   
        catch(AgeInvalidException obj) 
        {
            System.out.println("Inside catch");
            System.out.println(obj);
        }
    }
}