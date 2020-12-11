
#include "Almacen.h"

bool Almacen::ModificarInventarioArticulo(Articulo* artPtr, int cantidad)
{
	bool aux = 1;
	for (int j = 0; j < articulos.size(); j++)
	{
		if ((artPtr != articulos[j].articulo) && (cantidad >= 0))
		{
			articulos[j].articulo = artPtr;
			articulos[j].cantidad = cantidad;
		}
		else if (artPtr == articulos[j].articulo)
		{
			int temp = articulos[j].cantidad;
			articulos[j].cantidad += cantidad;
			if (articulos[j].cantidad < 0)
			{
				articulos[j].cantidad = temp;
				aux = 0;
			}
		}
		else 
		{
			aux = 0;
		}
	}
	return aux;
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
