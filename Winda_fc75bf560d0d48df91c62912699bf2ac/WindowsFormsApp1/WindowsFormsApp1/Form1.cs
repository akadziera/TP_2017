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
        private int pietropierwsze;
        private int pietrodrugie;
        public Form1()
        {
            InitializeComponent();
            z = 50;
            x = 300;
            y = 50;
        }

        private void Form1_View(object sender, PaintEventArgs e) {
       
            Pen myPen = new Pen(System.Drawing.Color.Black, 5);
            e.Graphics.DrawRectangle(myPen, x, y, 100, 100);

        }
        private void button1_Click(object sender, EventArgs e)
        {

            /*  try
              {
                  Bitmap image1 = (Bitmap)Image.FromFile(
                      @"C:\Użytkownicy\Józef\Pulpit\1.bmp", true);

                  TextureBrush texture = new TextureBrush(image1);
                  texture.WrapMode = System.Drawing.Drawing2D.WrapMode.Tile;
                  Graphics formGraphics = this.CreateGraphics();
                  formGraphics.FillEllipse(texture,
                      new RectangleF(90.0F, 110.0F, 100, 100));
                  formGraphics.Dispose();

              }
              catch (System.IO.FileNotFoundException)
              {
                  MessageBox.Show("There was an error opening the bitmap." +
                      "Please check the path.");
              }
              */

            pietropierwsze = 200;
            pietrodrugie = 190;
            timer1_Tick(sender, e);


        }
       

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (z<pietrodrugie && y < pietropierwsze)
            {
                y += 10;
                z += 10;
            }
            else if (z==pietrodrugie && y>=pietropierwsze && y<=pietropierwsze)
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
    }
}
