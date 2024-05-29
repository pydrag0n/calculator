Program calculator;
var num1, num2: real;
var answer: real;
var op: string;

function calc(num1: real; num2: real; op: string):real;
    var res: real;
    begin
      if op='-' then res:=num1-num2
      else 
        if op='+' then res:=num1+num2
      else 
        if op='*' then res:=num1*num2
      else 
        if op='/' then 
          begin
            if num2=0 then 
              begin
                Writeln('ZeroDivisionError');
              end;
            res:=num1/num2;
          end;
      calc:=res;
    end;

begin
  Write('Write a: ');
  readln(num1);
  Write('Write b: ');
  readln(num2);
  Write('Write op: ');
  readln(op);
  answer:=calc(num1, num2, op);
  Writeln('Answer: ', answer);
end.