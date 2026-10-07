/***********************************************************************
 * Module:  IGenerica.h
 * Author:  HP
 * Modified: martes, 6 de octubre de 2026 20:46:07
 * Purpose: Declaration of the class IGenerica
 ***********************************************************************/

#if !defined(__Class_Diagram_1_IGenerica_h)
#define __Class_Diagram_1_IGenerica_h

class IGenerica
{
public:
   virtual T get(void)=0;
   virtual void set(T valor)=0;

protected:
private:

};

#endif