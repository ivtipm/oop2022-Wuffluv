﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        // engine - ссылка на объект, также поле класса для Form1
        Engine engine = new Engine();

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            SetEngine();
            ShowData.Text += "Информация по двигателю автомобиля:" + "\r" + "\n";
            ShowData.Text += "Объем двигателя: " + TextEngineCapacity.Text + "\r" + "\n";
            ShowData.Text += "Система питания: " + TextSupplySystem.Text + "\r" + "\n";
            ShowData.Text += "Тип топлива: " + TextFuel.Text + "\r" + "\n";
            ShowData.Text += "Расход топлива: " + TextExpenditure.Text + "\r" + "\n";
            ShowData.Text += "Тип масла: " + TextOil.Text + "\r" + "\n";
            ShowData.Text += "Мощность ДВС: " + TextPowerDVS.Text + "\r" + "\n";
            ShowData.Text += "Максимальный пробег: " + TextResource.Text + "\r" + "\n";
            ShowData.Text += "Модель двигателя: " + TextModelEngine.Text + "\r" + "\n";
        }

        private void SetEngine()
        {
            try
            {
                engine.SetEngineCapacity(TextEngineCapacity.Text);
                engine.SetPowerSupplySystem(TextSupplySystem.Text);
                engine.SetFuel(TextFuel.Text);
                engine.SetResource(float.Parse(TextResource.Text));
                engine.SetTypeOil(TextOil.Text);
                engine.SetPowerDVS(TextPowerDVS.Text);
                engine.SetExpenditure(float.Parse(TextExpenditure.Text));
                engine.SetModelEngine(TextModelEngine.Text);
            }
             catch (ArgumentException er)
            {
               // ShowData.Text = er.Message;
            }  
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox8_TextChanged(object sender, EventArgs e)
        {

        }

        private void label8_Click(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }
    }
}
