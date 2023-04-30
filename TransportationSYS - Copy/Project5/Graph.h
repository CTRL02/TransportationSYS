#pragma once
#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <msclr/marshal_cppstd.h>
#include <set>
#include <string>
#define M_PI 3.14159265358979323846

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
class Graph {
public:
    int numVertices;
    std::unordered_map <std::string, std::vector<std::pair<std::string, int>>> graph; //string 1 = source, string 2 = destination and int for distance

    Graph()
    {
        this->numVertices = 0;
    }
    void addEdges(std::string city1, std::string city2, long long dist)
    {
        graph[city1].push_back(make_pair(city2, dist)); 
        graph[city2].push_back(make_pair(city1, dist)); 
    }
   /* void getNodePosition(int centerX, int centerY, int radius, double angleStep, int index, int& x, int& y) {
        double angle = angleStep * index;
        x = centerX + radius * cos(angle);
        y = centerY + radius * sin(angle);
    }*/
    void displayGraph(System::Windows::Forms::Panel^ panel)
    {
        System::Drawing::Graphics^ g = panel->CreateGraphics();

        // Load map image
        System::Drawing::Bitmap^ mapImage = gcnew System::Drawing::Bitmap("map.png");
        g->DrawImage(mapImage, 0, 0, 1262, 673);

        // Draw nodes
        System::Drawing::Bitmap^ pinImage = gcnew System::Drawing::Bitmap("pin.png");
        std::unordered_map<std::string, std::pair<int, int>> nodeCoords;
        for (auto& kv : graph) {
            std::string city = kv.first;
            int x = rand() % (800 - pinImage->Width);
            int y = rand() % (473 - pinImage->Height) + 473 / 9;
            System::Drawing::RectangleF rect(x, y, pinImage->Width, pinImage->Height);
            g->DrawImage(pinImage, rect);
            System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 12);
            System::Drawing::SolidBrush^ textBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
            System::Drawing::PointF^ point = gcnew System::Drawing::PointF(x + pinImage->Width + 10, y + pinImage->Height / 2 - 6);
            System::String^ str = gcnew System::String(city.c_str());
            g->DrawString(str, font, textBrush, *point);
            nodeCoords[city] = std::make_pair(x, y);
        }

        // Draw edges
        for (auto& kv : graph) {
            std::string city1 = kv.first;
            int x1, y1;
            std::tie(x1, y1) = nodeCoords[city1];
            for (auto& pair : kv.second) {
                std::string city2 = pair.first;
                int x2, y2;
                std::tie(x2, y2) = nodeCoords[city2];
                int dist = pair.second;
                System::Drawing::PointF^ point1 = gcnew System::Drawing::PointF(x1 + pinImage->Width / 2, y1 + pinImage->Height / 2);
                System::Drawing::PointF^ point2 = gcnew System::Drawing::PointF(x2 + pinImage->Width / 2, y2 + pinImage->Height / 2);
                g->DrawLine(System::Drawing::Pens::Black, *point1, *point2);
                System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 10);
                System::Drawing::SolidBrush^ textBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
                System::Drawing::PointF^ point = gcnew System::Drawing::PointF((x1 + x2) / 2 + 5, (y1 + y2) / 2 + 5);
                System::String^ str = gcnew System::String(std::to_string(dist).c_str());
                g->DrawString(str, font, textBrush, *point);
            }
        }

        delete pinImage;
        delete mapImage;
        delete g;
    }


    std::string cmdDisplay() {
        std::string LabelString;
        for (auto x : graph)
        {
            LabelString += "city: " + x.first + ": ";
            for (auto y : graph[x.first])
            {
                LabelString += y.first + " " + std::to_string(y.second) + " ";
            }
            LabelString += "\n";
        }
        return LabelString;
    }
};