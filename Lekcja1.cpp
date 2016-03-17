#include <iostream>  //Dolaczamy plik, w ktorym jest definicja console out - cout

int main() //Glowna funkcja programu. Dzieki niej komputer wie, gdzie program sie zaczyna
{
	std::cout << "Uczymy sie programowac" //w srednikach zawracana funkcja jest tekstem
	                              /*aby wyswietlic tekst w jednej linii mo¿emy wykorzystac
	                              funkcje << std::endl(co oznacza end line) lub
	                              \n jesli znajduje siê miedzy cudzyslowem*/
	<< std::endl << "nowa linia w dwoch odslonach \n2+3=" << 2+3;
	return 0;  // funkcja main zawsze konczy sie return 0
	          // albo zwraca inna wartosc niz 0 w przypadku bledu
}

/* To tez jest komentarz, lecz moze
zawierac wiele linii bez dodatkowych oznaczen.
komentarze zaczynajace sie od // koncza sie zawsze w tej samej linii
*/
