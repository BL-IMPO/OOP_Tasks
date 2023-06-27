#include <iostream>

using namespace std;

class Parallelepiped{
	protected:
		float length;
		float weidth;
		float height;
	
	public:
		
		Parallelepiped(){
			length = 1.0;
			weidth = 1.0;
			height = 1.0;
		}
		
		Parallelepiped(float l, float w){
			length = l;
			weidth = w;
			height = 1.0;
		}
		
		Parallelepiped(float l, float w, float h){
			length = l;
			weidth = w;
			height = h;
		}
		
		float Volume(void){
			return length * weidth * height;
		}
	
		void showAll(void){
			cout << "Length : " << length << endl;
			cout << "Weidth : " << weidth << endl;
			cout << "Height : " << height << endl;
		}
		
		~Parallelepiped(){
			cout << "Delete!" << endl;
		}

};

class ParallelepipedMath: public Parallelepiped{
	private:
		float mass;
		
	public: 
		ParallelepipedMath() : Parallelepiped(){
			mass = 1.0;
		}
		
		ParallelepipedMath(float l, float w) : Parallelepiped(l, w){
			mass = 1.0;
		}
		
		ParallelepipedMath(float l, float w, float h, float m) : Parallelepiped(l, w, h){
			mass = m;
		}
		
		float Density(void){
			return Volume() / mass;
		}
		
		void showAll(void){
			cout << "Length : " << Parallelepiped :: length << endl;
			cout << "Weidth : " << Parallelepiped :: weidth << endl;
			cout << "Height : " << Parallelepiped :: height << endl;
			cout << "Masss  : " << mass << endl;
		}
		
		float getMass(void){
			return mass;
		}
		
		ParallelepipedMath operator / (int n){
			mass /= n;
			
			return * this; 
		}
		
		ParallelepipedMath operator * (int n){
			mass *= n;
			
			return * this; 
		}
		
		ParallelepipedMath operator + (ParallelepipedMath obj){
			ParallelepipedMath objn(length, weidth, height, mass + getMass());
			return objn;
		}
		
		ParallelepipedMath operator - (ParallelepipedMath obj){
			ParallelepipedMath objn(length, weidth, height, mass - getMass());
			return objn;
		}
		
		~ParallelepipedMath(){
			cout << "Delete!" << endl;
		}
		
};