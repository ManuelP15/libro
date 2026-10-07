/***********************************************************************
 * Module:  Autor.h
 * Author:  HP
 * Modified: martes, 6 de octubre de 2026 20:02:53
 * Purpose: Declaration of the class Autor
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Autor_h)
#define __Class_Diagram_1_Autor_h

#include <IGenerica<T>.h>

class Autor : public IGenerica<T>
{
public:
protected:
private:
   int ID;
   std::string Nombre;
   std::string Apellido;


};

#endif