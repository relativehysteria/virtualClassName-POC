#include <cstdio>

class SomeLongNameIDK {
public:
	SomeLongNameIDK()  {}
	virtual ~SomeLongNameIDK() {}
};

char *getVirtualClassName(void *obj) {
	return (char *)*(long int*)((*(--(*(void***)obj)))+sizeof(void*));
}

int main(void) {
	SomeLongNameIDK obj = SomeLongNameIDK();
	printf("class name of obj: %s\n", getVirtualClassName(&obj));
}
