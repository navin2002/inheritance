//sci_humanities_research.h
#pragma once
#include "research.h"
#include "arts.h"
#pragma once

class sci_humanities_research:public research,public arts
{
	public:
		void setter();
		void getter( )const;
};


