;Exercicio 3 Lista 3
;Faça um programa que preencha os endereços de memória de 6016 a 6F16 com
;valores a partir de 05 e com incremento de 2. Após inicializar as posições de memória
;realize a operação de ou-exclusivo entre os conteúdos dos endereços mencionados
;acima e armazene o resultado final no endereço 7016. Para a construção do laço
;utilize, como referência, o programa do exercício 3 da folha 1.	

	MOV	AL,05	;INICIO AL COM O VALOR INICIAL
	MOV	[60],AL	;SALVO O VALOR NO END. 60 DA MEMÓRIA
	MOV	DL,61	;DL TEM O VALOR INICIAL

SOMA:	ADD	AL,02	;SOMO AL + 2
	MOV	[DL],AL	;ARMAZENO NO ENDEREÇO INDICADO EM DL
	INC	DL	;INCREMENTO DL PARA APONTAR PARA O PRÓXIMO
	CMP	DL,70	;SE DL FOR IGUAL A 70, Z=1 E ENCERRRA O LAÇO
	JNZ	SOMA	;SE DL FOR MENOR QUE 70, Z=0 E PASSA PARA A PROXIMA ITERAÇÃO

	MOV	BL, 61	;INICIO O BL COM O END INICIAL
	MOV	AL,[60]	;RETIRO O VALOR QUE ESTA NO END 60
ACUMUL:	MOV 	CL,[BL]	; LEIO O PROXIMO VALOR O END, INDICADO EM BL
	XOR	AL,CL	;FAÇO O XOR E ACUMULO EM AL
	INC	BL	;INCREMENTO O BL PARA COMPARAR
	CMP	BL,70	;SE BL FOR IGUAL A 70, Z=1 E ENCERRRA O LAÇO
	JNZ	ACUMUL	;SE BL FOR MENOR QUE 70, Z=0 E PASSA PARA A PROXIMA ITERAÇÃO
	MOV	[70],AL	;ARMAZENO O RESULTADO ACUMULADO EM AL NO END 70
	END