#pragma once

#include <iostream>
#include "runable.h"

using namespace std;

namespace ZTRengine
{
	class saveslot :
		public runable
	{
	private:
		struct slotinfo 
		{
			char datetime[80];
			int numberofitems;
		};
	public:
		slotinfo info;
		string filename;
		string filenameactual;
		saveslot(string);
		string get_name();
		void updateinfo();
		streampos loadinfo();
		streampos saveinfo();
		void runsave();
		void runload();
		void deletefile();
		void run(char); // 'l' for load from this slot --- 's' for save to this slot
	};
}