#include "canvasView.h"

void CanvasView::render(const Canvas& canvas) const{
    std::cout << "Canvas contents:\n"<<canvas.exportToFile();
}