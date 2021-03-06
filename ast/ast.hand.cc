// ast.hand.cc            see license.txt for copyright and terms of use
// hand-generated form of what I want to be autogenerated later

#ifndef BOOTSTRAP
  // in non-bootstrap, use autogen'd code
  #include "ast.ast.cc"
#endif

#ifndef GENERATED_AST_PRESENT
// if either we're in bootstrap mode, or else ast.gen.cc was empty, use this

#include "ast.hand.h"      // this module


// ------------------- ASTSpecFile ----------------------
void ASTSpecFile::debugPrint(std::ostream &os, int indent) const
{
  PRINT_HEADER(ASTSpecFile);

  PRINT_LIST(ToplevelForm, forms);
}


// ----------------- ToplevelForm -------------------
void ToplevelForm::debugPrint(std::ostream &os, int indent) const
{}


DEFN_AST_DOWNCASTS(ToplevelForm, TF_verbatim, TF_VERBATIM)
DEFN_AST_DOWNCASTS(ToplevelForm, ASTClass, ASTCLASS)


void TF_verbatim::debugPrint(std::ostream &os, int indent) const
{
  PRINT_HEADER(TF_verbatim);

  ToplevelForm::debugPrint(os, indent);

  PRINT_STRING(code);
}

void ASTClass::debugPrint(std::ostream &os, int indent) const
{
  PRINT_HEADER(ASTClass);

  ToplevelForm::debugPrint(os, indent);

  PRINT_STRING(name);
  PRINT_LIST(CtorArg, superCtor);
  PRINT_LIST(UserDecl, decls);
  PRINT_LIST(ASTCtor, ctors);
}


// ------------------ UserDecl --------------------
void UserDecl::debugPrint(std::ostream &os, int indent) const
{
  PRINT_HEADER(UserDecl);

  PRINT_GENERIC(access);
  PRINT_STRING(code);
}


// -------------------- ASTCtor -----------------
void ASTCtor::debugPrint(std::ostream &os, int indent) const
{
  PRINT_HEADER(ASTCtor);

  PRINT_STRING(name);
  PRINT_LIST(CtorArg, args);
  PRINT_LIST(UserDecl, decls);
}


// ------------------ CtorArg -------------------
void CtorArg::debugPrint(std::ostream &os, int indent) const
{
  PRINT_HEADER(CtorArg);

  PRINT_BOOL(owner);
  PRINT_STRING(type);
  PRINT_STRING(name);
}


#endif // !GENERATED_AST_PRESENT
