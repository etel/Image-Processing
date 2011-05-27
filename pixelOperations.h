unsigned char* remappingPixels(int* image,int imgWidth, int imgHeight);
unsigned char* convolutionMask(int* support, unsigned char* img, int imgWidth, int imgHeight, int* mask, int maskSize, bool recalibration, bool absolute);
unsigned char* minFilter(unsigned char* img, int imgWidth, int imgHeight, int maskSize);
unsigned char* maxFilter(unsigned char* img, int imgWidth, int imgHeight, int maskSize);
unsigned char* midPointFilter(unsigned char* img, int imgWidth, int imgHeight, int maskSize);
unsigned char* medianFilter(unsigned char* img, int imgWidth, int imgHeight, int maskSize);
int* histogramCalculation(unsigned char* img, int imgWidth, int imgHeight, int* histogram);
unsigned char* histogramToImage(unsigned char* img, int imgWidth, int imgHeight, int* histogram);
void histogramEqualisation(unsigned char* img, int imgWidth, int imgHeight, int *histogram);
unsigned char* thresolding(unsigned char* img, int imgWidth, int imgHeight, int T);
unsigned char* automatedThresolding(unsigned char* original, int imgWidth, int imgHeight, int T_new, int T_old);
unsigned char* adaptiveThresolding(unsigned char* original, int imgWidth, int imgHeight, int tolerance);
int varianceCalculation(unsigned char* img, int imgWidth, int imgHeight);
unsigned char* andRoi(unsigned char* img, int imgWidth, int imgHeight, unsigned char* mask);
unsigned char* orRoi(unsigned char* img, int imgWidth, int imgHeight, unsigned char* mask);
unsigned char* createMask(int type, int imgWidth, int imgHeight);
void closeSupport();