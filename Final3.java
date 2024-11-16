class Demo
{
    public int No1;
    final public int No2 = 21;

    public Demo(int A)
    {
        No1 = A;
        No2 = B;
    }
}

class Final3
{
    public static void main(String Arg[])
    {
        Demo dobj = new Demo(11);

        System.out.println("Value of No1 : "+dobj.No1);
        System.out.println("Value of No2 : "+dobj.No2);

        dobj.No1++;
       // dobj.No2++;  //dobj.No2 = dobj.No2 + 1;

    }
}