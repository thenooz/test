package pack1;

//import java.util.Scanner;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.io.*;

public class second {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		/*int v=10;
		System.out.println(v);
		Scanner k=new Scanner(System.in);
		System.out.println("Enter Something: ");
		//v=k.nextInt();
		//System.out.println(v);
		
		//time to enter string
		String str;int a;
		str=k.nextLine();
		System.out.println(str);
		a=k.nextInt();
		System.out.println(a);
		if(true)
		{
			System.out.println("This is t");
		}*/
		
		//instance of second class
		/*first m=new first();
		m.a=20;
		System.out.println("This is a of class first"+m.a+". is\'nt it?");
		System.out.println(m.b);
		
		if(a==10); else if(a==11); else if(a==20);*/
		
		/*LinkedList<Integer> arr1=new LinkedList<Integer>();
		arr1.add(1);
		arr1.add(20);
		arr1.add(50);
		arr1.add(40);
		System.out.println(arr1.get(1));
		ListIterator<Integer> li=arr1.listIterator();
		if(li.hasNext())System.out.println(li.next());
		System.out.println(li.next());
		System.out.println(li.previous());
		System.out.println(li.next());
		
		System.out.println(func());
		
		try{
			File f=new File("C:/users/hpp/desktop/Coding shortcuts/programs/try.txt");
			if(!f.exists()){
				f.createNewFile();
			}
			
			PrintWriter pw=new PrintWriter(f);
			pw.println("This is the freaking content");
			pw.close();
			System.out.println("Done");
		}
		catch(IOException e){
			e.printStackTrace();
		}
		*/
		BufferedReader br=null;
		try{
			br=new BufferedReader(new FileReader("C:/users/hpp/desktop/Coding shortcuts/programs/try.txt"));
			String ln;
			while((ln=br.readLine())!=null){
			System.out.println("\n"+ln);	
			}
			br.close();
			System.out.println("\n\nDone");
		}
		catch(IOException e){
			e.printStackTrace();
		}
		
		Date dt=new Date();
		System.out.println(dt.getTime());
		System.out.println(dt.toString());
		System.out.println(dt.getMonth());
		System.out.println(dt.getDate());
		System.out.println(1900+dt.getYear());
		
		SimpleDateFormat sdf=new SimpleDateFormat("E dd/MM/yyyy");
		
		System.out.println(sdf.format(dt));
		//k.close();
	}

/*public static int func()
{
	int b=100;
	try{
		System.out.println("Inside try block");
		int t=100/0;
		return b;
	}
	catch(ArithmeticException e){System.out.println(e); return b;}
	finally{ System.out.println("Finally"); b=2000;}
	//System.out.println("Exception is handled");
	}*/
}

