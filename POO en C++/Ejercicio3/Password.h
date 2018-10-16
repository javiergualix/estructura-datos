#ifndef PASSWORD_H
#define PASSWORD_H

class Password
{
private:
	char pass[8];
public:
	Password();
	Password(int n);
	
	~Password();
	
	void ver_Password();
	bool es_Password();
	bool es_Fuerte();
	void cifrar_Password();
	bool es_Correcta();

};

#endif // PASSWORD_H
