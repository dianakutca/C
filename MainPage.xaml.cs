using Microsoft.Maui.Controls;
using System;

namespace NearestIntegerFinder
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void FindNearestInteger_Clicked(object sender, EventArgs e)
        {
            if (double.TryParse(inputEntry.Text, out double inputValue))
            {
                int nearestInteger = (int)Math.Round(inputValue);
                resultLabel.Text = "Найближче ціле: " + nearestInteger.ToString();
            }
            else
            {
                resultLabel.Text = "Введіть коректне дійсне число!";
            }
        }
    }
}
