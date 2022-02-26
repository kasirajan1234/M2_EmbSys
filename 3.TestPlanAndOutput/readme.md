# TEST PLAN
  |TEST ID|DESCRIPTION|INPUT|EXPECTED OUTPUT|ACTUAL OUTPUT|PASSED OR NOT|
  |:----:|:---------:|:----:|:------------:|:------------:|:----------:|
  |HLR1|Alexa|Light 1|Light 1 ON|Light ON|Pass|
  |HLR2|Alexa|Fan|Fan ON|Fan ON|Pass|
  |HLR3|Alexa|Light 2|Light 2 ON|Light 2 ON|Pass|
  |HLR4|Alexa|Fan|Fan OFF|Fan OFF|Pass|
  |HLR5|Alexa|Light 1|Light 1 OFF|Light 1 OFF|Pass|
  |HLR6|Thermistor|Room Temperature 26°C|Room Temperature 26°C|Room Temperature 26°C|Pass|
  |HLR7|Thermistor|Room Temperature 38°C|Room Temperature 38°C|Room Temperature 38°C|Pass|
  |HLR8|Alexa|*|* No of fan and light ON|* No of fan and liht ON|Pass|