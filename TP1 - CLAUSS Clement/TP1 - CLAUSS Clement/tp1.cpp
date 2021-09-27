// I.1.3

int *p1;
int *p2;
int* ref1;
int* ref2;

// I.1.4

int tableau[10];

//  I.1.1

int addition(int a, int b)
{
	return a + b;
}

// I.1.2

void inversion(int a, int b)
{
	int c;


	c = a;
	a = b;
	b = c;
	
}

// I.1.3

void addition2(int a, int b, int c)
{
	
	p1 = &a;
	p2 = &b;
	c = *p1 + *p2;

	*ref1 = a;
	*ref2 = b;
	c = *ref1 + *ref2;

}

// I.1.4

/*int remplissage()
{
	int i;
	
	for (i = 0; i++; i < 10)
	{
		tableau[i] = (0,100);
	}
}*/