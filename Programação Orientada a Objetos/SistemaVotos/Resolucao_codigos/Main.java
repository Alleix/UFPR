package Votacao;



public class Main {

	public static void main(String[] args) throws CandidatoNuloException, CandidatoNaoPertencenteAoPleitoException, VotoJaDepositadoException {
		// TODO Auto-generated method stub
		Urna u1 = new Urna();
		Candidato a1 = new Candidato(222,"Alle");
		Candidato a2 = new Candidato(123,"Bill");
		Voto voto1 = new Voto(a1);
		Voto voto2 = new Voto(a2);
		Voto voto3 = new Voto(a2);
		
		
		
		u1.adicionarPossivelCandidato(a1);
		u1.adicionarPossivelCandidato(a2);
		u1.votar(voto2);
		u1.votar(voto3);

		u1.imprimirBoletimUrna();
		
	}

}

