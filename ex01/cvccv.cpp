while (true)
	{
		if (!(std::cin >> index))
		{
			if (std::cin.eof())
				return ;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout<<"Error! Invalid input. Please enter a valid number: ";
			continue;
		}
		if (std::cin.eof())
			return ;
		if (index < 1 || index > contactNum)
		{
			std::cout<<"Invalid index. Enter a number between 1 and "<<contactNum<<": ";
			continue;
		}
		if (contacts[index-1].getFirstName()=="")
		{
			std::cout<<"Index does not exist!!! Try again"<<std::endl;
			continue;
		}
		break;
	}