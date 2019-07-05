#include "Greeter.h"

using namespace Napi;

Napi::FunctionReference Greeter::constructor;

Napi::Object Greeter::Init(Napi::Env env, Napi::Object exports)
{
  Napi::HandleScope scope(env);

  Napi::Function func = DefineClass(env, "Greeter", {
                                                        InstanceMethod("greet", &Greeter::Greet),
                                                    });

  constructor = Napi::Persistent(func);
  constructor.SuppressDestruct();

  exports.Set("Greeter", func);
  return exports;
}

Greeter::Greeter(const Napi::CallbackInfo &info) : ObjectWrap(info)
{
  Napi::Env env = info.Env();

  if (info.Length() < 1)
  {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
    return;
  }

  if (!info[0].IsString())
  {
    Napi::TypeError::New(env, "You need to name yourself")
        .ThrowAsJavaScriptException();
    return;
  }

  this->_greeterName = info[0].As<Napi::String>().Utf8Value();
}

Napi::Value Greeter::Greet(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();

  if (info.Length() < 1)
  {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
    return env.Null();
  }

  if (!info[0].IsString())
  {
    Napi::TypeError::New(env, "You need to introduce yourself to greet")
        .ThrowAsJavaScriptException();
    return env.Null();
  }

  Napi::String name = info[0].As<Napi::String>();

  return Napi::String::New(env, name.Utf8Value() + ", " + this->_greeterName + "!");
}
