#include "image.h"

using namespace std;

Image::Image(int x, int y, char * path) : Forme(x, y), path(path), QPath(path) {}