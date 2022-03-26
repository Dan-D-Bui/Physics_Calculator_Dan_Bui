#include<iomanip>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu()
{
      cout << "\x1b[32;1m\n-------------------\x1b[0m" << endl;
      cout << "\x1b[32;1m1: Velocity\x1b[0m" << endl;
      cout << "\x1b[32;1m2: Acceleration\x1b[0m" << endl;
      cout << "\x1b[32;1m3: Motion\x1b[0m" << endl;
      cout << "\x1b[32;1m4: Newton's 2nd Law\x1b[0m" << endl;
      cout << "\x1b[32;1m5: Weight\x1b[0m" << endl;
      cout << "\x1b[32;1m6: Momentum\x1b[0m" << endl;
      cout << "\x1b[32;1mX. Clear screen\x1b[0m" << endl;
      cout << "\x1b[32;1mE. Exit\x1b[0m" << endl;
      cout << "\x1b[32;1m-------------------\x1b[0m" << endl;
}

void calculateVelocity()
{
  double ds; 
  string dsUnits;
  double dt;
  string dtUnits;
  double v;

  cout << "\x1b[34;1mPlease enter the value of ds: \x1b[0m";
  ds = validateDouble(ds);
  cout << "\x1b[31;1mPlease enter the units of ds: \x1b[0m";
  dsUnits = validateString(dsUnits);

  cout << "\x1b[34;1mPlease enter the value of dt: \x1b[0m";
  dt = validateDouble(dt);
  cout << "\x1b[31;1mPlease enter the units of dt: \x1b[0m";
  dtUnits = validateString(dtUnits);

  v = ds / dt;

  cout << "\n" << fixed << setprecision(4) << ds << dsUnits << " / " << dt << dtUnits << " = " << v << " " << dsUnits << "/" << dtUnits << endl;
}

void calculateAcceleration()
{
  double dv; 
  string dvUnits;
  double dt;
  string dtUnits;
  double a;

  cout << "\x1b[34;1mPlease enter the value of dv: \x1b[0m";
  dv = validateDouble(dv);
  cout << "\x1b[31;1mPlease enter the units of dv: \x1b[0m";
  dvUnits = validateString(dvUnits);

  cout << "\x1b[34;1mPlease enter the value of dt: \x1b[0m";
  dt = validateDouble(dt);
  cout << "\x1b[31;1mPlease enter the units of dt: \x1b[0m";
  dtUnits = validateString(dtUnits);

  a = dv / dt;

  cout << "\n" << fixed << setprecision(4) << dv << dvUnits << " / " << dt << dtUnits << " = " << a << " " << dvUnits << "/" << dtUnits << endl;
}

void calculateMotion()
{
  int userOption;
  double v;
  double v0;
  double v2;
  double vBar;
  double a;
  double t;
  double s;
  double s0;
  
  cout << "\x1b[32;1m\n------------------\x1b[0m" << endl;
  cout << "\x1b[32;1m1: Solve for v\x1b[0m" << endl;
  cout << "\x1b[32;1m2: Solve for s\x1b[0m" << endl;
  cout << "\x1b[32;1m3: Solve for v^2\x1b[0m" << endl;
  cout << "\x1b[32;1m4: Solve for v_bar\x1b[0m" << endl;
  cout << "\x1b[32;1m------------------\x1b[0m" << endl;
  cout << "Please enter an option to calculate: ";
  userOption = validateInt(userOption);

  switch (userOption)
  {
    case 1:
    cout << "\x1b[34;1mPlease enter the value of v0: \x1b[0m";
    v0 = validateDouble(v0);

    cout << "\x1b[31;1mPlease enter the value of a: \x1b[0m";
    a = validateDouble(a);

    cout << "\x1b[34;1mPlease enter the value of t: \x1b[0m";
    t = validateDouble(t);

    v = v0 + a*t;

    cout << "\n" << fixed << setprecision(4) << v0 << " + " << a << "*" << t << " = " << v << endl;
    break;

    case 2:
    cout << "\x1b[34;1mPlease enter the value of s0: \x1b[0m";
    s0 = validateDouble(s0);

    cout << "\x1b[31;1mPlease enter the value of v0: \x1b[0m";
    v0 = validateDouble(v0);

    cout << "\x1b[34;1mPlease enter the value of t: \x1b[0m";
    t = validateDouble(t);

    cout << "\x1b[31;1mPlease enter the value of a: \x1b[0m";
    a = validateDouble(a);
    
    s = s0 + v0*t + 0.5*a*t*t;

    cout << "\n" << fixed << setprecision(4) << s0 << " + " << v0 << "*" << t << " + 1/2(" << a << "*" << t << "^2) = " << s << endl;
    break;

    case 3:
    cout << "\x1b[34;1mPlease enter the value of v0: \x1b[0m";
    v0 = validateDouble(v0);

    cout << "\x1b[31;1mPlease enter the value of a: \x1b[0m";
    a = validateDouble(a);

    cout << "\x1b[34;1mPlease enter the value of s: \x1b[0m";
    s = validateDouble(s);

    cout << "\x1b[31;1mPlease enter the value of s0: \x1b[0m";
    s0 = validateDouble(s0);
    
    v2 = v0*v0 + 2*a*(s-s0);

    cout << "\n" << fixed << setprecision(4) << v0 << "^2 + 2*" << a << "(" << s << "-" << s0 << ") = " << v2 << endl;
    break;

    case 4:
    cout << "\x1b[34;1mPlease enter the value of v: \x1b[0m";
    v = validateDouble(v);

    cout << "\x1b[31;1mPlease enter the value of v0: \x1b[0m";
    v0 = validateDouble(v0);
    
    vBar = 0.5*(v+v0);

    cout << "\n" << fixed << setprecision(4) << "1/2(" << v << "+" << v0 << ") = " << vBar << endl;
    break;
  }
}

void calculateNewton2Law()
{
  double m; 
  string mUnits;
  double a;
  string aUnits;
  double N;

  cout << "\x1b[34;1mPlease enter the value of m: \x1b[0m";
  m = validateDouble(m);
  cout << "\x1b[31;1mPlease enter the units of m: \x1b[0m";
  mUnits = validateString(mUnits);

  cout << "\x1b[34;1mPlease enter the value of a: \x1b[0m";
  a = validateDouble(a);
  cout << "\x1b[31;1mPlease enter the units of a: \x1b[0m";
  aUnits = validateString(aUnits);

  N = m * a;

  cout << "\n" << fixed << setprecision(4) << m << mUnits << " * " << a << aUnits << " = " << N << " " << mUnits << "*" << aUnits << endl;
}

void calculateWeight()
{
  double m; 
  double g;
  double W;
  string wUnits;

  cout << "\x1b[34;1mPlease enter the value of m: \x1b[0m";
  m = validateDouble(m);

  cout << "\x1b[31;1mPlease enter the value of g: \x1b[0m";
  g = validateDouble(g);
  
  cout << "\x1b[34;1mPlease enter the units of W: \x1b[0m";
  wUnits = validateString(wUnits);

  W = m * g;

  cout << "\n" << fixed << setprecision(4) << m << " * " << g << " = " << W << " " << wUnits << endl;
}

void calculateMomentum()
{
  double m; 
  double v;
  double P;
  string pUnits;

  cout << "\x1b[34;1mPlease enter the value of m: \x1b[0m";
  m = validateDouble(m);

  cout << "\x1b[31;1mPlease enter the value of g: \x1b[0m";
  v = validateDouble(v);
  
  cout << "\x1b[34;1mPlease enter the units of P: \x1b[0m";
  pUnits = validateString(pUnits);

  P = m * v;

  cout << "\n" << fixed << setprecision(4) << m << " * " << v << " = " << P << " " << pUnits << endl;
}