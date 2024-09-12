package banco;

public class Main {


	
	
	public static void main (String []args) {
		contaCorrenteComum ccc1 = new contaCorrenteComum();
		ContaCorrenteEspecial cce1 = new ContaCorrenteEspecial();
		
		ccc1.Depositar(100.00f);
		System.out.println(ccc1.getSaldo());
		ccc1.Sacar(50.00f);
		System.out.println(ccc1.getSaldo());
		ccc1.saldoAtual();
		System.out.println(ccc1.getSaldo());
		
		cce1.Depositar(100.00f);
		System.out.println(cce1.getSaldo());
		cce1.Sacar(50.00f);
		System.out.println(cce1.getSaldo());
		cce1.saldoAtual();
		System.out.println(cce1.getSaldo());
		
	}
	
	
}
