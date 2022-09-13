# incluir  < iostream >
# incluir  < cmath >
utilizando el espacio de  nombres  estándar ;

void  areaDelCirculo ( void );
void  areaDelCuadrado ( void );
void  areaDelRectangulo ( void );
void  areaDelTriangulo ( void );
void  mostrarArea ( área flotante );

constante  flotante Pi = 3.14154 ;

int  principal (){
	char opción;
	cout << " Selecciona el area que deseas calcular " <<endl;
	cout << " \n a) Circulo \n b) Cuadrado \n c) Rectangulo \n d) Triangulo \n " ; cin>>opcion;
	cambiar (opcion){
		case  ' a ' : areaDelCirculo (); romper ;
		case  ' b ' : areaDelCuadrado (); romper ;
		case  ' c ' : areaDelRectangulo (); romper ;
		case  ' d ' : areaDelTriangulo (); romper ;
	}
	devolver  0 ;
}

void  mostrarArea ( float area){ cout<< " El area es: " <<area<<endl; volver ;}

void  areaDelCirculo ( void ){
	radio flotante , area = 0 ;
	cout<< " Ingresa el radio: " ; cine>>radio;
	area = pow (radio, 2 ) * Pi;
	mostrarArea (área);
	volver ;
}

void  areaDelCuadrado ( void ){
	lado flotante , area = 0 ;
	cout<< " Ingrese a un lado: " ; cin>>lado;
	área = pow (lado, 2 );
	mostrarArea (área);
	volver ;
}

void  areaDelRectangulo ( void ){
	float base, altura, area = 0 ;
	cout<< " Ingresa la base: " ; cin>>base;
	cout<< " Ingresa la altura: " ; cin>>altura;
	área = base * altura;
	mostrarArea (área);
	volver ;
}

void  areaDelTriangulo ( void ){
	float base, altura, area = 0 ;
	cout<< " Ingresa la base: " ; cin>>base;
	cout<< " Ingresa la altura: " ; cin>>altura;
	área = (base * altura) / 2 ;
	mostrarArea (área);
	volver ;
}
