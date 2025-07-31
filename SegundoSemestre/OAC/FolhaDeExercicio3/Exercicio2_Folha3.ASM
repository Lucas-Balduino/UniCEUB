LER:	IN	00
	CMP	AL, 61 ;Se o Valor de AL for menor que 61, 
	JS	LER
	CMP	AL, 7B
	JNS	LER
	END