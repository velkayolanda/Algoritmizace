class Kvadr {
private:
    int delka;
    int sirka;
    int vyska;

public:
    
    Kvadr(int d, int s, int v) {
        delka = d;
        sirka = s;
        vyska = v;
    }

    int objem() {
        return delka * sirka * vyska;
    }

    int povrch() {
        return 2 * (delka * sirka + delka * vyska + sirka * vyska);
    }
};

int main() {
	class Kvadr k(4, 3, 5);
	int objem, povrch;
	objem = k.objem();
	cout << "Objem kvadru je:\t" << objem << endl;
	povrch = k.povrch();
	cout << "Povrch kvadru je:\t" << povrch << endl;
	return 0;
}
