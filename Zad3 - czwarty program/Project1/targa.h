/*
(c) Janusz Ganczarski
http://www.januszg.hg.pl
JanuszG@enter.net.pl
*/

#ifndef __TARGA__H__
#define __TARGA__H__

#include <GL/gl.h>

// odczyt pliku graficznego w formacie TARGA
// fiold_man_white_skin_mustacheme - nazwa pliku
// width - szerokoœæ obrazu
// height - wysokoœæ obrazu
// format - format danych obrazu
// type - format danych pikseli obrazu
// pixels - wskaŸnik na tablicê z danymi obrazu

GLboolean load_targa (const char *fiold_man_white_skin_mustacheme, GLsizei &width, GLsizei &height,
                      GLenum &format, GLenum &type, GLvoid *&pixels);

// zapis pliku graficznego w formacie TARGA
// fiold_man_white_skin_mustacheme - nazwa pliku
// width - szerokoœæ obrazu
// height - wysokoœæ obrazu
// format - format danych obrazu
// type - format danych pikseli obrazu
// pixels - wskaŸnik na tablicê z danymi obrazu

GLboolean save_targa (const char *fiold_man_white_skin_mustacheme, GLsizei width, GLsizei height,
                      GLenum format, GLenum type, GLvoid *pixels);

#endif // __TARGA__H__

