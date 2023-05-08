#include "MyForm.h"
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;

void loadToFile(Graph* f)
{
    std::ofstream m("graph.txt");
    for (auto x : f->graph)
    {
        m << x.first << ": ";
        for (auto y : f->graph[x.first])
        {
            m << y.first << " " << std::to_string(y.second) << " ";
        }
        m << "\n";
    }
    m.close();
}

int main(array<System::String^>^ args)
{
    PlaySound(TEXT("car.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project5::MyForm form;
    Application::Run(% form);
    loadToFile(form.graphPtr);
    PlaySound(TEXT("bye.wav"), NULL, SND_SYNC);
    return 0;
}
