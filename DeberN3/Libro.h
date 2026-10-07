/***********************************************************************
 * Module:  Libro.h
 * Author:  HP
 * Modified: martes, 6 de octubre de 2026 20:31:44
 * Purpose: Declaration of the class Libro
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Libro_h)
#define __Class_Diagram_1_Libro_h

class Autor;
class Editorial;
class Pais;

#include <IGenerica<T>.h>

class Libro : public IGenerica<T>
{
public:
   Autor** autor;
   Editorial** editorial;
   Pais** pais;

protected:
private:
   std::string ISBN;
   int anio;
   std::string titulo;
   std::string edicion;
   int numPaginas;
   std::string version;


};

#endif