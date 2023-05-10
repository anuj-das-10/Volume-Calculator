#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159265358979323846

double calcConeVolume(double radius, double height) {
	double volume = (PI * pow(radius,2) * height)/3;
	return volume;
}
double calcCylinderVolume(double radius, double height) {
	double volume = (PI * pow(radius,2) * height);
	return volume;
}
double calcCubeVolume(double edge) {
	double volume = pow(edge, 3); 
	return volume;
}
double calcCuboidVolume(double length, double width, double height) {
	double volume = length * width * height; 
	return volume;	
}
double calcSphereVolume(double radius) {
	double volume = (4 * PI * pow(radius,3))/3;
	return volume;
}


void main() {
	int choice;
	
		
		do{

		printf("<--- VOLUME CALCULATOR --->");
		printf("\n1. Cone");
		printf("\n2. Cylinder");
		printf("\n3. Cube");
		printf("\n4. Cuboid");
		printf("\n5. Sphere");
		printf("\n6. Exit");
		printf("\n\nEnter your choice:  ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1: {
					system("cls");
					double r, h;
					printf("<--- CALCULATE VOLUME OF CONE --->");
					printf("\n\nEnter Radius of right cicular cone (r):  ");
					scanf("%lf", &r);
					printf("Enter Height of right cicular cone (h):  ");
					scanf("%lf", &h);

					printf("\n\nVOLUME OF CONE:  %.2f unit^3\n\n", calcConeVolume(r,h));
					break;
			}
			case 2: {
					system("cls");
					double r, h;
					printf("<--- CALCULATE VOLUME OF CYLINDER --->");
					printf("\n\nEnter Radius of cylinder (r):  ");
					scanf("%lf", &r);
					printf("Enter Height of cylinder (h):  ");
					scanf("%lf", &h);

					printf("\n\nVOLUME OF CYLINDER:  %.2f unit^3\n\n", calcCylinderVolume(r,h));
					break;
			}
			case 3: {
					system("cls");
					double edge;
					printf("<--- CALCULATE VOLUME OF CUBE --->");
					printf("\n\nEnter edge of cube (a):  ");
					scanf("%lf", &edge);

					printf("\n\nVOLUME OF CUBE:  %.2f unit^3\n\n", calcCubeVolume(edge));
					break;
		
			}
			case 4: {
					system("cls");
					double l, w, h;
					printf("<--- CALCULATE VOLUME OF CUBOID --->");
					printf("\n\nEnter Length of cuboid (l):  ");
					scanf("%lf", &l);
					printf("Enter Width of cuboid (w):  ");
					scanf("%lf", &w);
					printf("Enter Height of cuboid (h):  ");
					scanf("%lf", &h);

					printf("\n\nVOLUME OF CUBOID:  %.2f unit^3\n\n", calcCuboidVolume(l, w, h));
					break;
			}
			case 5: {
					system("cls");
					double r;
					printf("<--- CALCULATE VOLUME OF SPHERE --->");
					printf("\n\nEnter Radius of sphere (r):  ");
					scanf("%lf", &r);
					printf("\n\nVOLUME OF SPHERE:  %.2f unit^3\n\n",calcSphereVolume(r));
					break;
			}
			case 6: printf("Terminating . . . . .");
					exit(0);		
		
		default: {
				system("cls");
				printf("Invalid Choice!\n\n");
				break;
		}
			
		}
			
		}while(choice != 6);
		
		
	
}
