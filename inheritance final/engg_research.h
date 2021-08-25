//engg_research.h
#pragma once
#include"research.h"
#include"engineer.h"


class engg_research:public engineer,public research
{
	public:
	void setter();
		void getter( )const;
};


