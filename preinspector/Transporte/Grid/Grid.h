/**
* Project: "proceGTFS".
* Package:
* Class:
* Created by: Mauricio Zuñiga G. <mzuniga@pragxis.cl>
* Terms: These coded instructions, statements, and computer programs are
* produced as part of a software project. They contain unpublished
* propietary information and are protected by copyright law. They may
* not be disclosed to third parties or copied or duplicated in any form,
* in whole or in part, without the prior written consent of Pragxis SpA.
* Copyright:  Pragxis (c) 2016
* Last modified : Mauricio Zuñiga 18-06-2016
*/
#pragma once

#include <iostream>
#include <vector>
#include "Cell.h"


using namespace std;

/**
* Title: Grid
* Description:	Clase que modela un parada de bus
* Copyright:  Pragxis (c) 2016
* Date: 18-06-2016
* @author Mauricio Zuñiga G. <mzuniga@pragxis.cl>
* @version 0.0
*/
class Grid
{
public:
	/**
	* Constructor por defecto
	*/
	Grid(void);
	/**
	* Destructor
	*/
	~Grid(void);

	///Coordenadas que definen grilla
	double minLat;
	double maxLat;
	double minLon;
	double maxLon;

	double nLat;
	double nLon;

	double delta_Latitud;
	double delta_Longitud;

	double ddLat;
	double ddLon;




	vector< vector< Cell > > cells;
};
