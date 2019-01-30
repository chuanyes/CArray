#pragma once
class CArray {
	int size;
	int *p;
public:
	CArray(int s = 0);
	CArray(CArray&a);
	~CArray();
	int length() { return size; };
	void push_back(int v);
	CArray & operator=(const CArray &a) {
		if (p = a.p)
			return *this;
		if (a.p == NULL) {
			if (p) delete[]p;
			p = NULL;
			size = 0;
			return *this;
		}
	};
	int & operator[](int i) {
		return p[i];
	};
};
CArray::CArray(int s) :size(s) {
	if (s == 0)
		p = NULL;
	else
		p = new int[s];
}
CArray::CArray(CArray&a) {
	if (!a.p) {
		p = NULL;
		size = 0;
		return;
	}
	p = new int[a.size];
	size = a.size;
	memcpy(p, a.p, sizeof(int)*a.size);
}
CArray::~CArray() {
	if (p) {
		delete[]p;
	}
}
void CArray::push_back(int v) {
	if (p) {
		int*tmpp = new int[size + 1];
		memcpy(tmpp, p, sizeof(int)*size);
		delete[]p;
		p = tmpp;
	}
	else
		p = new int[1];
	p[size++] = v;
}
