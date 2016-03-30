int ditLen = 60;
int dashLen = 260;
int dashspaceLen = 80;
int ditspaceLen = 125;
int outputPin = 13;

void setup()
{
      pinMode(outputPin, OUTPUT);
	  Serial.begin(9600);
	  Serial.print("Please enter characters at the prompt");
}

void dash ()
{
    digitalWrite(outputPin,HIGH);
	delay(dashLen);
	digitalWrite(outputPin,LOW);
	delay(dashspaceLen);
	Serial.print("DASH\r\n");
}

void dit ()
{
    digitalWrite(outputPin,HIGH);
	delay(ditLen);
	digitalWrite(outputPin,LOW);
	delay(ditspaceLen);
	Serial.print("DIT\r\n");
}

void pause ()
{
	delay(dashLen);
}

void american_zero ()
{
	digitalWrite(outputPin,HIGH);
	delay(1500);
	digitalWrite(outputPin,LOW);
	delay(ditspaceLen);
	Serial.print("0\r\n");
}

void american_l ()
{
	digitalWrite(outputPin,HIGH);
	delay(860);
	digitalWrite(outputPin,LOW);
	delay(ditspaceLen);
	Serial.print("L\r\n");
}
void loop()
{
    char(c);

	 
    if(Serial.available())
	{
	    Serial.print(" ---> ");
	    c = Serial.read();
	    Serial.print("You entered --> ");
        Serial.print(c);
	    Serial.print("\r\n");	
		
		switch(c)
		{
			case 'a':
				dit();dash();
				break;
			case 'b':
				dash();dit();dit();dit();
				break;
			case 'c':
			    dit();dit();pause();dit();
				break;
			case 'd':
			    dash();dit();dit();
				break;
			case 'e':
			    dit();
				break;
			case 'f':
			    dit();dash();dit();
				break;
			case 'g':
			    dash();dash();dit();
				break;
			case 'h':
				dit();dit();dit();dit();
				break;
			case 'i':
				dit();dit();
				break;
			case 'j':
				dash();dit();dash();dit();
				break;
			case 'k':
				dash();dit();dash();
				break;
			case 'l':
				american_l();
				break;
			case 'm':
				dash();dash();
				break;
			case 'n':
				dash();dit();
				break;
		    case 'o':
                dash();dash();dash();
		    break;
			case 'p':
				dit();dit();dit();dit();dit();
				break;
			case 'q':
				dit();dit();dash();dit();
			case 'r':
				dit();pause();dit();dit();
				break;
			case 's':
			    dit();dit();dit();
				break;
			case 't':
				dash();
				break;
			case 'u':
				dit();dit();dash();
				break;
			case 'v':
				dit();dit();dit();dash();
				break;
			case 'w':
				dit();dash();dash();
				break;
			case 'x':
				dit();dash();dit();dit();
				break;
			case 'y':
				dit();dit();pause();dit();dit();
				break;
			case 'z':
				dit();pause();dit();dit();dit();
				break;
			case '1':
				dit();dash();dash();dit();
				break;
			case '2':
				dit();dit();dash();dit();dit();
				break;
			case '3':
				dit();dit();dit();dash();dit();
				break;
			case '4':
				dit();dit();dit();dit();dash();
				break;
			case '5':
				dash();dash();dash();
				break;
			case '6':
				dit();dit();dit();dit();dit();dit();
				break;
			case '7':
				dash();dash();dit();dit();
				break;
			case '8':
				dash();dit();dit();dit();dit();
				break;
			case '9':
				dash();dit();dit();dash();
				break;
			case '0':
				american_zero();		
		}
    }
} 
