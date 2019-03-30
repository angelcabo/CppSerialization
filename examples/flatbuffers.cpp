/*!
    \file flatbuffers.cpp
    \brief FlatBuffers serialization example
    \author Ivan Shynkarenka
    \date 03.03.2017
    \copyright MIT License
*/

#include "../proto/fonts.h"

#include <iostream>

int main(int argc, char** argv)
{
    // Create a new account with some orders
    FontsProto::Account account(1, "Test", "USD", 1000);
    account.Orders.emplace_back(FontsProto::Order(1, "EURUSD", FontsProto::OrderSide::BUY, FontsProto::OrderType::MARKET, 1.23456, 1000));
    account.Orders.emplace_back(FontsProto::Order(2, "EURUSD", FontsProto::OrderSide::SELL, FontsProto::OrderType::LIMIT, 1.0, 100));
    account.Orders.emplace_back(FontsProto::Order(3, "EURUSD", FontsProto::OrderSide::BUY, FontsProto::OrderType::STOP, 1.5, 10));

    // Serialize the account to the FlatBuffer stream
    flatbuffers::FlatBufferBuilder builder;
    builder.Finish(account.Serialize(builder));

    // Show the serialized FlatBuffer size
    std::cout << "FlatBuffer size: " << builder.GetSize() << std::endl;

    // Deserialize the account from the FlatBuffer stream
    FontsProto::Account deserialized;
    deserialized.Deserialize(*Trade::flatbuf::GetAccount(builder.GetBufferPointer()));

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
