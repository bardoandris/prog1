typedef struct zoldseg{
	float so, szen, feh, ar;
} zoldseg;

zoldseg beker();
float hatarertek(char *fajta);
void initzoldseg(zoldseg *z1, zoldseg *z2);
void inithatar(float *sohat,float *fehhat,float *szenhat, int *menny);