import java.io.*;

class ExcetionDemo7
{
    public static void main(String A[])
    {
        try 
        {
        BufferdReader dobj = new BufferdReader(new InputStreamReader(System.in));

        System.out.println("Enter your name :");
        String name = dobj.readLine();

        System.out.println("Enter your age :");
        int age = Integer.parseInt(bobj.readLine());

        System.out.println("Your name : "+name);
        System.out.println("Your age :"+Age);
        }
        catch(Exception obj)
        {}


    }
}