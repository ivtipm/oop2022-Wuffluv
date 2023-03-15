namespace WindowsFormsApp1
{
    partial class MainForm
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.GetData = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.TextEngineCapacity = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.TextSupplySystem = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.TextFuel = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.TextResource = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.TextOil = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.TextPowerDVS = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.TextExpenditure = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.TextModelEngine = new System.Windows.Forms.TextBox();
            this.ShowData = new System.Windows.Forms.RichTextBox();
            this.SuspendLayout();
            // 
            // GetData
            // 
            this.GetData.BackColor = System.Drawing.Color.AntiqueWhite;
            this.GetData.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.GetData.Location = new System.Drawing.Point(359, 375);
            this.GetData.Name = "GetData";
            this.GetData.Size = new System.Drawing.Size(161, 74);
            this.GetData.TabIndex = 0;
            this.GetData.Text = "Получить данные";
            this.GetData.UseVisualStyleBackColor = false;
            this.GetData.Click += new System.EventHandler(this.button1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 15);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(122, 16);
            this.label1.TabIndex = 1;
            this.label1.Text = "Объем двигателя";
            this.label1.Click += new System.EventHandler(this.label1_Click_1);
            // 
            // TextEngineCapacity
            // 
            this.TextEngineCapacity.Location = new System.Drawing.Point(15, 34);
            this.TextEngineCapacity.Name = "TextEngineCapacity";
            this.TextEngineCapacity.Size = new System.Drawing.Size(119, 22);
            this.TextEngineCapacity.TabIndex = 2;
            this.TextEngineCapacity.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 131);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(120, 16);
            this.label2.TabIndex = 3;
            this.label2.Text = "Система питания";
            // 
            // TextSupplySystem
            // 
            this.TextSupplySystem.Location = new System.Drawing.Point(15, 150);
            this.TextSupplySystem.Name = "TextSupplySystem";
            this.TextSupplySystem.Size = new System.Drawing.Size(117, 22);
            this.TextSupplySystem.TabIndex = 4;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 385);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(90, 16);
            this.label3.TabIndex = 5;
            this.label3.Text = "Тип топлива";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // TextFuel
            // 
            this.TextFuel.Location = new System.Drawing.Point(15, 404);
            this.TextFuel.Name = "TextFuel";
            this.TextFuel.Size = new System.Drawing.Size(87, 22);
            this.TextFuel.TabIndex = 6;
            this.TextFuel.TextChanged += new System.EventHandler(this.textBox3_TextChanged);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 328);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(154, 16);
            this.label4.TabIndex = 7;
            this.label4.Text = "Максимальный пробег";
            // 
            // TextResource
            // 
            this.TextResource.Location = new System.Drawing.Point(15, 347);
            this.TextResource.Name = "TextResource";
            this.TextResource.Size = new System.Drawing.Size(151, 22);
            this.TextResource.TabIndex = 8;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(12, 443);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(75, 16);
            this.label5.TabIndex = 9;
            this.label5.Text = "Тип масла";
            // 
            // TextOil
            // 
            this.TextOil.Location = new System.Drawing.Point(15, 462);
            this.TextOil.Name = "TextOil";
            this.TextOil.Size = new System.Drawing.Size(72, 22);
            this.TextOil.TabIndex = 10;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(12, 72);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(102, 16);
            this.label6.TabIndex = 11;
            this.label6.Text = "Мощность ДВС";
            // 
            // TextPowerDVS
            // 
            this.TextPowerDVS.Location = new System.Drawing.Point(15, 91);
            this.TextPowerDVS.Name = "TextPowerDVS";
            this.TextPowerDVS.Size = new System.Drawing.Size(99, 22);
            this.TextPowerDVS.TabIndex = 12;
            this.TextPowerDVS.TextChanged += new System.EventHandler(this.textBox6_TextChanged);
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(12, 198);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(113, 16);
            this.label7.TabIndex = 13;
            this.label7.Text = "Расход Топлива";
            // 
            // TextExpenditure
            // 
            this.TextExpenditure.Location = new System.Drawing.Point(15, 217);
            this.TextExpenditure.Name = "TextExpenditure";
            this.TextExpenditure.Size = new System.Drawing.Size(110, 22);
            this.TextExpenditure.TabIndex = 14;
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(12, 256);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(128, 16);
            this.label8.TabIndex = 15;
            this.label8.Text = "Модель двигателя";
            this.label8.Click += new System.EventHandler(this.label8_Click);
            // 
            // TextModelEngine
            // 
            this.TextModelEngine.Location = new System.Drawing.Point(15, 275);
            this.TextModelEngine.Name = "TextModelEngine";
            this.TextModelEngine.Size = new System.Drawing.Size(125, 22);
            this.TextModelEngine.TabIndex = 16;
            this.TextModelEngine.TextChanged += new System.EventHandler(this.textBox8_TextChanged);
            // 
            // ShowData
            // 
            this.ShowData.BackColor = System.Drawing.Color.LightGray;
            this.ShowData.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.ShowData.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.ShowData.Location = new System.Drawing.Point(264, 12);
            this.ShowData.Name = "ShowData";
            this.ShowData.Size = new System.Drawing.Size(346, 346);
            this.ShowData.TabIndex = 17;
            this.ShowData.Text = "";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Bisque;
            this.ClientSize = new System.Drawing.Size(670, 500);
            this.Controls.Add(this.ShowData);
            this.Controls.Add(this.TextModelEngine);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.TextExpenditure);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.TextPowerDVS);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.TextOil);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.TextResource);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.TextFuel);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.TextSupplySystem);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.TextEngineCapacity);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.GetData);
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button GetData;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox TextEngineCapacity;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox TextSupplySystem;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox TextFuel;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox TextResource;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox TextOil;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox TextPowerDVS;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox TextExpenditure;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox TextModelEngine;
        private System.Windows.Forms.RichTextBox ShowData;
    }
}

