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
        private int m;
        private int count;
        private int ccount;
        private int c1ount;
        private int cgount;
        private int ground;
        private int pietropierwsze;
        private int pietrodrugie;
        private int normalweight = 70;
        private int weight;
        public struct Passenger
        {
            public int id;
            public int weight;

        }

        Queue<int> passengerground = new Queue<int>();
        Queue<int> passenger1 = new Queue<int>();
        Queue<int> passenger2 = new Queue<int>();
        Queue<int> lift = new Queue<int>();

        public Form1()
        {
            InitializeComponent();
            z = 50;
            x = 300;
            y = 300;
            i = 0;
            j = 0;
            pietropierwsze = 300;
            ground = 0;
            m= 0;
            count = 0;
            ccount = 0;
            cgount = 0;
            c1ount = 0;
        }

        private void Form1_View(object sender, PaintEventArgs e)
        {

            Pen myPen = new Pen(System.Drawing.Color.Black, 5);
            e.Graphics.DrawRectangle(myPen, x, y, 100, 100);
            count = passenger2.Count();
            for (int c = 0; c < count; c++)
            {
                e.Graphics.DrawRectangle(myPen, 140 - (15 * c), 30, 10, 10);
            }
            ccount = lift.Count();
            for (int j = 0; j < ccount; j++)
            {
                
                    e.Graphics.DrawRectangle(myPen, (10 + j * 10) + x, (80) + y, 10, 10);
                
             
                }

            c1ount = passenger1.Count();
            for (int c = 0; c < c1ount; c++)
            {
                e.Graphics.DrawRectangle(myPen, 140 - (15 * c), 165, 10, 10);
            }

            for (int j = 0; j < ccount; j++)
            {
                
                    e.Graphics.DrawRectangle(myPen, (10 + j * 10) + x, (80) + y, 10, 10);
                
                }
            cgount = passengerground.Count();
            for (int c = 0; c < cgount; c++)
            {
                e.Graphics.DrawRectangle(myPen, 140 - (15 * c), 300, 10, 10);
            }

            for (int j = 0; j < ccount; j++)
            {
              
                
                    e.Graphics.DrawRectangle(myPen, (10 + j * 10) + x, (80) + y, 10, 10);
                
                }

           
        }
        private void button2_Click(object sender, EventArgs e)
        {
            pietropierwsze = 50;
           
            timer1_Tick(sender, e);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            pietropierwsze = 160;
           
            timer1_Tick(sender, e);

        }

        private void button12_Click(object sender, EventArgs e)
        {
            pietropierwsze = 300;
        }
        private void timer1_Tick(object sender, EventArgs e)
        {
            if (y < pietropierwsze)
            {
                y += 10;
                
            }
            if (y>pietropierwsze)
            {   
                y=y-10;
             
            }

            Invalidate();
        }

       

       

        private void button3_Click(object sender, EventArgs e)
        {
            passenger1.Enqueue(i);
 
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

          
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (lift.Count() != 0)
            {
                passenger1.Enqueue(i); 
                lift.Dequeue();
                i = passenger1.Count();
                System.Windows.Forms.MessageBox.Show(i.ToString());
            }
            if (lift.Count() == 0)
            {
                System.Threading.Thread.Sleep(5000);
                pietropierwsze = 200;
                pietrodrugie = 190;
                timer1_Tick(sender, e);

            }

        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (lift.Count() < 8) {
                passenger1.Dequeue();
                lift.Enqueue(m);
                m = lift.Count();
                weight = m * normalweight;
                System.Windows.Forms.MessageBox.Show(weight.ToString());
                
            }
            if (lift.Count() >= 8)
            {
                System.Windows.Forms.MessageBox.Show("No more passengers can be inside the lift");
            }
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {
            passengerground.Enqueue(ground);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (lift.Count() < 8)
            {
                passengerground.Dequeue();
                lift.Enqueue(m);
                m = lift.Count();
                weight = m * normalweight;
                System.Windows.Forms.MessageBox.Show(weight.ToString());
               
            }
            if (lift.Count() >= 8)
            {
                System.Windows.Forms.MessageBox.Show("No more passengers can be inside the lift");
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (lift.Count() != 0)
            {
                passengerground.Enqueue(ground);
                lift.Dequeue();
                ground = passengerground.Count();
                System.Windows.Forms.MessageBox.Show(ground.ToString());
            }
            if (lift.Count() == 0)
            {
                System.Threading.Thread.Sleep(5000);
                pietropierwsze = 200;
                pietrodrugie = 190;
                timer1_Tick(sender, e);

            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            passenger2.Enqueue(j);
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (lift.Count() < 8)
            {
                passenger2.Dequeue();
                lift.Enqueue(m);
                m = lift.Count();
                weight = m * normalweight;
                System.Windows.Forms.MessageBox.Show(weight.ToString());
            }
            if (lift.Count() >= 8)
            {
                System.Windows.Forms.MessageBox.Show("No more passengers can be inside the lift");
            }
        }

        private void button11_Click(object sender, EventArgs e)
        {
            if (lift.Count() != 0)
            {
                passenger2.Enqueue(j);
                lift.Dequeue();
                j = passenger2.Count();
                System.Windows.Forms.MessageBox.Show(j.ToString());
            }
            if (lift.Count() == 0)
            {
                System.Threading.Thread.Sleep(5000);
                pietropierwsze = 200;
                pietrodrugie = 190;
                timer1_Tick(sender, e);

            }
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

      
    }
}
