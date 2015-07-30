/*
----------GeniosLatinos.com-----------
 Controlar brillo (Intesidad) de un LED.
 ----------GeniosLatinos.com-----------
 */

const int LED =11;  
// declaramos LED en una de las salidas PWM.
const int potenciometro =A0; 
// entrada del potenciometro esta conectado al pin A0
int brillo;  
//variable para almacenar los datos del brillo

void setup ()  {
  pinMode (LED, OUTPUT);  // declaramos el led como salida 
  /* los pines analogicos se declaran como entrada automaticamente */
}
void loop (){
  /*leemos el valor del potenciometro divididos entre 4 ya que
   solo se pueden usar valores entre 0 y 255 y 1024/4=226
   en analog Write porque es de 8bits.  */
  brillo = analogRead (potenciometro) / 4; 
  analogWrite(LED, brillo);
}
/*
----------GeniosLatinos.com-----------
 Controlar brillo (Intesidad) de un LED.
 ----------GeniosLatinos.com-----------
 */




























