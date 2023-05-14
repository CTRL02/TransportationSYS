#pragma once
#pragma once
#include <iostream>
#include <vector>
#include <limits>
#include <unordered_map>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <msclr/marshal_cppstd.h>
#include <set>
#include <string>
#include <cmath>
#include <queue>
#include<fstream>
#include<stack>
#define M_PI 3.14159265358979323846

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
class Graph {
public:
    int numVertices;
    std::unordered_map <std::string, std::vector<std::pair<std::string, int>>> graph; //string 1 = source, string 2 = destination and int for distance
    std::unordered_map<std::string, std::vector<std::string>>Traverse_map;
    std::string Traverse_First = "";
    Graph()
    {
        std::ifstream ms("graph.txt");
        std::string line;
        while (getline(ms, line))

        {

            if (!line.empty())
            {
                std::string src;
                std::string word, tmp;
                int noFWords = 0;
                int secIdx = 0;
                for (int j = 0; j < line.size(); j++)
                {
                    if (line[j] != ':')
                        src += line[j];
                    else
                    {
                        secIdx = j;
                        break;
                    }

                }
                if ((src.size() + 2) == line.size())
                        graph[src] = {};
                for (int i = secIdx + 2; i < line.size(); i++)
                {
                    if (line[i] != ' ')
                        word += line[i];
                    else
                    {
                        noFWords++;
                        if (noFWords % 2 == 0)
                        {
                            graph[src].push_back(make_pair(tmp, stoi(word)));
                        }
                        tmp = word;
                        word.clear();
                    }

                }
            }

        }
        this->numVertices = 0;
    }
    void addEdges(std::string city1, std::string city2, long long dist)
    {
        auto it = find_if(graph[city1].begin(), graph[city1].end(), [&](const auto& p) {
            return p.first == city2;
            });
        if(it != graph[city1].end()){
            MessageBox::Show("Sorry repeated Edge...!");
        }
        else {
            graph[city1].push_back(make_pair(city2, dist));
            graph[city2].push_back(make_pair(city1, dist));
        }
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
        g->DrawImage(mapImage, 0, 0, 1000, 673);

        // Draw nodes
        System::Drawing::Bitmap^ pinImage = gcnew System::Drawing::Bitmap("pin.png");
        std::unordered_map<std::string, std::pair<int, int>> nodeCoords;
        for (auto& kv : graph) {
            std::string city = kv.first;
            int x = rand() % (600 - pinImage->Width);
            int y = rand() % (200 - pinImage->Height) + 473 / 9;
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
    //shortest path
    std::vector<std::string> dijkstra(std::string start, std::string end) {
        std::unordered_map<std::string, int> distance;
        std::unordered_map<std::string, std::string> parent;
        std::priority_queue<std::pair<int, std::string>, std::vector<std::pair<int, std::string>>, std::greater<std::pair<int, std::string>>> pq;

        // Initialize distances to infinity
        for (auto& kv : graph) {
            distance[kv.first] =  INT_MAX;
        }

        distance[start] = 0;
        pq.push(std::make_pair(0, start));

        while (!pq.empty()) {
            std::string current = pq.top().second;
            pq.pop();

            for (auto& neighbor : graph[current]) {
                std::string next = neighbor.first;
                int weight = neighbor.second;
                int totalDistance = distance[current] + weight;

                if (totalDistance < distance[next]) {
                    distance[next] = totalDistance;
                    parent[next] = current;
                    pq.push(std::make_pair(totalDistance, next));
                }
            }
        }

        std::vector<std::string> path;
        std::string current = end;

        while (current != start) {
            path.push_back(current);
            current = parent[current];
        }

        path.push_back(start);
        std::reverse(path.begin(), path.end());


        return path;
    }
    
    void displayShortestPath(const std::vector<std::string>& cities, System::Windows::Forms::Panel^ panel)
    {
        System::Drawing::Graphics^ g = panel->CreateGraphics();

        // Load map image
        System::Drawing::Bitmap^ mapImage = gcnew System::Drawing::Bitmap("map.png");
        g->DrawImage(mapImage, 0, 0, 1262, 673);

        // Draw nodes
        System::Drawing::Bitmap^ pinImage = gcnew System::Drawing::Bitmap("pin.png");
        std::unordered_map<std::string, std::pair<int, int>> nodeCoords;
        for (const auto& city : cities) {
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
        for (size_t i = 0; i < cities.size() - 1; i++) {
            std::string city1 = cities[i];
            std::string city2 = cities[i + 1];
            int x1, y1, x2, y2;
            std::tie(x1, y1) = nodeCoords[city1];
            std::tie(x2, y2) = nodeCoords[city2];
            int dist = -1;

            // Find the distance between city1 and city2
            for (const auto& neighbor : graph[city1]) {
                if (neighbor.first == city2) {
                    dist = neighbor.second;
                    break;
                }
            }

            if (dist != -1) {
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

   
    int computeTotalDistance(const std::vector<std::string>& path) {
        int totalDistance = 0;

        for (int i = 0; i < path.size() - 1; i++) {
            std::string city1 = path[i];
            std::string city2 = path[i + 1];
            for (auto& neighbor : graph[city1]) {
                if (neighbor.first == city2) {
                    totalDistance += neighbor.second;
                    break;
                }
            }
        }

        return totalDistance;
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

    std::string showCities(const std::vector<std::string>& path) {
        std::string out;
        out += "Cities crossed in the shortest path: ";
        for (auto x : path)
        {
            out += x + ", ";
        }
        out[out.size() - 1] = ' ';
        return out;
    }
    void Graph::addCity(std::string city) {
        graph[city] = {};
    }
    void Graph::DeleteCity(std::string city) {

        graph.erase(city);
        for (auto x : graph) {
            auto it = find_if(graph[x.first].begin(), graph[x.first].end(), [&](const std::pair<std::string, int>& p) {
                return p.first == city;
                });
            if (it != graph[x.first].end()) {
                graph[x.first].erase(it);
            }
        }
    }
    void Graph::DeleteEdge(std::string city1, std::string city2) {

        /* auto it1 = find_if(graph[city1].begin(), graph[city1].end(), [&](const std::pair<std::string, int>& p) {
             return p.first == city2;
             });
         if (it1 != graph[city1].end()) {
             graph[city1].erase(it1);
         }

         auto it2 = find_if(graph[city2].begin(), graph[city2].end(), [&](const std::pair<std::string, int>& p2) {
             return p2.first == city1;
             });
         if (it2 != graph[city2].end()) {
             graph[city2].erase(it2);
         }*/

        auto it1 = graph.find(city1);
        if (it1 == graph.end()) {
            return;
        }

        auto it2 = graph.find(city2);
        if (it2 == graph.end()) {
            return;
        }

        // Remove edge (city1, city2)
        std::vector<std::pair<std::string, int>>& adjList1 = it1->second;
        auto it3 = find_if(adjList1.begin(), adjList1.end(),
            [&](const std::pair<std::string, int>& p) { return p.first == city2; });
        if (it3 != adjList1.end()) {
            adjList1.erase(it3);
        }

        // Remove edge (city2, city1)
        std::vector<std::pair<std::string, int>>& adjList2 = it2->second;
        auto it4 = find_if(adjList2.begin(), adjList2.end(),
            [&](const std::pair<std::string, int>& p) { return p.first == city1; });
        if (it4 != adjList2.end()) {
            adjList2.erase(it4);
        }
    }

    std::string Graph::BFS() {
        std::string bfsString = "";
        for (auto x : graph) {
            for (auto y : graph[x.first]) {
                Traverse_map[x.first].push_back(y.first);
            }
        }
        auto it = Traverse_map.begin();
        Traverse_First = it->first;
        std::queue<std::string>q;
        q.push(Traverse_First);
        std::unordered_map<std::string, bool>BFS_Visited;
        BFS_Visited[Traverse_First] = true;

        while (!q.empty()) {
            std::string temp = q.front();
            bfsString += temp + " ";
            q.pop();
            for (std::string child : Traverse_map[temp]) {
                if (!BFS_Visited[child]) {
                    q.push(child);
                    BFS_Visited[child] = true;
                }
            }
        }
        Traverse_map.clear();
        return bfsString;
    }
    std::string Graph::DFS() {
        std::string dfsString = "";
        for (auto x : graph) {
            for (auto y : x.second) {
                Traverse_map[x.first].push_back(y.first);
            }
        }
        auto it = Traverse_map.begin();
        Traverse_First = it->first;
        std::stack<std::string>st;
        st.push(Traverse_First);
        std::unordered_map<std::string, bool>DFS_Visited;
        DFS_Visited[Traverse_First] = true;

        while (!st.empty()) {
            std::string temp = st.top();
            dfsString+= temp + " ";
            st.pop();
            for (std::string child : Traverse_map[temp]) {
                if (!DFS_Visited[child]) {
                    st.push(child);
                    DFS_Visited[child] = true;
                }
            }
        }
        Traverse_map.clear();
        return dfsString;
    }
};


