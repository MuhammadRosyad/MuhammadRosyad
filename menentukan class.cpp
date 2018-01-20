using namespace std;

class Negara{
	public:
		void luas(string luas);
		string kekuatan, ekonomi, pertahanan;
};

int main (){
	Negara Amerika, China, Rusia;
	
	Amerika.kekuatan = "Teknologi Modern";
	China.kekuatan = "Kemampuan Manusianya";
	Rusia.kekuatan = "Teknologi Nuklir";

	cout << ( Amerika.kekuatan);
	Amerika.luas("luas sekali");
	
	China.luas("luas padat");
}

