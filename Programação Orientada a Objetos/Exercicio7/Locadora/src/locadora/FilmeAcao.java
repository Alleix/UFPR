package locadora;

public class FilmeAcao extends Filme {
	
	@Override
	public double getValorTotal(int diasAluguel) {
		// TODO Auto-generated method stub
		return super.getValorTotal(diasAluguel)+ super.getValorTotal(diasAluguel)*0.05;
	}


	}



