package locadora;

public class Filme {
	private String titulo;
	private double precoDiario = 5;
	protected int ano;
	
	
	public double getValorTotal(int diasAluguel) {
		return (diasAluguel*(precoDiario));
	}
	
	public String getTitulo() {
		return titulo;
	}
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	
	
	
}
