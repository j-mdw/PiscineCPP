#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(const int v1);
	~Sample(void);
	
	const int	i;
	int			j;
	void		pprint(void) const;
	int			getk(void) const;
	void		setk(int val);
	void		printcount(void);

private:

	int			_k;
	void		_ppprint(void) const;
	static int	_count;
};

#endif
