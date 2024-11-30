#include<iostream>
#include "GraphicsController.h"
#include "canvas.h"
#include "canvasView.h"
int main(){
    auto canvas=std::make_shared<Canvas>();
    auto view = std::make_shared<CanvasView>();
    GraphicsController controller(canvas, view);

    controller.createNewCanvas();
    controller.addShape(std::make_shared<Line>());
    controller.addShape(std::make_shared<Circle>());
    controller.addShape(std::make_shared<Rectangle>());
    controller.renderView();
    controller.exportCanvas();

    controller.deleteShape(0);
    controller.renderView();
    return 0;
}