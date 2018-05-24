package ContaCliente;

public class ContaBancaria implements Menu {
	private float saldo;
	private String nome;
	private String number;
	private String tipoConta;
	private boolean status;

// Interface
	public public ContaBancaria() {

		public void depositar (float value) {
			this.setSaldo(this.getSaldo() + value);
		}
		
		public void sacar (float value) {
			if (value > this.getSaldo()) {
				System.out.println("Saldo Insuficiente");
			} else {
				this.setSaldo(this.getSaldo() - value);
				System.out.println("Saldo Realizado com Sucesso");
			}
		}
		
		public float verifSaldo () {
			return this.getSaldo();
		}
	}
	
// Getter and Setter
	public float getSaldo() {
		return saldo;
	}
	public void setSaldo(float saldo) {
		this.saldo = saldo;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getNumber() {
		return number;
	}
	public void setNumber(String number) {
		this.number = number;
	}
	public String getTipoConta() {
		return tipoConta;
	}
	public void setTipoConta(String tipoConta) {
		this.tipoConta = tipoConta;
	}
	public boolean isStatus() {
		return status;
	}
	public void setStatus(boolean status) {
		this.status = status;
	}
}
