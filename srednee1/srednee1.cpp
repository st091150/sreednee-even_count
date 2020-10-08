 #include <iostream>
 #include <stdarg.h> 

float srednee(int x ...) {
	float s = 0;
	int k = 0;
	int* p = &x;
	while (*p != -1) {
		s += *p;
		++p;
		++k;
	}
	s /= k;
	return s;
}

int even_count(int N,int x, ...) {
	int* p = &x;
	int k = 0;
	while (--N) {
		if (*p % 2 == 0) {
			k += 1;
		}
		++p;
	}
	return k;
}



int main()
{
	int a = 3, b = 20,d = 100,y=-1;
	std::cout << "srednee(4, 5, 1, 3, 0, 6, 3, -1) = "<<srednee(4, 5, 1, 3, 0, 6, 3, -1) << std::endl;
	std::cout << "srednee(2, 4, -1) = " << srednee(2, 4, -1) << std::endl;
	std::cout << "srednee(a, b, y,d) = "<< srednee(a, b, y, d) << std::endl;

	std::cout << "even_count(7,1,2,3,4,3,2,1) = "<<even_count(7,1,2,3,4,3,2,1) << std::endl;;
	std::cout << "even_count(4, 2, 128, 13, 14) = "<< even_count(4,2,128,13,14) << std::endl;;
	std::cout << "even_count(5,1,3,5,7,9) = "<<even_count(5,1,3,5,7,9) << std::endl;;

 }

 