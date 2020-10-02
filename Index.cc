#include<iostream>

using namespace std;

/*         foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47*/


int main()
{
	//----------------Introducción--------------------
	cout << "\033[1;33m1. Introducción\033[0m\n";
	cout << "\033[1;33m	1.1 Motivación\033[0m\n";
	cout << "\033[1;33m	1.2 Planteamiento del problema\033[0m\n";
	cout << "\033[1;33m	1.3 Hipótesis\033[0m\n";
	cout << "\033[1;33m	1.4 Objetivos\033[0m\n";
	cout << "\033[1;37m	1.5 Descripción del documento\033[0m\n";
	//----------------Antecedentes---------------------
	cout << "\033[1;33m2. Antecedentes\033[0m\n";
	cout << "\033[1;33m	2.1 Robots bípedos\033[0m\n";
	cout << "\033[1;33m	2.2 Aplicaciones en el juego de Futbol Soccer\033[0m\n";
	cout << "\033[1;33m	2.3 Usos de la visión computacional\033[0m\n";
	cout << "\033[1;33m	2.4 El Filtro de Kalman\033[0m\n";
	cout << "\033[1;33m	2.5 Trabajo relacionado\033[0m\n";
	//-----------Segmentación de imágenes-------------
	cout << "\033[1;33m3. Segmentación de imágenes con base en color\033[0m\n";
	cout << "\033[1;33m	3.1 El modelo de cámara Pinhole\033[0m\n";
	cout << "\033[1;33m	3.2 Corrección de la distorsión\033[0m\n";
	cout << "\033[1;33m	3.3 Los espacios de color RGB y HSV\033[0m\n";
	cout << "\033[1;33m	3.4 Operadores morfológicos\033[0m\n";
	//-------Estimación de posición y velocidad-------
	cout << "\033[1;33m4. Estimación de posición y velocidad\033[0m\n";
	cout << "\033[1;33m	4.1 Cálculo de la posición del objeto de interés\033[0m\n";
	cout << "\033[1;33m	4.2 Estimación de estados mediante el Filtro de Kalman\033[0m\n";
	cout << "\033[1;33m	4.3 Obtención de los parámetros\033[0m\n";
	//----------------Implementación------------------
	cout << "\033[1;33m5. Implementación\033[0m\n";
	cout << "\033[1;33m	5.1 El robot bípedo Nimbro OP\033[0m\n";
	cout << "\033[1;33m	5.2 Las bibliotecas OpenCV\033[0m\n";
	cout << "\033[1;33m	5.3 La plataforma ROS\033[0m\n";
	cout << "\033[1;33m	5.4 Integración de los diferentes programas\033[0m\n";
	//-------------------Resultados--------------------
	cout << "\033[1;33m6. Resultados\033[0m\n";
	cout << "\033[1;33m	6.1 Descripción del experimento\033[0m\n";
	cout << "\033[1;33m	6.2 Parámetros del experimento\033[0m\n";
    cout << "\033[1;33m        6.3 Pruebas de estimación de posición y velocidad\033[0m\n";
	//-------------------Discusión---------------------
	cout << "\033[1;33m7. Discusión\033[0m\n";
	cout << "\033[1;33m	7.1 Conclusiones\033[0m\n";
	cout << "\033[1;33m	7.2 Trabajo futuro\033[0m\n";

//https://submission.robocuphumanoid.org/uploads//Ichiro_Teen_Size-tdp-5c4f57f4522a3.pdf
//https://humanoid.robocup.org/qualification/2017/b3b640d7c0ccb8808547a87bbb88b0e6b2247b18/T_FLOW_Humanoid_TeenSize_regularanddrop_in_2017_TDP.pdf
//https://humanoid.robocup.org/qualification/2017/cb4c8db9feb11f1c61fb7b7d5d4a7e1764058451/NimbRo_TeenSize_Humanoid_TeenSize_regularanddrop_in_2017_TDP.pdf
//https://humanoid.robocup.org/qualification/2017/53f4ef65b44546bcb4711eb446f0caa402d7da16/ITAndroids_Humanoid_KidSize_regularanddrop_in_2017_TDP.pdf 
	return 0;
}
