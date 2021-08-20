#ifndef NAMEMATRIX_H
#define NAMEMATRIX_H

#include <string>
#include <QString>


class NameMatrix //random array with 100 prefixes and 100 suffixes to generate random user names
{
    std::string randomNameArray[200] = {"Horrible", "Short","Pleasing", "Thoughtless","Cross", "Justice", "Brutal", "Shroud", "Soft","Determined","Deep","Outrageous","Purity","Orange","Hundreds","Hot","Sizable","Functional","Failing",
            "Juvenile","Misty","Sunrise","Thug","Determined","Skinny","Profuse","Quaint","Large","One","Darkness","Young","Obligation","Busy","Awkward","Scary","Foolish","Enough","Glossy","Full","Illegal",
            "Bizarre","Chilly","Weak", "Gold","Salty","Pretty","Pipe","Greasy","Hollow","Happy","Little","Devil","Pink","Miniature","Quizzical","Window","Dry","Laughter","Profit","Metal","Main","Cleverness","Stormy",
            "Poison","Limited","Courageous","Unceasing","End","Shaggy","Mammoth","Lively","Historical","Obsolete","Exuberant","Long","Eight","Restless","Firey","Ugliness","Whisper","Grotesque","Low","Crow",
            "Law","Frozen","Crab","Grim","Lengthy","Moral","Disastrous","Mission","Achievable","Violet","Silly","Thundering","Comfort","Quaint","Cobra","Slippery","Acceptance","Ape","Apparition","Badger",
            "Bear","Boldness","Card","Camera","Cat","Chair", "Chalice","Chestnut","Clarity","Deceit","Dedication","Delivery","Demon","Detestation","Discovery","Dolphin","Drummer","Drink","Dragon","Emotion",
            "End","Error","Failure","Fake","Father","Flesh","Folly","Fortress","Foulness","Freedom","Glass","Hatred","Hope","Horn","Horse","Hound","Immaturity","Impropriety","Indignity","Insanity","Job",
            "Lake","Legality","Letter","Lion","Loathsomeness","Mansion","Mission","Moon","Mortal","Mud","Math","Necessity","Nose","Notion","Object","Objectivity","Obligation","Octopus","Offal","Parody",
            "Parrot","Path", "Patience","Patriotism","Phantasm","Place","Quality","Rain","Recovery","Resilience","Revenge","Robe","River","Sense","Sentiment","Shadow","Shove","Shovel","Shrewdness","Snout",
            "Storyteller","Street","Surplus","Table","Tear","Temper","Tempest","Trust","Tunnel","Use","Volume","Walk","Wall","Willingness","Wolf"  };
    int randomOne, randomTwo;
    QString chosenName;

public:

    NameMatrix();

    QString RandomNameFunction(){ //randoms two slots in the randomnamearray and concatenates a string with both for the random username

        randomOne = (rand()%100); //random int 0-99
        randomTwo = (rand()%100) + 100; //random int 100-199
        chosenName = QString::fromStdString(randomNameArray[randomOne] +""+randomNameArray[randomTwo]); //concatenate randomed prefix and suffix

        return chosenName;
    }



};

#endif // NAMEMATRIX_H



