import java.util.Scanner;
class Toggle
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a string:");
    char[] a = sc.next().toCharArray();
    for(int i=0; i<a.length; i++)
    {
      if(a[i]>='a' && a[i]<='z')
           a[i]-=32;
      else if(a[i]>='A' && a[i]<='Z')
           a[i]+=32;
    }
    System.out.println("In toggle case:"+ new String(a));
  }
}
