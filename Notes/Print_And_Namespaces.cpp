#include <iostream> // <- Wiesz, nic do wyjaśniania

namespace std {
	void namespaceoutprez() {
		//	PRZECZYTAJ PO MAIN()
		
		// Jak nie chcesz std:: to daj namespace (tu std i inne jak masz inne) { tu funkcja} ale funkcje będziesz musiał wywołać z std:: czyli ta jest std::namespaceoutprez();
	
		cout << "Nie ma std:: !";
	}
}

int main() {
	// W C++ są strumienie że masz jakby strumień i do niego możesz wlać coś
	// I jak z std::cout << "message"; to tu jest tak naprawde do strumienia outputu terminala wlewana wiadomość

	// std:: to namespace(Na samym dole wytłumaczone)
	// cout to stream outputu terminala
	// << to że przekazujasz to temu na lewo(tu outpoutowi terminala)
	// "Hello C++" dane w stringu
	// ; wiesz
	std::cout << "Hello C++!\n";

	std::namespaceoutprez();

	return 0;
}

// Namespace to takie te co jak masz funkcję sum(); to w różnych namespaceach możesz mieć taką samą nazwę, czyli może być sum(); w namespace std i sum(); w namespace niestd. czyli namespace to dosłownie przestrzeń nazw.
