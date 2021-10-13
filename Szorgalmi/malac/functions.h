typedef struct zoldseg{
	float so, szen, feh, ar, menny;
} zoldseg;

typedef struct igeny{
	float szen, feh, so; int menny;
}igeny;

zoldseg beker();
float hatarertek(char *fajta);
void initzoldseg(zoldseg *z1, zoldseg *z2);
void inithatar(float *sohat,float *fehhat,float *szenhat, int *menny);
float z1_megoldas(zoldseg z1, zoldseg z2, igeny ig);
float z2_megoldas(zoldseg z1, zoldseg z2, igeny ig);
int so_ellenor(zoldseg z1, zoldseg z2, igeny ig);
