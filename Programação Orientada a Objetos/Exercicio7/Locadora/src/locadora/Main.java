package locadora;

public class Main {

	
	public static void main (String []args) {	
		FilmeAcao fa1 = new FilmeAcao();
		FilmeComedia fc1 = new FilmeComedia();
		FilmeRomance fr1 = new FilmeRomance();
		
		
		System.out.println(fa1.getValorTotal(7));
		System.out.println(fc1.getValorTotal(7));
		System.out.println(fr1.getValorTotal(7));

	
	
	
	}
}
