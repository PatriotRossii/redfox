#pragma once

#include <functional>

template<typename Output, typename... Input>
class Task {
public:
    Task(std::function<Output(Input...)> calculator)
       : calculator(calculator) { }
    Output operator()(Input... arguments) {
        return calculator(
            arguments...
        );
    }
private:
    std::function<Output(Input...)> calculator;
};
