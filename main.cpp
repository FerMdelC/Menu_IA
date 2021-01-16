#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_CTYPE,"Spanish");
    string pass="", user;
    char ch;
    int i=0;
    bool correcto = false;
    int op;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "                33333   IIIIII  M       M    1111    000000                  " << endl;
        cout << "                     3    II    M M   M M      11    0    0                  " << endl;
        cout << "                  3333    II    M   M   M      11    0    0                  " << endl;
        cout << "                     3    II    M       M      11    0    0                  " << endl;
        cout << "                33333   IIIIII  M       M    111111  000000                  " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "              EEEEEE  QQQQQQ   U    U   IIIIII  PPPPP   OOOOOO               " << endl;
        cout << "              E       Q    Q   U    U     II    P    P  O    O               " << endl;
        cout << "              EEEE    Q  Q Q   U    U     II    PPPPPP  O    O               " << endl;
        cout << "              E       Q   QQ   U    U     II    P       O    O               " << endl;
        cout << "              EEEEEE  QQQQQQ   UUUUUU   IIIIII  P       OOOOOO               " << endl;
        cout << "                            Q                                                " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "           EEEEEE  N    N   TTTTTT  OOOOOO  RRRRR   N    N  OOOOOO           " << endl;
        cout << "           E       NN   N     TT    O    O  R    R  NN   N  O    O           " << endl;
        cout << "           EEEE    N N  N     TT    O    O  R RRR   N N  N  O    O           " << endl;
        cout << "           E       N  N N     TT    O    O  R    R  N  N N  O    O           " << endl;
        cout << "           EEEEEE  N    N     TT    OOOOOO  R    R  N    N  OOOOOO           " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "                              Integrantes:                                   " << endl;
        cout << "                                                                             " << endl;
        cout << "                    Barragan Hernandez Rodrigo Iñaki.                        " << endl;
        cout << "                    Flores Reyes Hanny Michelle.                             " << endl;
        cout << "                    Gaona Cruz Hector Yael.                                  " << endl;
        cout << "                    Martin del Campo Gomez María Fernanda.                   " << endl;
        cout << "                    Peña Larraga Dulce Montserrath.                          " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "                                 Tema:                                       " << endl;
        cout << "                                                                             " << endl;
        cout << "                       La Inteligencia Artificial                            " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;

        cout << "                                                                             " << endl;
        system("pause");
        while (i<3){
            cout<<"\nIngrese su nombre como usuario:"<<endl;
            cin>>user;
            cout<<"\n\nIngrese su password: "<<endl;
            ch=_getch();

            while(ch !=13){
                pass.push_back(ch);
                cout<<'*';
                ch=_getch();
            }
            if (pass=="123" && user!=""){
                i=4;
                getch();
                correcto = true;
                }
            else{
                cout<<"\n\Error, datos incorrectos";
                pass="";
                user="";
                i=i+1;
                if (i>3) {return 0;}
            }
        }
        if (correcto){
            bool salir = true;
            bool continua;
            while (salir) {
                continua = true;
                while(continua){

                    system("cls");
                    cout<<               "\n\nBienvenido "<<user<<" acceso correcto\n\n";
                    cout << "                         Menú pricipal                                    " << endl<< endl;
                    cout<<"(1) Importancia de la Inteligencia Artificial."                   <<endl<< endl;
                    cout<<"(2  ¿Cómo se relaciona la Inteligencia Artificial con Entorno Socio Económico?" << endl<< endl;
                    cout<<"(3) Aportaciones de la Inteligencia Artificial en la economía del país."     << endl<< endl;
                    cout<<"(4) Aportaciones de la Inteligencia Artificial a la política del país."         << endl<<endl;
                    cout<<"(5) Aportaciones de la Inteligencia Artificial a la sociedad del país."         << endl<< endl;
                    cout<<"(6) Menú de videos"<< endl<< endl;
                    cout<<"(0) Salir de sistema. "<<endl<< endl;
                    cout << "Ingrese una opción: ";
                    cin>> op;
                    if(cin.fail()){
                        cin.clear();
                        cin.ignore();
                        cout << "Opcion invalida" << endl;
                        system("pause");
                    }
                    else {continua = false;}
                }
                system("cls");
                switch(op) {
                case 0: {salir = false; break;} // Sal del while
                case 1:{
                cout<<"Importancia de la Inteligencia Artificial."                   <<endl<< endl;
                cout <<"Hoy en día, la cantidad de datos que se genera, tanto por parte de los humanos como por"<< endl;
                cout<<"parte de las máquinas, supera en gran medida la capacidad que tienen las personas de absorber,"<< endl;
                cout<<"interpretar y tomar decisiones complejas basadas en esos datos. La inteligencia artificial"<< endl;
                cout<<"supone la base de todo el aprendizaje automático y el futuro de todos los procesos complejos de toma"<<endl;
                cout<<"de decisiones. Por ejemplo, la mayoría de los humanos pueden averiguar cómo no perder cuando"<<endl;
                cout<<"juegan al tres en raya, aunque haya 255 168 movimientos únicos, de los cuales 46 080 terminan en"<<endl;
                cout<<"tablas. Muchos menos podrían llegar a ser grandes maestros de las damas, con más de 500 x 1018 o"<<endl;
                cout<<"500 trillones de posibles movimientos diferentes. Los ordenadores son extremadamente eficientes a la"<<endl;
                cout<<"hora de calcular estas combinaciones y permutaciones para llegar a la mejor decisión. La IA (y su"<<endl;
                cout<<"evolución lógica del aprendizaje automático) y el aprendizaje profundo constituyen los cimientos del"<<endl;
                cout<<"futuro en la toma de decisiones empresariales. La inteligencia artificial automatiza el aprendizaje y"<<endl;
                cout<<"descubrimiento repetitivos a través de datos. ... En lugar de automatizar tareas manuales, la inteligencia"<<endl;
                cout<<"artificial realiza tareas computarizadas frecuentes de alto volumen de manera confiable y sin fatiga."<< endl;
                cout<<"La Inteligencia Artificial está en boca de todos en este momento por los grandes avances que"<<endl;
                cout<<"ha manifestado en los últimos años, a pesar de que surgió hace ya bastantes años, 82 para ser"<<endl;
                cout<<"precisos. En 1936, Alan Touring, considerado el padre de la Inteligencia Artificial, creó un"<<endl;
                cout<<"sistema que era capaz de llevar a cabo cálculos formalmente definidos." <<endl<< endl;

                cout<<"La Inteligencia Artificial tiene múltiples aplicaciones en la actualidad, y en diferentes ámbitos"<<endl;
                cout<<"y, sin darnos cuenta, todos nosotros la utilizamos en nuestro día a día. Por ejemplo, cuando ingresamos"<<endl;
                cout<<"a nuestra cuenta de Gmail, y observamos que hay correos no deseados o spam eso es por acción de la"<<endl;
                cout<<"Inteligencia Artificial que diferencia dichos correos que pueden llegar a ser maliciosos. El traductor de"<<endl;
                cout<<"google es otro ejemplo que para traducir utiliza millones de patrones, o incluso Netflix brindando"<<endl;
                cout<<"sugerencias sobre posibles contenidos que puedan interesarnos, basándose en los que ya hemos visto."<<endl<<endl;

                cout<<"Sin embargo, la verdadera importancia de la Inteligencia Artificial radica en los beneficios"<<endl;
                cout<<"para la humanidad que puede generar, en ámbitos como la medicina, el transporte, las finanzas y la"<<endl;
                cout<< "agricultura, entre muchas otras. " <<endl<< endl;

                    system("pause");break;}
                case 2:{

                cout<<"¿Cómo se relaciona la Inteligencia Artificial con Entorno Socio Económico?"<<endl<<endl;
                cout<<"La firma de investigación Markets and Markets estima que el mercado de la Inteligencia Artificial (IA)"<<endl;
                cout<<"crecerá de 420 millones de dólares en 2014 a 5.050 millones de dólares en"<<endl;
                cout<<"2020, gracias a la creciente adopción de tecnologías de “aprendizaje mecánico” (machine learning) y"<<endl;
                cout<<"lenguaje natural en las industrias de medios de comunicación, publicidad, retail, finanzas y salud. a"<<endl;
                cout<<"empresa de investigación en tecnologías de la información Gartner, estima que 6.000 millones de"<<endl;
                cout<<"“cosas” conectadas estarán solicitando activamente el apoyo de las plataformas de Inteligencia"<<endl;
                cout<<"Artificial para 2018. Estos dispositivos incluirán probablemente muchos aparatos conectados,"<<endl;
                cout<<"automóviles, portátiles y otros aparatos incluidos en el mercado del “Internet de las Cosas”."<<endl<<endl;

                cout<<"La Inteligencia Artificial, o AI por sus siglas en inglés, abre una nueva era en el"<<endl;
                cout<<"paradigma socioeconómico hacia el que se dirigen nuestras economías y sociedades. A lo largo de la"<<endl;
                cout<<"Historia, pocos avances humanos han resultado tan disruptivos como éste, que en última instancia"<<endl;
                cout<<"podría suponer el prescindir de la capacidad intelectual humana para tareas de orden superior, que son"<<endl;
                cout<<"precisamente las que dan valor añadido a los trabajadores humanos, y que para algunos venían siendo"<<endl;
                cout<<"el último argumento para considerarnos aún necesarios como fuerza laboral." <<endl<< endl;

                cout<<"Efectivamente, la Inteligencia Artificial abre muchas puertas sobre el futuro que se"<<endl;
                cout<<"avecina, y como todo nuevo invento humano disruptivo, implicará no pocos cambios radicales en"<<endl;
                cout<<"nuestra forma de configurar y entender nuestras socioeconomías. En este análisis de hoy les damos las"<<endl;
                cout<<"claves para que puedan ustedes saber qué puede suponer la AI para sus vidas o las de sus hijos, y si hay"<<endl;
                cout<<"algo que temer al respecto, o más bien algo que nos permitan albergar la esperanza de que vaya a"<<endl;
                cout<<"contribuir al progreso y transformación de nuestro mundo tal y como lo conocemos hoy por hoy."<<endl<<endl;

                system("pause");
                break;}

                case 3:{


                cout<<"Aportaciones de la Inteligencia Artificial en la económia del país."<<endl<<endl;
                cout<<"El impacto de la IA se manifiesta de varias maneras. Una de ellas es la capacidad que está"<<endl;
                cout<<"demostrando para transformar la economía e impulsarla. De hecho, hay quien cree que, en la"<<endl;
                cout<<"actualidad, la humanidad vive una nueva revolución industrial. Los cambios actuales son producto de la"<<endl;
                cout<<"creación y aplicación de algoritmos, una serie de operaciones matemáticas capaces de cumplir órdenes,"<<endl;
                cout<<"desarrollar y ejecutar diferentes actividades."<<endl<<endl;

                cout<<"Algo que se da muy bien es el manejo de los datos. En todos los sectores en los que se maneje"<<endl;
                cout<<"datos y procesarlos, estos poseen un gran valor para las empresas, ya que los ordenan, analizan y"<<endl;
                cout<<"refinan en muy poco tiempo. Esto permite a las compañías ser más competitivas y crear mejores"<<endl;
                cout<<"campañas de marketing, por poner un sencillo ejemplo."<<endl<<endl;

                cout<<"Los trabajos más repetitivos y redundantes serán destruidos irremisiblemente, siendo el"<<endl;
                cout<<"aspecto positivo el que se crearán otros nuevos. Esta tecnología aún está lejos de mostrar todo su"<<endl;
                cout<<"potencial, por lo que aún quedan décadas para adaptarse a los cambios que supondrá." <<endl<< endl;

                cout<<"potencial, por lo que aún quedan décadas para adaptarse a los cambios que supondrá." << endl;
                cout<<"Desde el punto de vista de la industria, la aplicación de este tipo de tecnologías, puede ofrecer"<<endl;
                cout<<"mayor asistencia y complementar más eficientemente los procesos de producción. En paralelo, los"<<endl;
                cout<<"procesos de innovación van a permitir generar unos productos y servicios más precisos dependiendo"<<endl;
                cout<<"del mercado al que vayan dirigidos." <<endl<< endl;

                cout<<"Por último, la IA será un gran aliado en el sectoreconómico y financiero. Su capacidad de"<<endl;
                cout<<"cálculo y trabajo incansable permitirán predecir mejor el desarrollo de los mercados, algo que llevará a"<<endl;
                cout<<"la toma de mejores decisiones. Al fin y al cabo, la información es poder." <<endl<< endl;

                system("pause");
                break;}
                case 4:{
                cout<<"Aportaciones de la Inteligencia Artificial a la política del país"<<endl<<endl;
                cout<<"En el ámbito político se estudia la perspectiva de las personas empleando técnicas de inteligencia"<<endl;
                cout<<"de vista y, de esta manera, obtener más seguidores para un determinado partido o candidato."<<endl;
                cout<<"La inteligencia artificial es una de las herramientas más poderosas para que se persiga un enfoque de"<<endl;
                cout<<"toma de decisiones que se basen en datos. A partir de técnicas de aprendizaje automático, análisis"<<endl;
                cout<<"predictivo, podemos conseguir una imagen precisa de las políticas públicas que se necesitan o de cómo "<<endl;
                cout<<"se podrían resolver los problemas desde el liderazgo político."<<endl<<endl;

                cout<<"Actualmente, los avances tecnológicos brindan una enorme capacidad para analizar grandes cantidades"<<endl;
                cout<<"de datos en segundos, lo que permite a quien toma las decisiones minimizar la influencia de"<<endl;
                cout<<"determinados factores humanos como pueden ser las creencias, las ideas o las experiencias"<<endl;
                cout<<"personales que no suelen ser extrapolables al conjunto de la sociedad."<<endl<<endl;

                system("pause");
                break;}
                case 5:{
                cout<<"Aportaciones de la Inteligencia Artificial a la sociedad del país."<<endl<<endl;
                cout<<"La IA puede mejorar drásticamente la eficiencia de nuestros centros de trabajo y hasta aumentar nuestra"<<endl;
                cout<<"eficiencia. Al asumir tareas repetitivas o peligrosas, la IA libera fuerza laboral humana para hacer"<<endl;
                cout<<"trabajos que impliquen cualidades inimitables como la creatividad, el ingenio o la empatía. Además de"<<endl;
                cout<<"ser una buena oportunidad para capacitarnos en otras áreas o adquirir nuevas habilidades, también "<<endl;
                cout<<"podremos realizar trabajos más atractivos, que aumenten la motivación y la satisfacción laboral. "<<endl<<endl;

                cout<<"Con mejores capacidades de monitoreo, diagnóstico, pronóstico y planificación, la IA puede influir "<<endl;
                cout<<"significativamente en la atención médica. El potencial para planificar tratamientos personalizados y"<<endl;
                cout<<"establecer protocolos para el uso de medicamentos puede cambiarle la vida a muchos pacientes. "<<endl;
                cout<<"Análogamente, en algunas instituciones se han usado estas mismas capacidades pero aplicadas a las"<<endl;
                cout<<"energías renovables y las redes eléctricas, que aunque inicialmente impactan positivamente a las"<<endl;
                cout<<"empresas también contribuyen al cambio climático, a la reducción de emisiones de CO2 y a la"<<endl;
                cout<<"factibilidad de llevar electricidad a comunidades aisladas."<<endl<<endl;

                cout<<"Una de las ventajas de la IA es que también puede ayudarnos a procesar los grandes volúmenes de"<<endl;
                cout<<"datos que generamos constantemente y que el cerebro humano simplemente nunca podría manejar. Esto"<<endl;
                cout<<"ya está produciendo descubrimientos innovadores en áreas vitales para la humanidad, como el "<<endl;
                cout<<"descubrimiento de nuevos materiales o la nanotecnología, que a resumidas cuentas representan progreso. "<<endl<<endl;

                system("pause");
                break;}

                case 6:
                    {
                    bool subsalir = true;
                    int opcions;
                    while (subsalir){
                        continua = true;
                        while(continua){
                            system("cls");
                            cout <<"(1) Ver video ¿Qué es la inteligencia artificial?"<<endl<<endl<<endl;
                            cout <<"(2) ¿Las máquinas pueden pensar?"<<endl<<endl<<endl;
                            cout <<"(0) Volver al menu"<<endl<<endl<<endl;
                            cout << "Ingrese una opción: ";
                            cin>> opcions;
                            if(cin.fail()){
                                cin.clear();
                                cin.ignore();
                                cout << "Opción invalida" << endl;
                                system("pause");
                            }
                            else {continua = false;}
                            char* linkChar;
                            switch (opcions)
                            {
                                case 0:
                                    subsalir=false;
                                    break;
                                 case 1:
                                     linkChar="https://www.youtube.com/watch?v=NSf3o-wxtQ0";
                                     break;
                                 case 2:
                                     linkChar="https://www.youtube.com/watch?v=_peHYwe_784";
                                     break;
                                default :
                                    cout<<"Opción invalida"<<endl<<endl<<endl;

                            }
                            if (opcions != 0){
                                ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
                            }
                             if (op=0){
                                return 0;
                            }
                        }
                    }
                break;
            }
        }

    }
    cout<<"Muchas gracias por usar nuestro programa, el equipo le agradece su participación"<<endl<<endl<<endl;
    system("pause");
    return 0;
 }
}
