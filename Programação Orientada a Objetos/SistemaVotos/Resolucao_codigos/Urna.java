package Votacao;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Urna {
	private Set<Candidato> possiveisCandidato = new HashSet<Candidato>();
	private List<Voto> votos = new ArrayList<>();
	
	
	
	public boolean votar(Voto voto) throws CandidatoNaoPertencenteAoPleitoException, VotoJaDepositadoException {
		
		if (votos.contains(voto.getHash())){
			
			throw new VotoJaDepositadoException();
			
		} else {
		
			if (possiveisCandidato.contains(voto.getCandidato())) {
				
				return votos.add(voto);
				
			}else {
				throw new CandidatoNaoPertencenteAoPleitoException();
			
			}
		}
	}	
	
	
	public void adicionarPossivelCandidato(Candidato candidato) throws CandidatoNuloException {
		if (candidato == null) {
			
			throw new CandidatoNuloException();
		} else {
		possiveisCandidato.add(candidato);
		
	}
	}
	
	
	public boolean candidatoPertenceAoPleito(Candidato candidato) {
		
		if (possiveisCandidato.contains(candidato)) {
			return true;
		} else {
			return false;
		}
	}
	
	public void imprimirZerezima() {
		int contador = 0;
		for (Candidato candidatos:possiveisCandidato) {
			System.out.println("Candidato: "+ candidatos.getNome()+"\n");
		}
		for (Voto votos:votos) {
			contador++;
		}
		System.out.println("Total de votos: "+ contador);
		
	}
	
	public void imprimirBoletimUrna() {
		int nVotos = 0;
		for (Candidato candidatos:possiveisCandidato) {
			for (Voto votos:votos) {
				if (votos.getCandidato().equals(candidatos)) {
					nVotos ++;
				}
				
				
			}
			System.out.println(candidatos.getNome()+": "+nVotos+"\n");
		}
		
		
	}
	
}
