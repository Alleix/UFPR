package locadora;

public class FilmeRomance extends Filme {

	@Override
	public double getValorTotal(int diasAluguel) {
		// TODO Auto-generated method stub
		return super.getValorTotal(diasAluguel)+ super.getValorTotal(diasAluguel)*0.04;
	}

}
