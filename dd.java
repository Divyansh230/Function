import java.util.Scanner;
class Mstadd
{
    int m,n;
    int a[][]=new int[m][n];
    
    Mstadd(int x,int y){
         m=x;
         n=y;}
    void input()
    
    {
         Scanner sc=new Scanner(System.in);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            a[i][j]=sc.nextInt();
        }
    }
    void print()
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            System.out.print(a[i][j]+" ");
            System.out.println();
        }
    }
    public static void main(String args[]){
        System.out.println("Enter Size of the Matrix");
         Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        Mstadd ob1=new Mstadd(x,x);
        Mstadd ob2=new Mstadd(x,x);
        Mstadd ob3=new Mstadd(x,x);
        System.out.println("Enter Element in First Matrix");
        ob1.input();
        System.out.println("Enter Element in 2nd Matrix");
        ob2.input();
        System.out.println("First Matrix");
        ob1.print();
        System.out.println("Second matrix:");
        ob2.print();
    }
}
