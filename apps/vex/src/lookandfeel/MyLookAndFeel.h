/*
 ==============================================================================

 This file is part of the JUCETICE project - Copyright 2008 by Lucio Asnaghi.

 JUCETICE is based around the JUCE library - "Jules' Utility Class Extensions"
 Copyright 2008 by Julian Storer.

 ------------------------------------------------------------------------------

 JUCE and JUCETICE can be redistributed and/or modified under the terms of
 the GNU Lesser General Public License, as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later
 version.

 JUCE and JUCETICE are distributed in the hope that they will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU Lesser General Public License
 along with JUCE and JUCETICE; if not, visit www.gnu.org/licenses or write to
 Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 Boston, MA 02111-1307 USA

 ==============================================================================

   @author  rockhardbuns
   @tweaker Lucio Asnaghi

 ==============================================================================
*/

#ifndef __JUCETICE_VEXMYLOOKANDFEEL_HEADER__
#define __JUCETICE_VEXMYLOOKANDFEEL_HEADER__

#include "../StandardHeader.h"
#include "../resources/Resources.h"

class MyLookAndFeel  : public LookAndFeel
{
public:

	MyLookAndFeel();
	~MyLookAndFeel();

	const Font getComboBoxFont (ComboBox& box);
	const Font getPopupMenuFont();
	void getIdealPopupMenuItemSize (const String& text,
                                             const bool isSeparator,
                                             int standardMenuItemHeight,
                                             int& idealWidth,
                                             int& idealHeight);

	void drawToggleButton (Graphics& g,
                                    ToggleButton& button,
                                    bool isMouseOverButton,
                                    bool isButtonDown);

	void drawRotarySlider (Graphics& g,
	                       int x, int y,
	                       int width, int height,
	                       float sliderPosProportional,
	                       const float rotaryStartAngle,
	                       const float rotaryEndAngle,
	                       Slider& slider);

	juce_UseDebuggingNewOperator

public:

	Font* Topaz;
};


#endif
