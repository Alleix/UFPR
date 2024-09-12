package Votacao;

public class VotoJaDepositadoException extends Exception {
	
	public VotoJaDepositadoException () {
		super (" O voto só poderá ser depositado apenas uma vez ");
		
		 }

}
