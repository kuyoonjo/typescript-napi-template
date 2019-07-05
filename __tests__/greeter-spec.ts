import { Greeter } from '../src/';

test('Should greet with message', () => {
  const greeter = new Greeter('friend');
  expect(greeter.greet('Bonjour')).toBe('Bonjour, friend!');
});
