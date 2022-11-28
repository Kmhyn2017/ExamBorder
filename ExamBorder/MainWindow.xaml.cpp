#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

using namespace winrt::Microsoft::UI::Xaml::Controls;
using namespace winrt::Microsoft::UI::Xaml::Controls::Primitives;
using namespace winrt::Microsoft::UI::Xaml::Media;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ExamBorder::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }


}


void winrt::ExamBorder::implementation::MainWindow::ThicknessSlider_ValueChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const& e)
{
    //Control1().BorderThickness(winrt::Microsoft::UI::Xaml::Thickness::NewValue);
}

void winrt::ExamBorder::implementation::MainWindow::GreenBtn_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().Background(SolidColorBrush(winrt::Microsoft::UI::Colors::Green()));
}


void winrt::ExamBorder::implementation::MainWindow::YellowBtn_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().Background(SolidColorBrush(winrt::Microsoft::UI::Colors::Yellow()));
}


void winrt::ExamBorder::implementation::MainWindow::BlueBtn_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().Background(SolidColorBrush(winrt::Microsoft::UI::Colors::Blue()));
}


void winrt::ExamBorder::implementation::MainWindow::WhiteBtn_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().Background(SolidColorBrush(winrt::Microsoft::UI::Colors::White()));
}


void winrt::ExamBorder::implementation::MainWindow::GreenBorder_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().BorderBrush(SolidColorBrush(winrt::Microsoft::UI::Colors::ForestGreen()));
}


void winrt::ExamBorder::implementation::MainWindow::YellowBorder_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().BorderBrush(SolidColorBrush(winrt::Microsoft::UI::Colors::LightYellow()));
}


void winrt::ExamBorder::implementation::MainWindow::BlueBorder_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().BorderBrush(SolidColorBrush(winrt::Microsoft::UI::Colors::DeepSkyBlue()));
}


void winrt::ExamBorder::implementation::MainWindow::WhiteBorder_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    Control1().BorderBrush(SolidColorBrush(winrt::Microsoft::UI::Colors::White()));
}
