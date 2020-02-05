using System.Windows.Forms;

namespace ManagedLibrary
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public void SetMessageText(string message)
        {
            txtMessage.Text = message;
        }
    }
}
