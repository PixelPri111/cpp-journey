/*
1) For taking input we can use either getline() or cin:

(i) cin >> variable

cin reads input only until the first whitespace(space, tab or newline).
for eg:  
-code: string name; cin >> name;
-input: Priyasha Goyal
-only Priyasha gets stored in name

#so use cin >> when we are reading a single word, nos(int,float etc) and simple inputs without spaces

(ii) getline (cin, variable)

it reads the entire line, including spaces until Enter is pressed.
for eg:
-code: string name; getline(cin,name);
-input: Priyasha Goyal
-entire input gets stored in name

#so use getline() when we are reading full names, addresses, sentences and anything that may contain spaces
*/