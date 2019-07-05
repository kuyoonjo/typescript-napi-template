#include <napi.h>
#include "Greeter.h"

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  return Greeter::Init(env, exports);
}

NODE_API_MODULE(addon, Init)