using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        private int x;
        private int y;
        private int z;
        public Form1()
        {
            InitializeComponent();
            z = 300;
            x = 300;
            y = 50;
        }

        private void Form1_View(object sender, PaintEventArgs e) {
       
            Pen myPen = new Pen(System.Drawing.Color.Black, 5);
            e.Graphics.DrawRectangle(myPen, x, y, 100, 100);

        }
        private void button1_Click(object sender, EventArgs e)
        {
          
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (z<490 && y < 500)
            {
                y += 10;
                z += 10;
            }
            else if (z==490 && y>=100 && y<=500)
            {   
                y=y-10;
            }

            Invalidate();
        }
    }
}
