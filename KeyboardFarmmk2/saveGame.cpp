/*
   Copyright 2024 Jacob T. Ray

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "saveGame.h"
#include "save.h"

using namespace std;
using namespace ZTRengine;

saveGame::saveGame()
{
	this->name = "Save Game";
}
void saveGame::run(char runmode)
{
	save* savegame = new save();
	savegame->run('~');
	delete savegame;
	throw ZTRutils::ZTRcontinue();
}
string saveGame::get_name()
{
	return this->name;
}
