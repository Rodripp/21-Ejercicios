# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;
int  principal ()
{
	cout << " Escriba una nota:: " ;
	char nota;
	cin>> nota;
	
	cambiar (nota){
		caso  ' A ' : caso  ' a ' :
			cout<< " Excelente, aprobado con honores " ;
		romper ;
		caso  ' B ' : caso  ' b ' :
			cout<< " Aprobado de forma sobresaliente " ;
		romper ;
		caso  ' C ' : caso  ' c ' :
			cout<< " Aprobado con buen desempenio " <<endl<< " o " ;
		romper ;
		caso  ' D ' : caso  ' d ' :
			cout<< " Aprobado de manera regular " ;
		romper ;
		caso  ' E ' : caso  ' e ' :
			cout<< " Aprobado, pero se sugiere mejorar " ;
		romper ;
		caso  ' F ' : caso  ' f ' :
			cout<< " Reprobado, con pobre rendimiento " ;
		romper ;
		predeterminado :
			cout<< " ** ERROR, Nota ingresada es incorrecta ** " ;
	}
}
