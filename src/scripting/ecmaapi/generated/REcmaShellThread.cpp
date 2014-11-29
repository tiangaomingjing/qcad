


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #include "REcmaShellThread.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        

            #define QTSCRIPT_IS_GENERATED_FUNCTION(fun) ((fun.data().toUInt32() & 0xFFFF0000) == 0xBABE0000)
            #define QTSCRIPT_IS_FUNCTION_IN_CALL(fun) ((fun.data().toUInt32() & 0x0000F000) == 0x0000B000)

        
    // Destructor:
    REcmaShellThread::~REcmaShellThread() {}
        RThread* REcmaShellThread::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RThread* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RThread >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RThread.%1(): "
                        "This object is not a RThread").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellThread* REcmaShellThread::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RThread* selfBase = getSelf(fName, context);
                REcmaShellThread* self = dynamic_cast<REcmaShellThread*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellThread >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RThread.%1(): "
                    "This object is not a RThread").arg(fName),
                    context);
            }

            return self;
            


        }
        
    
    
    // Constructors:
    
      REcmaShellThread::REcmaShellThread(
                QObject * parent
            ) : RThread(
                parent
                ) {
            }
        
    
    
      void REcmaShellThread::start(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellThread::start", engine);
                QScriptValue _q_function = __qtscript_self.property("start");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RThread::start";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RThread::start(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellThread::start", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellThread::start", engine);

                    
            }
        
    
    
      void REcmaShellThread::yieldCurrentThread(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellThread::yieldCurrentThread", engine);
                QScriptValue _q_function = __qtscript_self.property("yieldCurrentThread");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RThread::yieldCurrentThread";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RThread::yieldCurrentThread(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellThread::yieldCurrentThread", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellThread::yieldCurrentThread", engine);

                    
            }
        
    
    
      QString REcmaShellThread::currentThreadAddress(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellThread::currentThreadAddress", engine);
                QScriptValue _q_function = __qtscript_self.property("currentThreadAddress");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RThread::currentThreadAddress";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        QString ret =
                        RThread::currentThreadAddress(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellThread::currentThreadAddress", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    QString res = qscriptvalue_cast< 
                        QString
                      >(
                    
                            _q_function.call(__qtscript_self)
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellThread::currentThreadAddress", engine);

                    
                            return res;
                          
            }
        
    
    
      QString REcmaShellThread::currentThreadName(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellThread::currentThreadName", engine);
                QScriptValue _q_function = __qtscript_self.property("currentThreadName");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RThread::currentThreadName";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        QString ret =
                        RThread::currentThreadName(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellThread::currentThreadName", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    QString res = qscriptvalue_cast< 
                        QString
                      >(
                    
                            _q_function.call(__qtscript_self)
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellThread::currentThreadName", engine);

                    
                            return res;
                          
            }
        
    
    
      RThread * REcmaShellThread::currentThread(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellThread::currentThread", engine);
                QScriptValue _q_function = __qtscript_self.property("currentThread");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RThread::currentThread";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RThread * ret =
                        RThread::currentThread(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellThread::currentThread", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    RThread * res = qscriptvalue_cast< 
                        RThread *
                      >(
                    
                            _q_function.call(__qtscript_self)
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellThread::currentThread", engine);

                    
                            return res;
                          
            }
        
    
    
      void REcmaShellThread::run(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellThread::run", engine);
                QScriptValue _q_function = __qtscript_self.property("run");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RThread::run";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RThread::run(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellThread::run", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                        // temporary make protected function scriptable, only from the context of this function call:
                        QScriptValue proto = engine->defaultPrototype(qMetaTypeId<RThread*>());
                        REcmaHelper::registerFunction(engine, &proto, run, "run");
                        
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellThread::run", engine);

                    
            }
        
    
  

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	 QScriptValue
        REcmaShellThread::run
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaShellThread::run", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaShellThread::run";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // protected function: can only be called from ECMA shell:
                    REcmaShellThread* self = 
                        getSelfShell("", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->RThread::run();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RThread.run().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaShellThread::run", context, engine);
            return result;
        }
        