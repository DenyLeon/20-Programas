
//Tarea de Perímetro y area de figuras.
#include <iostream>
using namespace std;


int main(){
	int a = 0, b = 0, c = 0, h = 0, B = 0, D = 0, d = 0, opcion, area, perimetro, r = 0;
	cout <<"Que figura desea calcular, Triangulo [1], Paralelogramo [2], Rectangulo [3], Cuadrado [4], Rombo [5], Cometa [6], Trapecio [7] o Circulo [8]"<< endl;
	cin >> opcion;
	
	
	if(opcion==4){// Perímetro y area de Cuadrado
	
    cout << "Ingrese la medida de un lado del cuadrado" << endl;
    cin >> a;
    area=4*a;
    perimetro = a^2;

    cout << "El area de su cuadrado es: " << area << endl;
	cout << "El perimetro de su cuadrado es: " << perimetro << endl;
}
	else if (opcion==1){// Perímetro y area de Triángulo
	
	cout << "Ingrese la medida de un lado del Triangulo" << endl;
    cin >> a;
    cout << "Ingrese la 2.da medida de un lado del Triangulo" << endl;
    cin >> c;
    cout << "Ingrese la base del Triangulo" << endl;
    cin >> b;
    cout << "Ingrese la altura del Triangulo" << endl;
    cin >> h;
    area=b*h/2;
    perimetro = a+b+c;

    cout << "El area de su triangulo es: " << area << endl;
	cout << "El perimetro de su triangulo es: " << perimetro << endl;
}
	else if (opcion==2){// Perímetro y area de Paralelogramo
	
	cout << "Ingrese la medida de un lado del Paralelogramo" << endl;
    cin >> a;
    cout << "Ingrese la base del Paralelogramo" << endl;
    cin >> b;
    cout << "Ingrese la altura del Paralelogramo" << endl;
    cin >> h;
    area=b*h;
    perimetro = 2*(a+b);

    cout << "El area de su Paralelogramo es: " << area << endl;
	cout << "El perimetro de su Paralelogramo es: " << perimetro << endl;
}
	else if (opcion==3){// Perímetro y area de Rectángulo
	
	cout << "Ingrese la medida de un lado del Rectangulo" << endl;
    cin >> a;
    cout << "Ingrese la base del Rectangulo" << endl;
    cin >> b;
    area=b*a;
    perimetro = 2*(b+a);

    cout << "El area de su Rectangulo es: " << area << endl;
	cout << "El perimetro de su Rectangulo es: " << perimetro << endl;
}
	else if (opcion==5){// Perímetro y area de Rombo
	
	cout << "Ingrese la medida de un lado del Rombo" << endl;
    cin >> a;
    cout << "Ingrese la diagonal mayor del Rombo" << endl;
    cin >> D;
    cout << "Ingrese la diagonal menor del Rombo" << endl;
    cin >> d;
    area=D*d / 2;
    perimetro = 4*a;

    cout << "El area de su Rombo es: " << area << endl;
	cout << "El perimetro de su Rombo es: " << perimetro << endl;
}
	else if (opcion==6){// Perímetro y area de Cometa
	
	cout << "Ingrese la medida de un lado del Cometa" << endl;
    cin >> a;
    cout << "Ingrese la base del cometa" << endl;
    cin >> b;
    cout << "Ingrese la diagonal mayor del Cometa" << endl;
    cin >> D;
    cout << "Ingrese la diagonal menor del Cometa" << endl;
    cin >> d;
    area=D*d / 2;
    perimetro = 2*(b+a);

    cout << "El area de su Cometa es: " << area << endl;
	cout << "El perimetro de su Cometa es: " << perimetro << endl;
}
	else if (opcion==7){// Perímetro y area de Trapecio
	
	cout << "Ingrese la medida de un lado del Trapecio" << endl;
    cin >> a;
    cout << "Ingrese la 2.da medida de un lado del Trapecio" << endl;
    cin >> c;
    cout << "Ingrese la base del Trapecio" << endl;
    cin >> b;
    cout << "Ingrese la base Mayor del Trapecio" << endl;
    cin >> B;
    cout << "Ingrese la altura del Trapecio" << endl;
    cin >> h;
    area=(B+b*h / 2);
    perimetro = B+b+a+c;

    cout << "El area de su Trapecio es: " << area << endl;
	cout << "El perimetro de su Trapecio es: " << perimetro << endl;
}
	else if (opcion==7){// Perímetro y area de Circulo
	
	cout << "Ingrese el radio del Circulo" << endl;
    cin >> r;
    area=3.1416 * (r^2);
    perimetro = 2 * 3.1416 * r;

    cout << "El area de su Circulo es: " << area << endl;
	cout << "El perimetro de su Circulo es: " << perimetro << endl;
}
system("pause");

return 0;

}
