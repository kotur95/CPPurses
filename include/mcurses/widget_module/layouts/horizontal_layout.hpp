#ifndef HORIZONTAL_LAYOUT_HPP
#define HORIZONTAL_LAYOUT_HPP

#include "../layout.hpp"

namespace mcurses {

class Horizontal_layout : public Layout {
public:

protected:
	virtual void update_geometry() override;
};

} // namespace mcurses
#endif // HORIZONTAL_LAYOUT_HPP