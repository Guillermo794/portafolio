using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace calculadora
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
            pickOpe.Items.Add("Suma");
            pickOpe.Items.Add("Resta");
            pickOpe.Items.Add("Multiplicacion");
            pickOpe.Items.Add("Division");

        }

        private void pickOpe_SelectedIndexChanged(object sender, EventArgs e)
        {
            String op = pickOpe.SelectedItem.ToString();
            int n1 = Int32.Parse(num1.Text);
            int n2 = Int32.Parse(num2.Text);
            double res = 0;
            if (op == "Suma")
                res = n1 + n2;
            else if (op == "Resta")
                res = n1 - n2;
            else if (op == "Multiplicacion")
                res = n1 * n2;
            else 
                res = n1 / n2;

            lbResu.Text = res + "";
        }
    }
}
