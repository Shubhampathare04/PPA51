class Encapsulation 
{
    public static void main(String Arr[])
    {
        System.out.println("Inside main Function");
        Arithematic aobj1 = new Arithematic();
        Arithematic aobj1 = new Arithematic(11,10);

    }
}
class Arithematic
{
    public int No1;
    public int No2;

    public Arithematic()
    {
        System.out.println("Inside defalt constructor");
        this.No1 = 0;
        this.No2 = 0;
    }
    public Arithematic(int A,int B)
    {
        System.out.println("Inside parametrised constructor");
        this.No1 = A;
        this.No2 = B;
    }
    public Addition()
    {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }
    public Substraction()
    {
        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    }
}
