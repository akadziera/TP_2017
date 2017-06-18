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
        private int xx;
        private int y;
       
        private int z;
        private int m;
        private int count;
        private int ccount;
        private int c1ount;
        private int cgount;
        private int ground;
        private int pietropierwsze;
        
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
            xx = 0;
            
            weight = 0;
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
                e.Graphics.DrawRectangle(myPen, 200 - (15 * c), 120, 10, 10);
            }
            ccount = lift.Count();
            for (int j = 0; j < ccount; j++)
            {
                    
                    e.Graphics.DrawRectangle(myPen, (10 + j * 10) + x, (80) + y, 10, 10);
               
                

            }

            c1ount = passenger1.Count();
            for (int c = 0; c < c1ount; c++)
            {
                e.Graphics.DrawRectangle(myPen, 200 - (15 * c), 250, 10, 10);
            }

            for (int j = 0; j < ccount; j++)
            {
                
                    e.Graphics.DrawRectangle(myPen, (10 + j * 10) + x, (80) + y, 10, 10);
                
            }
            cgount = passengerground.Count();
            for (int c = 0; c < cgount; c++)
            {
                e.Graphics.DrawRectangle(myPen, 200 - (15 * c), 380, 10, 10);
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
            Invalidate();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            pietropierwsze = 160;
           
            timer1_Tick(sender, e);
            Invalidate();

        }

        private void button12_Click(object sender, EventArgs e)
        {
            pietropierwsze = 300;
            Invalidate();
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
            Invalidate();

        }

     

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (lift.Count() != 0 && pietropierwsze == 160)
            {
                passenger1.Enqueue(i); 
                lift.Dequeue();
                i = passenger1.Count();
                weight = normalweight * lift.Count();
                string text = weight.ToString();
                textBox1.Text = text;

            }

            if (lift.Count() == 0)
            {
                System.Threading.Thread.Sleep(5000);
                pietropierwsze = 300;
                timer1_Tick(sender, e);

            }
            Invalidate();

        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (passenger1.Count() != 0 && lift.Count() < 8 && pietropierwsze == 160) {
                passenger1.Dequeue();
                lift.Enqueue(m);
                m = lift.Count();
                weight = m * normalweight;
                string text = weight.ToString();
                textBox1.Text = text;


            }
            if (passenger1.Count() != 0 && lift.Count() >= 8 && pietropierwsze == 160)
            {
                System.Windows.Forms.MessageBox.Show("No more passengers can enter the lift");
            }
            Invalidate();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {
            passengerground.Enqueue(ground);
            Invalidate();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (passengerground.Count() != 0 && lift.Count() < 8 && pietropierwsze == 300)
            {
                passengerground.Dequeue();
                lift.Enqueue(m);
                m = lift.Count();
                weight = m * normalweight;
                string text = weight.ToString();
                textBox1.Text = text;


            }
            if (passengerground.Count() != 0 && lift.Count() >= 8 && pietropierwsze == 300)
            {
                System.Windows.Forms.MessageBox.Show("No more passengers can enter the lift");
            }
            Invalidate();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (lift.Count() != 0 && pietropierwsze==300)
            {
                passengerground.Enqueue(ground);
                lift.Dequeue();
                ground = passengerground.Count();
                weight = normalweight * lift.Count();
                string text = weight.ToString();
                textBox1.Text = text;

            }
         
            Invalidate();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            passenger2.Enqueue(j);
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (passenger2.Count()!=0 && lift.Count() < 8 && pietropierwsze == 50)
            {
                passenger2.Dequeue();
                lift.Enqueue(m);
                m = lift.Count();
                weight = m * normalweight;
                string text = weight.ToString();
                textBox1.Text = text;

            }
            if (passenger2.Count() != 0 && lift.Count() >= 8 && pietropierwsze == 50)
            {
                System.Windows.Forms.MessageBox.Show("No more passengers can enter the lift");
            }
            Invalidate();
        }

        private void button11_Click(object sender, EventArgs e)
        {
            if (lift.Count() != 0 && pietropierwsze==50)
            {
                passenger2.Enqueue(j);
                lift.Dequeue();
               
                weight = normalweight * lift.Count();
                string text = weight.ToString();
                textBox1.Text = text;

               
            }

            if (lift.Count() == 0)
            {
                System.Threading.Thread.Sleep(5000);
                pietropierwsze = 300;
                timer1_Tick(sender, e);

            }
            Invalidate();
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
             
            
        }


        private void button13_Click(object sender, EventArgs e)
        {
            if (passenger2.Count() !=0)
            {
                passenger2.Dequeue();
            }
        }

        private void button14_Click(object sender, EventArgs e)
        {
            if (passenger1.Count() != 0)
            {
                passenger1.Dequeue();
            }
        }

        private void button15_Click(object sender, EventArgs e)
        {
            if (passengerground.Count() != 0)
            {
                passengerground.Dequeue();
            }
        }
    }
}
