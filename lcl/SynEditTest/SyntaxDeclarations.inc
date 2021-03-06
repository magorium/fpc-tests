Const
  // ToDo: Use defaultfilter property from TSynCustomHighlighter ?
  CEXT         : array[0..3] of string = ('.c', '.h', '.cpp', '.hpp');
  HOLLYWOODEXT : array[0..0] of string = ('.hws');
  HTMLEXT      : array[0..1] of string = ('.html', '.htm');
  PASEXT       : array[0..3] of string = ('.pas', '.pp', '.inc', '.lpr');

  CTEXT =
  '#include <proto/exec.h>'#13#10 + '#include <dos/dos.h>'#13#10 +
  '#include <intuition/intuition.h>'#13#10 +
  '#include <intuition/intuitionbase.h>'#13#10 +
  '#include <proto/intuition.h>'#13#10 + '#include <intuition/screens.h>'#13#10 +
  ''#13#10 + 'const TEXT version[] = "VER: Beep 41.2 (03.03.2011)";'#13#10 +
  ''#13#10 + '__startup AROS_PROCH(Start, argstr, argsize, SysBase)'#13#10 +
  '{'#13#10 + '  AROS_PROCFUNC_INIT'#13#10 + ''#13#10 +
  '  struct IntuitionBase *IntuitionBase;  // Its a comment'#13#10 +
  ''#13#10 + '              /*Another'#13#10 +
  '                Comment*/'#13#10 +
  '  IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library", 0);'#13#10
  + '  if (!IntuitionBase)'#13#10 + '    return RETURN_FAIL;'#13#10 +
  ''#13#10 + '  DisplayBeep( NULL );'#13#10 + ''#13#10 +
  '  CloseLibrary(&IntuitionBase->LibNode);'#13#10 +
  '  return RETURN_OK;'#13#10 + '  AROS_PROCFUNC_EXIT'#13#10 + '}';

  HOLLYWOODTEXT =
  '; this is a comment' + #13#10 +
  #13#10 +
  '/* this is a' + #13#10 +
  'multiline' + #13#10 +
  'comment */' + #13#10 +
  #13#10 +
  '@BGPIC 1, "FancyBackground.jpg" ; a preprocessor commmand + string' + #13#10 +
  #13#10 +
  'a$ = [[ This' + #13#10 +
  'is a' + #13#10 +
  'multiline string' + #13#10 +
  ']]' + #13#10 +
  #13#10 +
  't = GetMonitors()' + #13#10 +
  'For Local k = 0 To ListItems(t) - 1' + #13#10 +
  '   DebugPrint("Monitor", k + 1, "X:", t[k].X, "Y:", t[k].Y,' + #13#10 +
  '        "Width:", t[k].Width, "Height:", t[k].Height)' + #13#10 +
  'Next' + #13#10 +
  #13#10 +
  'mathlib = {}  ; create an empty table' + #13#10 +
  #13#10 +
  '#FLIPPERFLOP' + #13#10 +
  #13#10 +
  'Function p_MyFunc(msg)' + #13#10 +
  '    Switch msg.action' + #13#10 +
  '    Case "OnMouseUp":' + #13#10 +
  '            DebugPrint("Left mouse button pressed:", msg.id)' + #13#10 +
  '    Case "OnRightMouseUp":' + #13#10 +
  '            DebugPrint("Right mouse button pressed:", msg.id)' + #13#10 +
  '    EndSwitch' + #13#10 +
  'EndFunction' + #13#10 +
  #13#10 +
  'Function mathlib.add(a, b)' + #13#10 +
  '    Return(a + b)' + #13#10 +
  'EndFunction' + #13#10 +
  #13#10 +
  'Print("Hello World!")' + #13#10 +
  #13#10 +
  'MakeButton(1, #SIMPLEBUTTON, 0, 0, 100, 100, {OnMouseUp = p_MyFunc})' + #13#10 +
  'MakeButton(2, #SIMPLEBUTTON, 200, 0, 100, 100, {OnMouseUp = p_MyFunc})' + #13#10 +
  #13#10 +
  'End()  ; Exit' + #13#10 +
  #13#10 +
  'a = mathlib.mul(5, 10)  ; a receives the value 50';

  HTMLText = '<HTML>'#13#10 + '<!-- comment -->'#13#10 +
  '<BODY bgcolor="#ffffff">'#13#10 + '  Test &nbsp;'#13#10 +
  '  <INVALID_TAG>'#13#10 + '</HTML>';

  PASTEXT =
  'unit Unit1;'#13#10 + ''#13#10 + '{$mode objfpc}{$H+}'#13#10 +
  ''#13#10 + 'interface'#13#10 + ''#13#10 + 'uses'#13#10 +
  '  Classes, SysUtils, FileUtil, SynEdit, SynHighlighterPas, Forms, Controls,'#13#10 +
  '  Graphics, Dialogs;'#13#10 + ''#13#10 + 'type'#13#10 +
  ''#13#10 + '  { TForm1 }'#13#10 + ''#13#10 +
  '  TForm1 = class(TForm)'#13#10 + '    SynEdit1: TSynEdit;'#13#10 +
  '    SynPasSyn1: TSynPasSyn;'#13#10 + '  private'#13#10 +
  '    procedure Test;'#13#10 + '    { private declarations }'#13#10 +
  '  public'#13#10 + '    { public declarations }'#13#10 +
  '  end;'#13#10 + ''#13#10 + 'var'#13#10 + '  Form1: TForm1;'#13#10 +
  ''#13#10 + 'implementation'#13#10 + ''#13#10 + '{$R *.lfm}'#13#10 +
  ''#13#10 + '{ TForm1 }'#13#10 + ''#13#10 + 'procedure TForm1.Test;'#13#10 +
  'begin'#13#10 + '  writeln(''something to test with'', 14, '' also with numbers ;)'');'#13#10 + 'end;'#13#10 + ''#13#10 + 'end.';

  NText =
  'Sed ut perspiciatis unde omnis iste natus error sit voluptatem'#13#10 +
  'accusantium doloremque laudantium, totam rem aperiam, eaque'#13#10 +
  'ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae'#13#10 +
  'dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas'#13#10 +
  'sit aspernatur aut odit aut fugit, sed quia consequuntur magni'#13#10 +
  'dolores eos qui ratione voluptatem sequi nesciunt. Neque porro'#13#10 +
  'quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur,'#13#10 +
  'adipisci velit, sed quia non numquam eius modi tempora incidunt'#13#10 +
  'ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim'#13#10 +
  'ad minima veniam, quis nostrum exercitationem ullam corporis'#13#10 +
  'suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur?'#13#10 +
  'Quis autem vel eum iure reprehenderit qui in ea voluptate velit'#13#10 +
  'esse quam nihil molestiae consequatur, vel illum qui dolorem eum'#13#10 +
  'fugiat quo voluptas nulla pariatur?'#13#10 + ''#13#10 +
  'At vero eos et accusamus et iusto odio dignissimos ducimus qui'#13#10 +
  'blanditiis praesentium voluptatum deleniti atque corrupti quos'#13#10 +
  'dolores et quas molestias excepturi sint occaecati cupiditate non'#13#10 +
  'provident, similique sunt in culpa qui officia deserunt mollitia animi,'#13#10 +
  'id est laborum et dolorum fuga. Et harum quidem rerum facilis est'#13#10 +
  'et expedita distinctio. Nam libero tempore, cum soluta nobis est'#13#10 +
  'eligendi optio cumque nihil impedit quo minus id quod maxime'#13#10 +
  'placeat facere possimus, omnis voluptas assumenda est, omnis'#13#10 +
  'dolor repellendus. Temporibus autem quibusdam et aut officiis'#13#10 +
  'debitis aut rerum necessitatibus saepe eveniet ut et voluptates'#13#10 +
  'repudiandae sint et molestiae non recusandae. Itaque earum'#13#10 +
  'rerum hic tenetur a sapiente delectus, ut aut reiciendis voluptatibus'#13#10 +
  'maiores alias consequatur aut perferendis doloribus asperiores'#13#10 +
  'repellat. '#13#10 + ''#13#10 +
  '                              "De finibus bonorum et malorum" Cicero';

  PasShortText =
    'unit Test;'#13#10 +
    '{$mode delphi}'#13#10 +
    '{%Fold%}'#13#10 +
    '  // Comment'#13#10 +
    'begin'#13#10 +
    '  writeln(''string'', 42);'#13#10 +
    '  asm'#13#10 +
    '    nop;'#13#10 +
    '  end;'#13#10 +
    '  b := 1 + color;'#13#10 +
    '  case Align of'#13#10 +
    '    alClient: writeln(''alClient''#13#10);'#13#10 +
    '  end;'#13#10 +
    'end.';

  CShortText =
    ' /*Comment*/ '#13#10 +
    '#include <stdio.h>'#13#10 +
    'int main(int argc, char **argv)'#13#10 +
    '{'#13#10 +
    '  int a = r + 10;'#13#10 +
    '  printf("hello world\n");'#13#10 +
    '  return 0'#13#10 +
    '}';

  HollywoodSyntax =
    '<?xml version="1.0"?>'#13#10 +
    '<Language name="Hollywood" ext="hws">'#13#10 +
    '  <Attribute Name="Preprocessor" ForeCol="#FF0000"></Attribute>'#13#10 +
    '  <Attribute Name="Directive"    ForeCol="#00FF00"></Attribute>'#13#10 +
    '  <Attribute Name="String"       ForeCol="#00FFFF" Bold="True" ></Attribute>'#13#10 +
    '  <symbols>' +
    '  </symbols>' +
    '  <Identifiers CharsStart= "A..Za..z_" Content = "A..Za..z0..9_">' +
    '    <token attribute="Keyword">' +
    '    And' +
    '    Block Break' +
    '    Case Const Continue' +
    '    Default Dim DimStr Do' +
    '    Else ElseIf EndBlock EndFunction EndIf EndSwitch' +
    '    False For Forever Function' +
    '    Global Gosub Goto' +
    '    If In' +
    '    Label Local' +
    '    Next Nil Not' +
    '    Or' +
    '    Repeat Return' +
    '    Step Switch' +
    '    Then To True' +
    '    Until' +
    '    Wend While' +
    '    Xor' +
    '    </token>' +
    '  </Identifiers>' +
    '  <Token CharsStart="$"    Content = "0..9ABCDEFabcdef" Attribute=''NUMBER''> </Token>' +
    '  <!-- Token CharsStart="%"    Content = "01" Attribute=''NUMBER''> </Token> -->' +
    '  <Token CharsStart="0..9" Content = "0..9" Attribute=''NUMBER''> </Token>' +
    '  <Token CharsStart="#"    Content = "A..Za..z0..9" Attribute=''DIRECTIVE''> </Token>' +
    '  <Token CharsStart="@"    Content = "A..Za..z0..9" Attribute=''PREPROCESSOR''> </Token>' +
    '' +
    '  <!--- Strings -->' +
    '  <String Start="&quot;" End="&quot;"></String>' +
    '  <String Start="[["     End="]]" Multiline="true" Folding="true"></String>' +
    '  <!--- Character constants -->' +
    '  <String Start="''"      End="''"></String>' +
    '  <!--- single line comment -->' +
    '  <Comment Start=";" ></Comment>' +
    '  <!--- multiple line comment -->' +
    '  <Comment Start="/*"    End="*/" Multiline="true"></Comment>' +
    '' +
    '  <Block Start="Block"  End= "EndBlock" ></Block>' +
    '  <Block Start="For"    End= "Next" ></Block>' +
    '  <Block Start="Repeat" End= "Until" ></Block>' +
    '  <Block Start="Switch" End= "EndSwitch" ></Block>' +
    '  <Block Start="While"  End= "Wend" ></Block>' +
    '' +
    '  <Block Name="Func" Start="function" End="endfunction" Parent="Main" BackCol="#D0F5FF">' +
    '    <Block Name="FuncParam" Start="(" End=")" Folding="false"></Block>' +
    '  </Block>' +
    '</Language>';

