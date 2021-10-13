Egy gazdaságban a sertéseket burgonyával és répával hizlalják. A burgonya 3% fehérjét és 15% szénhidrátot, a répa 1% fehérjét és 10% szénhidrátot, és mind a kettő 2% ásványi sót tartalmaz. A röfiknek naponta legalább 0,3 t fehérjét és 2,25 t szénhidrátot kell fogyasztani, de a menüben nem szabad 0,5 t-nál több ásványi sónak lennie. 1 t burgonya 100 dollárba, 1 t répa 50-be kerül. Meg kell írni egy programot, mely a fenti paraméterek (szénhidrát-, fehérje-, sótartalom, só"határ", szükséglet, ár, stb) bekérése után kiszámolja, mennyi krumplit és mennyi répát használjunk, hogy a legolcsóbban tunningoljuk a malacokat!

Matek:

Répa    Burgonya
feh=a   feh=d
szén=b  szén=e
tömeg=c tömeg=f

Össz fehérje = x
Össz szén = y

c = (x-d*y/e) / (a-b*d*e)
f = (x*a*y/b) / (d-a*e/b)