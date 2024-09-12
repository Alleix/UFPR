package banco;

public abstract class Conta {
	
	public float saldo;

	public void Depositar(float quantia) {
		saldo += quantia;
	}
	public void Sacar(float quantia) {
		saldo -= quantia;
	}
	
	public float saldoAtual(){
		System.out.println(saldo);
		return saldo;
	}
	public float getSaldo() {
		return saldo;
	}
	
}
