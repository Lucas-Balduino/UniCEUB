;Exercicio 5
;Inicie o registrador DL com o valor 1610, após isso execute a instrução SHR DL,
;qual o resultado? Execute mais uma vez com o valor atual e observe o resultado. O
;que ocorreu, que operação aritmética essa instrução representou? Repita a questão
;utilizando a instrução SHL que operação aritmética essa instrução representou?

	MOV	DL, 10
	SHR	DL	;DIVIDE O NUMERO POR 2
	SHR	DL

	MOV	DL, 10
	SHL	DL	;MULTIPLICA O NUMERO POR 2
	SHL	DL

	MOV	DL, 10
	ROL	DL	;MULTIPLICA O NUMERO POR 2
	ROL	DL

	MOV	DL, 10
	ROR	DL	;DIVIDE O NUMERO POR 2
	ROR	DL

	END