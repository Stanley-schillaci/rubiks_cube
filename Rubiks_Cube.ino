



// Written By Nikodem Bartnik - nikodembartnik.pl
#include <LiquidCrystal.h>

int step_number = 0;
int step_number_reverse = 7;

typedef struct moteur
{
	int IN1;
	int IN2;
	int IN3;
	int IN4;
};

unsigned long myTime;
unsigned long Timeref;
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup()
{
	for (int i = 22; i < 53; i++)
	{
		pinMode(i, OUTPUT);
	}
	Serial.begin(9600);
	lcd.begin(16, 2);
}

void loop()
{
	if(digitalRead(2) != 0 && digitalRead(3) != 0)
	{
		lcd.begin(16, 2);
	}
	lcd.setCursor(0, 0);
	lcd.print("  Rubik's Cube  ");
	String Myresult = "";
  Myresult = Serial.readString();
	DoRotation(Myresult);
	lcd.setCursor(7, 1);
	lcd.print("Done     ");
}

void DoRotation(String str)
{
	int len = size(str);
	Timeref = millis();
	for(int i=0; i<len; i++){
		myTime = millis();
	  lcd.setCursor(0, 1);
		lcd.print((myTime - Timeref)/1000);
		lcd.print("s    ");
		lcd.setCursor(7, 1);
		lcd.print(i+1);
		lcd.print(" / ");
		lcd.print(len);
		if(i < len - 1){
		    if(Rotation(str[i],str[i+1]) == 1)
		    {
		    	i+=1;
		    }
		}else{
			Rotation(str[i],'p');
		}
		delay(2);
	}
}

int Rotation(char c, char r)
{
	int res = 0;
	struct moteur RotD =
	{
		30, 32, 34, 36
	};
	struct moteur RotR =
	{
		22, 24, 26, 28
	};
	struct moteur RotL =
	{
		23, 25, 27, 29
	};
	struct moteur RotB =
	{
		39, 41, 43, 45
	};
	struct moteur RotF =
	{
		38, 40, 42, 44
	};
	struct moteur RotU =
	{
		31, 33, 35, 37
	};
	Serial.println(c);
	switch (c)
	{
		case 'F':
			if(r == 'B')
			{
				TwoRotation(RotF,RotB,0,1);
				res = 1;
			}else if(r == 'b')
			{
				TwoRotation(RotF,RotB,0,0);
				res = 1;
			}else{
				OneRotation(RotF, 0);
			}
			break;
		case 'D':
			if(r == 'U')
			{
				TwoRotation(RotD,RotU,0,0);
				res = 1;
			}else if(r == 'u')
			{
				TwoRotation(RotD,RotU,0,1);
				res = 1;
			}else{
				OneRotation(RotD, 0);
			}
			break;
		case 'U':
			if(r == 'D')
			{
				TwoRotation(RotU,RotD,0,0);
				res = 1;
			}else if(r == 'd')
			{
				TwoRotation(RotU,RotD,0,1);
				res = 1;
			}else{
				OneRotation(RotU, 0);
			}
			break;
		case 'R':
			if(r == 'L')
			{
				TwoRotation(RotR,RotL,0,1);
				res = 1;
			}else if(r == 'l')
			{
				TwoRotation(RotR,RotL,0,0);
				res = 1;
			}else{
				OneRotation(RotR, 0);
			}
			break;
		case 'L':
			if(r == 'R')
			{
				TwoRotation(RotL,RotR,1,0);
				res = 1;
			}else if(r == 'r')
			{
				TwoRotation(RotL,RotR,1,1);
				res = 1;
			}else{
				OneRotation(RotL, 1);
			}
			break;
		case 'B':
			if(r == 'F')
			{
				TwoRotation(RotB,RotF,1,0);
				res = 1;
			}else if(r == 'f')
			{
				TwoRotation(RotB,RotF,1,1);
				res = 1;
			}else{
				OneRotation(RotB, 1);
			}
			break;
		case 'f':
			if(r == 'B')
			{
				TwoRotation(RotF,RotB,1,1);
				res = 1;
			}else if(r == 'b')
			{
				TwoRotation(RotF,RotB,1,0);
				res = 1;
			}else{
				OneRotation(RotF, 1);
			}
			break;
		case 'd':
			if(r == 'U')
			{
				TwoRotation(RotD,RotU,1,0);
				res = 1;
			}else if(r == 'u')
			{
				TwoRotation(RotD,RotU,1,1);
				res = 1;
			}else{
				OneRotation(RotD, 1);
			}
			break;
		case 'u':
			if(r == 'D')
			{
				TwoRotation(RotU,RotD,1,0);
				res = 1;
			}else if(r == 'd')
			{
				TwoRotation(RotU,RotD,1,1);
				res = 1;
			}else{
				OneRotation(RotU, 1);
			}
			break;
		case 'r':
			if(r == 'L')
			{
				TwoRotation(RotR,RotL,1,1);
				res = 1;
			}else if(r == 'l')
			{
				TwoRotation(RotR,RotL,1,0);
				res = 1;
			}else{
				OneRotation(RotR, 1);
			}
			break;
		case 'l':
			if(r == 'R')
			{
				TwoRotation(RotL,RotR,0,0);
				res = 1;
			}else if(r == 'r')
			{
				TwoRotation(RotL,RotR,0,1);
				res = 1;
			}else{
				OneRotation(RotL, 0);
			}
			break;
		case 'b':
			if(r == 'F')
			{
				TwoRotation(RotB,RotF,0,0);
				res = 1;
			}else if(r == 'f')
			{
				TwoRotation(RotB,RotF,0,1);
				res = 1;
			}else{
				OneRotation(RotB, 0);
			}
			break;
	}
	disablemotor(RotF);
	disablemotor(RotD);
	disablemotor(RotU);
	disablemotor(RotB);
	disablemotor(RotL);
	disablemotor(RotR);
	return res;
}

void OneRotation(struct moteur Moteur, int rot)
{
	int delayTime = 1;
	if (rot == 0)
	{
		for (int Tour = 0; Tour < 128; Tour++)
		{
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
		}
	}
	else
	{
		for (int Tour = 0; Tour < 128; Tour++)
		{
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
		}
	}
}

void TwoRotation(struct moteur Moteur,struct moteur Reverse, int rot, int rotR)
{
	int delayTime = 1;
	if (rot == 0 && rotR == 0)
	{
		for (int Tour = 0; Tour < 128; Tour++)
		{	
			myTime = millis();
	   		lcd.setCursor(0, 1);
			lcd.print((myTime - Timeref)/1000);
			lcd.print("s");
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
		}
	}
	else if (rot == 1 && rotR == 1)
	{
		for (int Tour = 0; Tour < 128; Tour++)
		{
			myTime = millis();
	    	lcd.setCursor(0, 1);
			lcd.print((myTime - Timeref)/1000);
			lcd.print("s");
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
		}
	}else if(rot == 0 && rotR == 1)
	{
		for (int Tour = 0; Tour < 128; Tour++)
		{
			myTime = millis();
	    	lcd.setCursor(0, 1);
			lcd.print((myTime - Timeref)/1000);
			lcd.print("s");
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			delay(delayTime);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			delay(delayTime);
		}
	}else if(rot == 1 && rotR == 0)
	{
		for (int Tour = 0; Tour < 128; Tour++)
		{
			myTime = millis();
	    	lcd.setCursor(0, 1);
			lcd.print((myTime - Timeref)/1000);
			lcd.print("s");
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, LOW);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, HIGH);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, HIGH);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, LOW);
			digitalWrite(Moteur.IN1, LOW);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, HIGH);
			digitalWrite(Reverse.IN4, HIGH);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, HIGH);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Reverse.IN1, LOW);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, LOW);
			delay(delayTime);
			digitalWrite(Reverse.IN1, HIGH);
			digitalWrite(Reverse.IN2, LOW);
			digitalWrite(Reverse.IN3, LOW);
			digitalWrite(Reverse.IN4, HIGH);
			digitalWrite(Moteur.IN1, HIGH);
			digitalWrite(Moteur.IN2, LOW);
			digitalWrite(Moteur.IN3, LOW);
			digitalWrite(Moteur.IN4, HIGH);
			delay(delayTime);
		}
	}
}

int size(String arr)
{
	int res = 0;
	while (arr[res] != '\0')
	{
		res++;
	}
	return res;
}

void disablemotor(struct moteur Moteur)
{
	digitalWrite(Moteur.IN1, LOW);
	digitalWrite(Moteur.IN2, LOW);
	digitalWrite(Moteur.IN3, LOW);
	digitalWrite(Moteur.IN4, LOW);
}
