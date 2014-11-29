


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #include "REcmaShellRestrictAngleLength.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
        
            #include "REcmaSnapRestriction.h"
          

            #define QTSCRIPT_IS_GENERATED_FUNCTION(fun) ((fun.data().toUInt32() & 0xFFFF0000) == 0xBABE0000)
            #define QTSCRIPT_IS_FUNCTION_IN_CALL(fun) ((fun.data().toUInt32() & 0x0000F000) == 0x0000B000)

        
    // Destructor:
    REcmaShellRestrictAngleLength::~REcmaShellRestrictAngleLength() {}
        RRestrictAngleLength* REcmaShellRestrictAngleLength::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RRestrictAngleLength* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RRestrictAngleLength >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RRestrictAngleLength.%1(): "
                        "This object is not a RRestrictAngleLength").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellRestrictAngleLength* REcmaShellRestrictAngleLength::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RRestrictAngleLength* selfBase = getSelf(fName, context);
                REcmaShellRestrictAngleLength* self = dynamic_cast<REcmaShellRestrictAngleLength*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellRestrictAngleLength >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RRestrictAngleLength.%1(): "
                    "This object is not a RRestrictAngleLength").arg(fName),
                    context);
            }

            return self;
            


        }
        
    
    
      
      
      
      
    
    
    // Constructors:
    
      REcmaShellRestrictAngleLength::REcmaShellRestrictAngleLength(
                RDocumentInterface * documentInterface
            ) : RRestrictAngleLength(
                documentInterface
                ) {
            }
        
      REcmaShellRestrictAngleLength::REcmaShellRestrictAngleLength(
                RDocumentInterface * documentInterface, double baseAngle, double angle, double baseLength, double length
            ) : RRestrictAngleLength(
                documentInterface, baseAngle, angle, baseLength, length
                ) {
            }
        
    
    
      RVector REcmaShellRestrictAngleLength::restrictSnap(
                const RVector & position, const RVector & relativeZero
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::restrictSnap", engine);
                QScriptValue _q_function = __qtscript_self.property("restrictSnap");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=2*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::restrictSnap";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RVector ret =
                        RRestrictAngleLength::restrictSnap(
                            position, relativeZero
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::restrictSnap", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    RVector res = qscriptvalue_cast< 
                        RVector
                      >(
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: RVector &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new RVector(position)
        )
      



    // type: RVector &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new RVector(relativeZero)
        )
      
                            )
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::restrictSnap", engine);

                    
                            return res;
                          
            }
        
    
    
      void REcmaShellRestrictAngleLength::setBaseAngle(
                double a
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::setBaseAngle", engine);
                QScriptValue _q_function = __qtscript_self.property("setBaseAngle");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::setBaseAngle";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::setBaseAngle(
                            a
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setBaseAngle", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: double, copyable: true
        << qScriptValueFromValue(engine, 

        a
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setBaseAngle", engine);

                    
            }
        
    
    
      void REcmaShellRestrictAngleLength::setAngle(
                double a
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::setAngle", engine);
                QScriptValue _q_function = __qtscript_self.property("setAngle");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::setAngle";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::setAngle(
                            a
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setAngle", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: double, copyable: true
        << qScriptValueFromValue(engine, 

        a
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setAngle", engine);

                    
            }
        
    
    
      void REcmaShellRestrictAngleLength::setBaseLength(
                double l
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::setBaseLength", engine);
                QScriptValue _q_function = __qtscript_self.property("setBaseLength");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::setBaseLength";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::setBaseLength(
                            l
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setBaseLength", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: double, copyable: true
        << qScriptValueFromValue(engine, 

        l
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setBaseLength", engine);

                    
            }
        
    
    
      void REcmaShellRestrictAngleLength::setLength(
                double l
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::setLength", engine);
                QScriptValue _q_function = __qtscript_self.property("setLength");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::setLength";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::setLength(
                            l
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setLength", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: double, copyable: true
        << qScriptValueFromValue(engine, 

        l
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setLength", engine);

                    
            }
        
    
    
      void REcmaShellRestrictAngleLength::setRestrictAngle(
                bool on
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::setRestrictAngle", engine);
                QScriptValue _q_function = __qtscript_self.property("setRestrictAngle");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::setRestrictAngle";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::setRestrictAngle(
                            on
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setRestrictAngle", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: bool, copyable: true
        << qScriptValueFromValue(engine, 

        on
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setRestrictAngle", engine);

                    
            }
        
    
    
      void REcmaShellRestrictAngleLength::setRestrictLength(
                bool on
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::setRestrictLength", engine);
                QScriptValue _q_function = __qtscript_self.property("setRestrictLength");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::setRestrictLength";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::setRestrictLength(
                            on
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setRestrictLength", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: bool, copyable: true
        << qScriptValueFromValue(engine, 

        on
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::setRestrictLength", engine);

                    
            }
        
    
  
        // methods of 1st level base class RSnapRestriction:
        
      void REcmaShellRestrictAngleLength::showUiOptions(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::showUiOptions", engine);
                QScriptValue _q_function = __qtscript_self.property("showUiOptions");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::showUiOptions";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::showUiOptions(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::showUiOptions", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::showUiOptions", engine);

                    
            }
        
    
      void REcmaShellRestrictAngleLength::hideUiOptions(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::hideUiOptions", engine);
                QScriptValue _q_function = __qtscript_self.property("hideUiOptions");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::hideUiOptions";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::hideUiOptions(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::hideUiOptions", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::hideUiOptions", engine);

                    
            }
        
    
      RVector REcmaShellRestrictAngleLength::getLastSnap(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::getLastSnap", engine);
                QScriptValue _q_function = __qtscript_self.property("getLastSnap");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::getLastSnap";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RVector ret =
                        RRestrictAngleLength::getLastSnap(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::getLastSnap", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    RVector res = qscriptvalue_cast< 
                        RVector
                      >(
                    
                            _q_function.call(__qtscript_self)
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::getLastSnap", engine);

                    
                            return res;
                          
            }
        
    
      void REcmaShellRestrictAngleLength::reset(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellRestrictAngleLength::reset", engine);
                QScriptValue _q_function = __qtscript_self.property("reset");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RRestrictAngleLength::reset";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RRestrictAngleLength::reset(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::reset", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellRestrictAngleLength::reset", engine);

                    
            }
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	