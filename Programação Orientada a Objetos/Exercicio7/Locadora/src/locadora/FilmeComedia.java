package locadora;

public class FilmeComedia extends Filme{

	@Override
	public double getValorTotal(int diasAluguel) {
		// TODO Auto-generated method stub
		return super.getValorTotal(diasAluguel)+ super.getValorTotal(diasAluguel)*0.03;
	}
	
	

}
