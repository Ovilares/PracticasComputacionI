#include "Almacen.h"

bool Almacen::ModificarInventarioArticulo(Articulo* artPtr, int cantidad)
{
	
	for (int i = 0; i < articulos.size(); i++)
	{
		int temp = articulos[i].cantidad;
		if (artPtr->nombre == articulos[i].articulo->nombre)
		{
			articulos[i].cantidad += cantidad;
			if (articulos[i].cantidad < 0)
			{
				articulos[i].cantidad = temp;
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	
	if (cantidad >= 0)
	{
		ArticuloAlmacenado nuevoart;
		nuevoart.articulo = artPtr;
		nuevoart.cantidad = cantidad;
		articulos.push_back(nuevoart);
		return true;
	}
	else 
	{
		return false;
	}
}

string Almacen::ObtenerNombre() const
{
	return nombre;
}

string Almacen::ObtenerInventario() const
{
	string invStr = "";
	invStr.append("\nArticulo\tCantidad\n");
	for (int i = 0, n = articulos.size(); i < n; i++)
	{
		invStr.append(articulos[i].articulo->nombre);
		invStr.append("\t");
		invStr.append(to_string(articulos[i].cantidad));
		invStr.append("\n");
	}
	return invStr;
}
