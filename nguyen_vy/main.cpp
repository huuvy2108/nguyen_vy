#include "iostream"
#include "toan.h"
using namespace std;

class phanso
{
public:
	int tu;
	int mau;
	phanso operator*(phanso khac);
	phanso operator/(phanso khac);
	phanso operator+(phanso khac);
	phanso operator-(phanso khac);
	phanso rutgon();
	phanso operator>(phanso khac);
	phanso operator<(phanso khac);
	phanso operator>=(phanso khac);
	phanso operator<=(phanso khac);
	phanso operator==(phanso khac);
};
phanso phanso::operator*(phanso khac)
{
	phanso ketqua;
	ketqua.tu = tu * khac.tu;
	ketqua.mau = mau * khac.mau;
	return ketqua;
}
phanso phanso::operator/(phanso khac)
{
	phanso ketqua;
	ketqua.tu = tu * khac.mau;
	ketqua.mau = mau * khac.tu;
	return ketqua;
}
phanso phanso::operator+(phanso khac)
{
	phanso ketqua;
	ketqua.tu = tu * khac.mau + mau * khac.tu;
	ketqua.mau = mau * khac.mau;
	return ketqua;
}
phanso phanso::operator-(phanso khac)
{
	phanso ketqua;
	ketqua.tu = tu * khac.mau - mau * khac.tu;
	ketqua.mau = mau * khac.mau;
	return ketqua;
}
phanso phanso::rutgon()
{
	int ucln = 1;
	for (int i = 1; i <= tu && i <= mau; i++)
	{
		if (tu % i == 0 && mau % i == 0)
			ucln = i;
	}
	tu /= ucln;
	mau /= ucln;
	return *this;
}
phanso phanso::operator>(phanso khac)
{
	if (tu * khac.mau > mau * khac.tu)
		return *this;
	else
		return khac;
}
phanso phanso::operator<(phanso khac)
{
	if (tu * khac.mau < mau * khac.tu)
		return *this;
	else
		return khac;
}
phanso phanso::operator>=(phanso khac)
{
	if (tu * khac.mau >= mau * khac.tu)
		return *this;
	else
		return khac;
}
phanso phanso::operator<=(phanso khac)
{
	if (tu * khac.mau <= mau * khac.tu)
		return *this;
	else
		return khac;
}
phanso phanso::operator==(phanso khac)
{
	if (tu * khac.mau == mau * khac.tu)
		return *this;
	else
		return khac;
}

void main()
{
	phanso a, b, c;
	a.tu = 1;
	a.mau = 2;
	b.tu = 3;
	b.mau = 4;
	c = a*b;
	cout << "Phan so a: " << a.tu << "/" << a.mau << endl;
	cout << "Phan so b: " << b.tu << "/" << b.mau << endl;
	cout << "Phan so c: " << c.tu << "/" << c.mau << endl;
}

