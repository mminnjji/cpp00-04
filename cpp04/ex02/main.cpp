#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const int ARRAY_SIZE = 4;
    AAnimal* AAnimals[ARRAY_SIZE];

    // Fill half with Dogs and the other half with Cats
    for (int i = 0; i < ARRAY_SIZE / 2; ++i)
    {
        AAnimals[i] = new Dog();
    }

    for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i)
    {
        AAnimals[i] = new Cat();
    }

    //deepcopy test
	Dog originalDog;

    Dog copiedDog = originalDog;
	std::string copyStrd = "Copied dog idea";
    copiedDog.getBrain()->setIdeas(copyStrd);

	std::string oriStrd = "new dog idea";
    originalDog.getBrain()->setIdeas(oriStrd);

	std::cout << "Original dog brain idea: " << originalDog.getBrainIdeas() << std::endl;
    std::cout << "Copied dog brain idea: " << copiedDog.getBrainIdeas() << std::endl;

	Cat originalCat;

    Cat copiedCat = originalCat;
	std::string copyStrc = "Copied Cat idea";
    copiedCat.getBrain()->setIdeas(copyStrc);

	std::string oriStrc = "new Cat idea";
    originalCat.getBrain()->setIdeas(oriStrc);

	std::cout << "Original Cat brain idea: " << originalCat.getBrainIdeas() << std::endl;
    std::cout << "Copied Cat brain idea: " << copiedCat.getBrainIdeas() << std::endl;



    // Loop over the array and delete every AAnimal
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        delete AAnimals[i];
    }
    return 0;
}
