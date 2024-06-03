#ifndef TERMINALMENU_H
#define TERMINALMENU_H
#include <string>
#include <vector>

class TerminalMenu
{
    /*
    * This class is a menu for the terminal.
    * It is meant to be used to display a menu in the terminal.
    */
public:
    TerminalMenu();
    TerminalMenu(std::vector<std::string> options);
    void display();
private:
    std::vector<std::string> m_options;
    std::string m_header;
    std::string m_footer;
    std::string m_prompt;
    std::string m_exitOption;
    std::string m_exitMessage;
    std::string m_exitPrompt;
    std::string m_exitHeader;
};

#endif // TERMINALMENU_H
