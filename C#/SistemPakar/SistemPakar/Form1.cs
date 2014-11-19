using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SistemPakar
{
    public partial class Form1 : Form
    {
        List<int> ListJawab = new List<int>();
        List<int> ListDemamBerdarahDenque = new List<int>() {1,2,3,4,5,6,7};   
        List<int> ListDemamPenyakitKuning = new List<int>() { 1,4,8,9,10,11,12};
        List<int> ListChikungunya = new List<int>() { 1,11,13,14,15,16, 17 };
        List<int> ListEncephalitis = new List<int>() { 1,4,17,18,19,20,21 };
        List<int> ListMalaria = new List<int>() { 1,2,4,6,8  }; 


        public Form1()
        {
            InitializeComponent();
        }

        private void btnCek_Click(object sender, EventArgs e)
        {
            //Clear ListJawab
            ListJawab.Clear();
            //Add TextBox To List int
             for (int x = 0;  x < txtJwb.Lines.Length; x++)
                ListJawab.Add(Int32.Parse(txtJwb.Lines[x]));

            //Cek Penyakit
             showPesanPenyakit();



        }

        private void button1_Click(object sender, EventArgs e)
        {
            //Clear ListJawab
            ListJawab.Clear();
            //Check CheckBox
            if (checkBox1.Checked)
            {
                 ListJawab.Add(1);
            }
            if (checkBox2.Checked)
            {
                ListJawab.Add(2);
            }
            if (checkBox3.Checked)
            {
                ListJawab.Add(3);
            }
            if (checkBox4.Checked)
            {
                ListJawab.Add(4);
            }
            if (checkBox5.Checked)
            {
                ListJawab.Add(5);
            }
            if (checkBox6.Checked)
            {
                ListJawab.Add(6);
            }
            if (checkBox7.Checked)
            {
                ListJawab.Add(7);
            }
            if (checkBox8.Checked)
            {
                ListJawab.Add(8);
            }
            if (checkBox9.Checked)
            {
                ListJawab.Add(9);
            }

            //Cek Penyakit
            showPesanPenyakit();
        }

        private void showPesanPenyakit()
        {
            //Cek Penyakit
            if (UnorderedEqual(ListJawab, ListDemamBerdarahDenque))
            {
                MessageBox.Show("Anda Menderita : Demam Berdarah Denque ");
            }
            else if (UnorderedEqual(ListJawab, ListDemamPenyakitKuning))
            {
                MessageBox.Show("Anda Menderita : Demam Penyakit Kuning ");
            }
            else if (UnorderedEqual(ListJawab, ListChikungunya))
            {
                MessageBox.Show("Anda Menderita : Chikungunya ");
            }
            else if (UnorderedEqual(ListJawab, ListEncephalitis))
            {
                MessageBox.Show("Anda Menderita : Encephalitis ");
            }
            else if (UnorderedEqual(ListJawab, ListMalaria))
            {
                MessageBox.Show("Anda Menderita : Malaria ");
            }
            else
            {
                MessageBox.Show("Penyakit Anda Tidak Terdeteksi");
            }

        }

        static bool UnorderedEqual<T>(ICollection<T> a, ICollection<T> b)
        {
            // 1
            // Require that the counts are equal
            if (a.Count != b.Count)
            {
                return false;
            }
            // 2
            // Initialize new Dictionary of the type
            Dictionary<T, int> d = new Dictionary<T, int>();
            // 3
            // Add each key's frequency from collection A to the Dictionary
            foreach (T item in a)
            {
                int c;
                if (d.TryGetValue(item, out c))
                {
                    d[item] = c + 1;
                }
                else
                {
                    d.Add(item, 1);
                }
            }
            // 4
            // Add each key's frequency from collection B to the Dictionary
            // Return early if we detect a mismatch
            foreach (T item in b)
            {
                int c;
                if (d.TryGetValue(item, out c))
                {
                    if (c == 0)
                    {
                        return false;
                    }
                    else
                    {
                        d[item] = c - 1;
                    }
                }
                else
                {
                    // Not in dictionary
                    return false;
                }
            }
            // 5
            // Verify that all frequencies are zero
            foreach (int v in d.Values)
            {
                if (v != 0)
                {
                    return false;
                }
            }
            // 6
            // We know the collections are equal
            return true;
        }

        private void txtJwb_TextChanged(object sender, EventArgs e)
        {

        }

      
    }
}
