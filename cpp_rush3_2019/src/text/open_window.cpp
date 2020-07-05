/*
** EPITECH PROJECT, 2020
** open_window.cpp
** File description:
** open_window
*/

#include "open_window.hpp"

std::string print_line(std::string line, int color)
{
    attron(COLOR_PAIR(color));
    printw(line.c_str());
    line = "";

    return line;
}

void create_swap(RAM _ram, std::string line, int nbr)
{
    line = "Swp [";
    nbr = _ram.getPercentageSwap() / 2;
    int i = 0;
    line = print_line(line, 3);
    for (; i < nbr; i++)
        line += "|";
    line = print_line(line, 1);
    for (; i <= 50; i++)
        line += " ";
    line = print_line(line, 4);
    line += _ram.getSwapUsage();
    line += '/';
    line += _ram.getSwapSize();
    line += "G]";
    line += "\n";
    line = print_line(line, 3);

    attron(COLOR_PAIR(2));
}

void create_ram()
{
    RAM _ram = RAM();
    std::string line = "RAM [";
    int nbr = _ram.getPercentageMemory() / 2;
    int i = 0;

    line = print_line(line, 3);
    for (; i < nbr; i++)
        line += "|";
    line = print_line(line, 4);
    for (; i <= 50; i++)
        line += " ";
    line = print_line(line, 1);
    line += _ram.getMemoryUse();
    line += '/';
    line += _ram.getTotalMemory();
    line += "G]";
    line += '\n';
    line = print_line(line, 3);
    create_swap(_ram, line, nbr);
}

void print_sys()
{
    std::string line;
    System _sys = System();

    line += "System     :   ";
    line = print_line(line, 3);
    line += _sys.getName();
    line = print_line(line, 4);
    line += "   ";
    line += "       Kernel     :    ";
    line = print_line(line, 3);
    line += _sys.getVersion();
    line += "\n";
    line = print_line(line, 4);
}

void print_date()
{
    Date _date = Date();
    UpTime _up = UpTime();
    std::string line;

    line += "Date       :   ";
    line = print_line(line, 3);
    line += _date.getDate();
    line = print_line(line, 4);
    line += "   ";
    line += "  Time       :  ";
    line = print_line(line, 3);
    line += _date.getTime();
    line = print_line(line, 4);
    line += "   UpTime:  ";
    line = print_line(line, 3);
    line += _up.getUpTime();
    line = print_line(line, 4);
}

void create_info()
{
    std::string line;
    User _user = User();

    line += "Hostname   :   ";
    line = print_line(line, 3);
    line += _user.getHostname();
    line += '\n';
    line = print_line(line, 4);
    line += "Username   :   ";
    line = print_line(line, 3);
    line += _user.getUsername();
    line += '\n';
    line = print_line(line, 4);
    print_sys();
    print_date();
    line += "\n\n\n";
    printw(line.c_str());
}

void create_chor(CPU *cpu)
{
    std::string line;
    int nbr;
    int j;

    cpu->ReadStatsCore();

    for (int i = 1; i <= cpu->getNbHeart(); i++)
    {
        nbr = std::stoi(cpu->PrintCore(i));
        nbr /= 2;
        j = 0;
        line += std::to_string(i);
        line += " [";
        line = print_line(line, 3);
        for (; j < nbr; j++)
        {
            if (j < 25)
            {
                line += "|";
                line = print_line(line, 4);
            }
            else if (j >= 25 && j < 40)
            {
                line += "|";
                line = print_line(line, 5);
            }
            else
            {
                line += "|";
                line = print_line(line, 1);
            }
        }
        line = print_line(line, 4);
        for (; j <= 50; j++)
            line += " ";
        line = print_line(line, 1);
        line = print_line(line, 4);
        line = print_line(cpu->PrintCore(i), 3);
        line += "%]"; //AJOUTER AVANT CETTE LIGNE LE POURCENTAGE AVEC LE %%
        line = print_line(line, 3);

        if (i % 2 == 0)
            line += "\n";
        else
            line += "           ";
    }
    cpu->setShift();
    cpu->_core1.clear();
    cpu->_core2.clear();
    printw("\n\n\n");
    printw("CPU\tModel Name\tFrequencies in MHz\n", 4);
    print_line(cpu->getFrequency(), 3);
    printw("\n\n\n");
}

void create_network(Networks *networks)
{
    std::string line = "Interfaces :    Rx bps  pps     Tx bps  pps";
    line = print_line(line, 3);
    printw("\n");
    networks->setStatsNetwork();
    int nbr = networks->getNumberNetworks();

    for (int i = 0; i < nbr; i++)
    {
        line += "   ";
        line += networks->_network[i].getName(); // A CHANGER AVEC LA VALEUR DE INTERFACES
        line = print_line(line, 4);
        line += "   \t";
        line += networks->_network[i].getReceiveSpeed(); // A CHANGER AVEC LA VALEUR DE BPS
        line = print_line(line, 4);
        line += "   \t";
        line += networks->_network[i].getReceivePPS(); // A CHANGER AVEC LA VALEUR DE PPS
        line = print_line(line, 4);
        line += "   \t";
        line += networks->_network[i].getTransmitSpeed(); // A CHANGER AVEC LA VALEUR DE BPS
        line = print_line(line, 4);
        line += "   \t";
        line += networks->_network[i].getTransmitPPS(); // A CHANGER AVEC LA VALEUR DE PPS
        line = print_line(line, 4);
        printw("\n");
    }
    printw("\n\n");
}

void create_env()
{
    std::string line = "PID USER    PRI NI  VIRT    RES     SHR S   CPU%    MEM%    TIME+   Command";
    line = print_line(line, 6);
    printw("\n");
    int nbr = 5; // A CHANGER AVEC LE NOMBRE DE LIGNE

    for (int i = 0; i < nbr; i++)
    {
        line += "   ";
        line += "toto_name"; // A CHANGER AVEC LA VALEUR DE INTERFACES
        line = print_line(line, 4);
        line += "   ";
        line += "toto_name"; // A CHANGER AVEC LA VALEUR DE BPS
        line = print_line(line, 4);
        line += "   ";
        line += "toto_name"; // A CHANGER AVEC LA VALEUR DE PPS
        line = print_line(line, 4);
        line += "   ";
        line += "toto_name"; // A CHANGER AVEC LA VALEUR DE BPS
        line = print_line(line, 4);
        line += "   ";
        line += "toto_name"; // A CHANGER AVEC LA VALEUR DE PPS
        line = print_line(line, 4);
        printw("\n");
    }
    printw("\n\n");
}

void setValuesNetworkCPU(Networks *networks, CPU *cpu)
{
    networks->setStatsNetwork();
    cpu->ReadStatsCore();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void open_window()
{
    int ch;

    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLACK);
    init_pair(4, COLOR_GREEN, COLOR_BLACK);
    init_pair(5, COLOR_YELLOW, COLOR_BLACK);
    init_pair(6, COLOR_BLACK, COLOR_GREEN);
    keypad(stdscr, TRUE);
    noecho();
    wtimeout(stdscr, 500);
    Networks networks;
    CPU cpu;

    while (1)
    {
        clear();
        setValuesNetworkCPU(&networks, &cpu);
        create_info();
        create_ram();
        create_chor(&cpu);
        create_network(&networks);
        create_env();
        ch = getch();
        if (ch == 'q')
        {
            endwin();
            break;
        }
        refresh();
    }
    return;
}