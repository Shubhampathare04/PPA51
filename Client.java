import java.net.*;
import java.io.*;

class Client
{
    public static void main(String Arg[])throws Exception
    {
        System.out.println("Class Appilication Is Running.......");

        Socket sobj = new Socket("LocalHost",2100);  //Request Server

        System.out.println("Connection establish with the Client....");



        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 =new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 =new BufferedReader(new InputStreamReader(System.in));
        String str1 , str2;
        System.out.println("Marvellous chat Massanger application started....");
        while(!(str2 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            str2 = br2.readLine();
            System.out.println("Enter the message for server :");
            System.out.println("server says :"+str2);
        }
        System.out.println("Thank You for using the Marvellous chat Application..");
    }

}