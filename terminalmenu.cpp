#include "terminalmenu.h"
#include <iostream>

TerminalMenu::TerminalMenu() {
    m_header = "Welcome to the terminal menu!";
    m_footer = "Please select an option.";
}

TerminalMenu::TerminalMenu(std::vector<std::string> options) : m_options(std::move(options))
{
    m_header = "Welcome to the terminal menu!";
    m_footer = "Please select an option.";

    // Add an exit option to the menu.
    m_exitOption = "Exit";
    m_options.push_back(m_exitOption);
    m_exitMessage = "Goodbye!";
    m_exitPrompt = "Are you sure you want to exit?";
    m_exitHeader = "Exit Menu";

    // Set the prompt message.
    m_prompt = "Enter the number of the option you would like to select: ";
}

void TerminalMenu::display()
{
    // Open a system terminal and display the menu.
    // This is a placeholder for the actual implementation.
    std::cout << m_header << std::endl;
    for (size_t i = 0; i < m_options.size(); ++i) {
        std::cout << i + 1 << ". " << m_options[i] << std::endl;
    }
    std::cout << m_footer << std::endl;
}
