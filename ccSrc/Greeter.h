#pragma once

#include <napi.h>

class Greeter : public Napi::ObjectWrap<Greeter>
{
public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);
    Greeter(const Napi::CallbackInfo &);
    Napi::Value Greet(const Napi::CallbackInfo &);

private:
    static Napi::FunctionReference constructor;
    std::string _greeterName;
};
