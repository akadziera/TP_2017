using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
       
        private int i;
        private int j;
        private int x;
        private int y;
        private int z;
       
        private string mytext;
        private int pietropierwsze;
        private int pietrodrugie;
        private int normalweight = 70;
        private int maxweight = 600;
        public struct Passenger
        {
            public int id;
            public int weight;

        }

        List<int> passenger1 = new List<int>();
        List<int> passenger2 = new List<int>();

        public Form1()
        {
            InitializeComponent();
            z = 50;
            x = 300;
            y = 50;
            i = 0;
            j = 0;
        }

        private void Form1_View(object sender, PaintEventArgs e) {
       
            Pen myPen = new Pen(System.Drawing.Color.Black, 5);
            e.Graphics.DrawRectangle(myPen, x, y, 100, 100);

        }
        private void button1_Click(object sender, EventArgs e)
        {
            if (i == 0)
            {
                pietropierwsze = x;

            }
            else
            {  
                System.Threading.Thread.Sleep(5000);
                pietropierwsze = 200;
                pietrodrugie = 190;
                timer1_Tick(sender, e);
            }

        }
       

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (z<pietrodrugie && y < pietropierwsze)
            {
                y += 10;
                z += 10;
            }
            else if (z==pietrodrugie && y>=100 && y<=pietropierwsze)
            {   
                y=y-10;
                if (y == 100)
                {
                    z = 300;
                }
            }

            Invalidate();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            pietropierwsze = 400;
            pietrodrugie = 390;
            timer1_Tick(sender, e);
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
           // Image myImg = Image.FromFile(@"1.jpg");
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            passenger1.Add(i);
            i++;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

          
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            System.Windows.Forms.MessageBox.Show(i.ToString());
        }

        private void button5_Click(object sender, EventArgs e)
        {
           passenger1.RemoveAt(1);
        }
    }
}
