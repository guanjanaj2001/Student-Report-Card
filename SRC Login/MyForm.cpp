#include "MyForm.h" // Assuming MyForm6.h defines the MyForm6 class

using namespace OnlineStudentReportCardSystem; // Assuming this namespace holds your application logic
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    try {
        // Create an instance of your MyForm6 class
        MyForm^ form = gcnew MyForm();

        // Make sure MyForm6 is properly defined and accessible (refer to previous tips)
        if (form != nullptr) {
            // Run the application with the form instance
            Application::Run(form);
        }
        else {
            MessageBox::Show("Failed to create MyForm6 instance!",
                "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (Exception^ ex) {
        // Handle any unhandled exceptions gracefully
        MessageBox::Show("An error occurred: " + ex->Message,
            "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    return 0;
}

