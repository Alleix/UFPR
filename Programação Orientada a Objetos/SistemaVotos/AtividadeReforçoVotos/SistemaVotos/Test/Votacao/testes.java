package Votacao;


import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;


import Votacao.Candidato;
import Votacao.Urna;
import Votacao.Voto;

class testes {

	Urna Urna1 = new Urna ();
	 
	 
	
	Candidato candidato1 = new Candidato(111,"Allex");
	Candidato candidato2 = new Candidato(121,"Albert");
	Candidato candidato3 = new Candidato(563,"Jonas");
	 
	 
	Voto voto1 = new Voto(candidato1);
	Voto voto2 = new Voto(candidato2);
	Voto voto3 = new Voto(candidato3);
	
	@BeforeEach
	void setUp () throws Exception {
		
	Urna1.adicionarPossivelCandidato(candidato2);
	Urna1.votar(voto2);
	
	Urna1.adicionarPossivelCandidato(candidato3);
	
	}
	 

	
	@Test
	void testNaoPertenceAoPleito(){
		assertFalse(Urna1.candidatoPertenceAoPleito(candidato1));
	}
	@Test
	void testVotoJaDepositado() throws CandidatoNaoPertencenteAoPleitoException, VotoJaDepositadoException {
		assertFalse(Urna1.votar(voto2));
	}
	@Test
	void testVotar() throws CandidatoNaoPertencenteAoPleitoException, VotoJaDepositadoException{
		assertTrue(Urna1.votar(voto3));

	}	
	@Test
	void testCandidatoPertencePleito(){
		assertTrue(Urna1.candidatoPertenceAoPleito(candidato3));

	}	


}
