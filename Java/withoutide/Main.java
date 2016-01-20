package withoutide;

import static java.lang.System.out;

public class Main
{
	private final Parent p=new Parent();
	private final Child c=new Child();
	
	public static void main(final String[] arguments)
	{
		final Main instance=new Main();
		out.println(instance.p.toString());
		out.println(instance.c.toString());
	}
}