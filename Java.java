import java.util.Scanner;
class TimSoNguyenTo
{
    public static void main(String args[])
    {
        int temp;
        boolean isPrime=true;
        Scanner scan= new Scanner(System.in);
        System.out.println("Nhap so can kiem tra:");
        int num=scan.nextInt();
        scan.close();
        for(int i=2;i<=num/2;i++)
        {
            temp=num%i;
            if(temp==0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime)
            System.out.println(num + " La so nguyen to");
        else
            System.out.println(num + " Ko phai la so nguyen to");
    }
}
