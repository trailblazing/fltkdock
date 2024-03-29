//
// $Id: WindowHolder.h,v 1.2 2006/06/19 16:32:02 z_hossain Exp $
//
// A dockable window framework for Fast Light Tool Kit (FLTK).
//
// Copyright (C) 2006 by MD. Z. Hossain
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems to: 
//
//             z_hossain@users.sf.net
//

#ifndef fltk_WindowHolder_h
#define fltk_WindowHolder_h

#include <fltk/DockHolder.h>
#include <PlainHolder.h>

namespace fltk {

class FL_API WindowHolder : public PlainHolder {
	void _WindowHolder();
	
protected:
	bool do_layout(uchar);
	
public:
	WindowHolder(int, int, int, int, Flags = HALIGN_UNKNOWN);
	WindowHolder(int, int, Flags);
	
	void layout();
	void draw();
	int handle(int);	
};

}
#endif
//
// End of $Id: WindowHolder.h,v 1.2 2006/06/19 16:32:02 z_hossain Exp $
//

