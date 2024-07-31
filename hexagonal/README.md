This is the base structure to use Hexagonal Architecture in C.

For this example I'll use a Typewriter

I Like Hexagonal Arch because is a way to keep the current implementation and it is possible to do new additions.

For this project I'll provide two ports. 
The inbound port will be Input
The outbound port will be Output

Very original. No?

The application is quite simple.
We receive an input and we transform in lowercase and send to the output.

The application is ready. But we need to provide some way to get this input.
And an output to print the new message. The print here is just a matter of choice

Could be a file, a notification, anything you want.

To implement the adapter for input I'll implement a keyboard
To implement the adapter for output I'll implement a Display

No we need to implement the port. Another fancy name for interface.

It worked!!!!!!

Now let's see if is possible to change to UDP

TO handle UDP I'll use my library sat.

See!!! We changed the tecnology and We didn't lose the keyboard implementation.
It was just swichted. I'm not sure if that work exists.

So let more cool. I can add a factory to select if will be keyboard or udp let's do it.

Well now we have a solid example of Hexagonal Architecture in C. Enjoy!!! Bye.