#include <stdint.h>

void swap(uint64_t * rdi, uint64_t * rsi) {

	rax = *rdi;
	rdx = *rsi;
	*rdi = rdx;
	*rsi = rax;
	return;
}
