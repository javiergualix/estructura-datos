class CComplejo
{
	private:
		double real, imag;
	public:
		CComplejo(); //constructor
		CComplejo(double r, double i); //constructor
		
		~CComplejo(); //destructor
		
		void asigna_real (double r);
		void asigna_imag (double i);
		double parte_real();
		double parte_imag();
		void suma(const CComplejo& a, const CComplejo& b);

};
