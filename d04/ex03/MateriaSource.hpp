#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

public:

    MateriaSource(void);
    MateriaSource(MateriaSource const & src);
    ~MateriaSource(void);

    MateriaSource &  operator=(MateriaSource const & src);

	void learnMateria(AMateria*);
	AMateria * createMateria(std::string const & type);
    AMateria * getMateria(int idx) const;
    int        getMatCount(void) const;

private:
    AMateria *  mArr[4];
    int         materiaCount;
    void        delMateria(void);
};

#endif
