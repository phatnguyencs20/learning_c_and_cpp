#include<iostream>
#include <string>

class Invoice
{
    public:
    //add a constructor to initializes four data members
    explicit Invoice( std::string number, std::string description, int quan, int pr )
    {
        setPartNumber( number );
        setPartDescription( description );
        setQuantity( quan );
        setPrice( pr );
    }

    //implementation for set&getf of part_number data member
    void setPartNumber( std::string number )
    {
        part_number = number;
    }
    std::string getPartNumber()
    {
        return part_number;
    }

    //implementation for set&getf of part_description data member
    void setPartDescription( std::string description )
    {
        part_description = description;
    }
    std::string getPartDescription()
    {
        return part_description;
    }

    //implementation for set&getf of quantity data member
    void setQuantity( int quan )
    {
        if( quan >= 0 )
            quantity = quan;
        else
        {
            quantity = 0;
            std::cerr << "Invalid quantity!\n";
        }
    }
    int getQuantity()
    {
        return quantity;
    }

    //implementation for set&getf of price data member
    void setPrice( int pr )
    {
        if( pr >= 0 )
            price = pr;
        else
        {
            price = 0;
            std::cerr << "Invalid price\n";
        }  
    }
    int getPrice()
    {
        return price;
    }
    int getInvoiceAmount()
    {
        if( getQuantity() >= 0 && getPrice() >= 0)
            return getQuantity() * getPrice();
        else
            return 0;
    }

    private:
    std::string part_number;
    std::string part_description;
    int quantity;
    int price;
};

int main()
{
    Invoice o1( "Hello, world", "0x124", 23, 46 );
    int b = o1.getInvoiceAmount();
    std::cout << b;
}