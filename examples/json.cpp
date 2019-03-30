/*!
    \file json.cpp
    \brief JSON serialization example
    \author Ivan Shynkarenka
    \date 24.02.2017
    \copyright MIT License
*/

#include "../proto/fonts.h"

#include "serialization/json/parser.h"

#include <iostream>

int main(int argc, char** argv)
{
    // Create a new account with some orders
    FontsProto::Account account(1, "Test", "USD", 1000);
    account.Orders.emplace_back(FontsProto::Order(1, "EURUSD", FontsProto::OrderSide::BUY, FontsProto::OrderType::MARKET, 1.23456, 1000));
    account.Orders.emplace_back(FontsProto::Order(2, "EURUSD", FontsProto::OrderSide::SELL, FontsProto::OrderType::LIMIT, 1.0, 100));
    account.Orders.emplace_back(FontsProto::Order(3, "EURUSD", FontsProto::OrderSide::BUY, FontsProto::OrderType::STOP, 1.5, 10));

    // Serialize the account to the JSON stream
    CppSerialization::JSON::StringBuffer buffer;
    CppSerialization::JSON::Serializer<CppSerialization::JSON::StringBuffer> serializer(buffer);
    account.Serialize(serializer);

    // Show the serialized JSON content
    std::cout << "JSON content: " << buffer.GetString() << std::endl;
    // Show the serialized JSON size
    std::cout << "JSON size: " << buffer.GetSize() << std::endl;

    // Parse JSON string
    CppSerialization::JSON::Document json = CppSerialization::JSON::Parser::Parse(buffer.GetString());

    // Deserialize the account from the JSON stream
    FontsProto::Account deserialized;
    deserialized.Deserialize(json);

    // Show account content
    std::cout << std::endl;
    std::cout << "Account.Id = " << deserialized.Id << std::endl;
    std::cout << "Account.Name = " << deserialized.Name << std::endl;
    std::cout << "Account.Wallet.Currency = " << deserialized.Wallet.Currency << std::endl;
    std::cout << "Account.Wallet.Amount = " << deserialized.Wallet.Amount << std::endl;
    for (const auto& order : deserialized.Orders)
    {
        std::cout << "Account.Order => Id: " << order.Id
            << ", Symbol: " << order.Symbol
            << ", Side: " << (int)order.Side
            << ", Type: " << (int)order.Type
            << ", Price: " << order.Price
            << ", Volume: " << order.Volume
            << std::endl;
    }

    return 0;
}
