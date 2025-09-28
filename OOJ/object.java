package Reference.OOJ;
import java.util.Scanner;


class area
{
    Scanner sc=new Scanner(System.in);
    String m;
    void circle(String me)
    {
        m=me;
        System.out.println("Enter radius of the circle:");
        double r=sc.nextDouble();
        double a=3.18*r*r;
        System.out.println("Area of circle: "+a+m);
    }
    void rectangle(String me)
    {   m=me;
        System.out.println("Enter length of the rectangle:");
        double l=sc.nextDouble();
        System.out.println("Enter width of the rectangle:");
        double w=sc.nextDouble();
        double a=l*w;
        System.out.println("Area of rectangle: "+a+m);
    }
}
public class object
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Area of 1:Circle 2:Reactangle :");
        int option=sc.nextInt();
        area obj1=new area();
        if(option==1)
        {
            obj1.circle("CIRCLE");
        }
        else if(option==2)
        {
            obj1.rectangle("RECTANGLE");
        }
        else
        {
            System.out.println("Wrong option");
        }

    }
}
