package banco;

public class contaCorrenteComum extends Conta {

	@Override
	public void Sacar(float quantia) {
		// TODO Auto-generated method stub
		super.Sacar(quantia);
		saldo -= (quantia*0.015);
	}

	
	
	
}
