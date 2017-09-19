#define cimg_use_jpeg
#define cimg_use_png
#define cimg_use_tiff
#include "c++/pHash/pHash.cpp"

#ifdef __cplusplus
extern "C" {
#endif

void
cimg_exception_mode_quiet() {
	cimg::exception_mode(0);
}

ulong64
ph_dct_imagehash_wrapper(const char *file) {
	ulong64 hash;
	if (ph_dct_imagehash(file, hash) == 0) {
		errno = 0;
	}
	return hash;
}

#ifdef __cplusplus
}
#endif
