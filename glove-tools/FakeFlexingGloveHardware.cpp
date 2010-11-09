/**
	@file FakeFlexingGloveHardware.cpp
	@brief

	@date 2010

	@author
	Ryan Pavlik
	<rpavlik@iastate.edu> and <abiryan@ryand.net>
	http://academic.cleardefinition.com/
	Iowa State University Virtual Reality Applications Center
	Human-Computer Interaction Graduate Program
*/

// Internal Includes
#include "FakeFlexingGloveHardware.h"

// Library/third-party includes
// - none

// Standard includes
#include <cmath>

namespace glove {
	GloveHardwarePtr FakeFlexingGloveHardware::create(std::string const & option) {
		GloveHardwarePtr temp(new FakeFlexingGloveHardware(option));
		return temp;
	}

	FakeFlexingGloveHardware::FakeFlexingGloveHardware(std::string const & option) :
		_counter(0) {}


	void FakeFlexingGloveHardware::updateData() {
		double bend = (- std::cos(static_cast<double>(_counter)) + 0.5) * 2;
		_bends[0] = bend;
		_bends[1] = bend;
		_bends[2] = bend;
		_bends[3] = bend;
		_bends[4] = bend;
		_counter++;
		//change bends
	}

} // end of namespace glove