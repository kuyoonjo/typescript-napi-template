export declare class Greeter {
  constructor(name: string);
  public greet(strName: string): string;
}

const addon = require('../build/Release/addon');
module.exports = addon;
