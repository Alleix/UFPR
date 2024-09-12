package Votacao;

import java.nio.charset.Charset;
import java.util.Random;

public class Voto {
	 private Candidato candidato;
	 private String hash;
	 
	 
	 public Voto(Candidato candidato) { 
		super();
		this.candidato = candidato;
		generateHash();
	}

	public Candidato getCandidato() {
		return candidato;
	}

	public void setCandidato(Candidato candidato) {
		this.candidato = candidato;
	}

	public String getHash() {
		return hash;
	}

	public void setHash(String hash) {
		this.hash = hash;
	}

	private String generateHash() {
		    byte[] array = new byte[10]; 
		    new Random().nextBytes(array);
		    String generatedString = new String(array, Charset.forName("UTF-8"));
		    return generatedString;
		}


}

 