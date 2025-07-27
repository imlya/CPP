#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("", 145, 137)
{
	target = _target.append("_shruberry");
	std::ofstream outputfile(target);
	if (!outputfile.is_open())
	{
		std::cerr << "error : Open file failed." << std::endl;
		exit(EXIT_FAILURE);
	}
	outputfile << ASCII
}
PresidentialPardonForm::~PresidentialPardonForm() {}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
}

std::ostream& operator<<(std::ostream& flux, AForm const& form)
{
	flux << "Presidential Form " << form.getName() << ", Grade to sign " << form.get_signGrade()
		<< ", Grade to execute " <<  form.get_executeGrade()
		<< ", is signed ? " << (form.getSigned() ? "Yes" : "No") << std::endl;
	return (flux);
}