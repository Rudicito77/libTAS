/*
    Copyright 2015-2023 Clément Gallet <clement.gallet@ens-lyon.org>

    This file is part of libTAS.

    libTAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libTAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libTAS.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBTAS_IMGUI_INPUTSWINDOW_H_INCL
#define LIBTAS_IMGUI_INPUTSWINDOW_H_INCL

#include "../shared/inputs/AllInputs.h"
#include <string>

namespace libtas {

namespace InputsWindow
{
    void draw(const AllInputs& ai, const AllInputs& preview_ai, bool* p_open);
    
    std::string formatInputs(const AllInputs& ai);

}

}

#endif
