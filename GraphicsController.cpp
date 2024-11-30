#include "GraphicsController.h"
#include <iostream>

GraphicsController::GraphicsController(const std::shared_ptr<Canvas> canv, const std::shared_ptr<CanvasView>& vw):canvas(canv), view(vw){}

void GraphicsController::createNewCanvas(){
    canvas=std::make_shared<Canvas>();
    std::cout<< "New document created.\n";
}

void GraphicsController::importCanvas(const std::string& data){
    canvas->importFromFile(data);
    std::cout<<"Document imported.\n";
}

void GraphicsController::exportCanvas() const{
    std::cout<<"Exported canvas:\n"<<canvas->exportToFile();
}

void GraphicsController::addShape(const std::shared_ptr<Shape>& shape){
    canvas->addShape(shape);
    std::cout <<"Added shape.\n";
}

void GraphicsController::deleteShape(size_t index){
    canvas->removeShape(index);
    std::cout <<"Shape is deleted.\n";
}

void GraphicsController::renderView() const{
    view->render(*canvas);
}