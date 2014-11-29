


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #include "REcmaShellFileImporterAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RMessageHandler.h"
            
                #include "RProgressHandler.h"
            
            
        // includes for base ecma wrapper classes
        
            #include "REcmaFileImporter.h"
          

            #define QTSCRIPT_IS_GENERATED_FUNCTION(fun) ((fun.data().toUInt32() & 0xFFFF0000) == 0xBABE0000)
            #define QTSCRIPT_IS_FUNCTION_IN_CALL(fun) ((fun.data().toUInt32() & 0x0000F000) == 0x0000B000)

        
    // Destructor:
    REcmaShellFileImporterAdapter::~REcmaShellFileImporterAdapter() {}
        RFileImporterAdapter* REcmaShellFileImporterAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFileImporterAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFileImporterAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFileImporterAdapter.%1(): "
                        "This object is not a RFileImporterAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellFileImporterAdapter* REcmaShellFileImporterAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFileImporterAdapter* selfBase = getSelf(fName, context);
                REcmaShellFileImporterAdapter* self = dynamic_cast<REcmaShellFileImporterAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellFileImporterAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFileImporterAdapter.%1(): "
                    "This object is not a RFileImporterAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
        
    
    
    // Constructors:
    
      REcmaShellFileImporterAdapter::REcmaShellFileImporterAdapter(
                
            ) : RFileImporterAdapter(
                
                ) {
            }
        
      REcmaShellFileImporterAdapter::REcmaShellFileImporterAdapter(
                RDocument & document, RMessageHandler * messageHandler, RProgressHandler * progressHandler
            ) : RFileImporterAdapter(
                document, messageHandler, progressHandler
                ) {
            }
        
    
    
      bool REcmaShellFileImporterAdapter::importFile(
                const QString & fileName, const QString & nameFilter
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::importFile", engine);
                QScriptValue _q_function = __qtscript_self.property("importFile");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=2*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::importFile";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        bool ret =
                        RFileImporterAdapter::importFile(
                            fileName, nameFilter
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::importFile", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    bool res = qscriptvalue_cast< 
                        bool
                      >(
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: QString &, copyable: true
        << qScriptValueFromValue(engine, 

        fileName
        )
      



    // type: QString &, copyable: true
        << qScriptValueFromValue(engine, 

        nameFilter
        )
      
                            )
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::importFile", engine);

                    
                            return res;
                          
            }
        
    
  
        // methods of 1st level base class RFileImporter:
        
            // methods of 2nd level base class RImporter:
            
      void REcmaShellFileImporterAdapter::startImport(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::startImport", engine);
                QScriptValue _q_function = __qtscript_self.property("startImport");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::startImport";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RFileImporterAdapter::startImport(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::startImport", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::startImport", engine);

                    
            }
        
    
      void REcmaShellFileImporterAdapter::endImport(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::endImport", engine);
                QScriptValue _q_function = __qtscript_self.property("endImport");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::endImport";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RFileImporterAdapter::endImport(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::endImport", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self)
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::endImport", engine);

                    
            }
        
    
      void REcmaShellFileImporterAdapter::importObject(
                RObject * object
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::importObject", engine);
                QScriptValue _q_function = __qtscript_self.property("importObject");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::importObject";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RFileImporterAdapter::importObject(
                            object
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::importObject", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: RObject *, copyable: false
        << qScriptValueFromValue(engine, 

        object
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::importObject", engine);

                    
            }
        
    
      void REcmaShellFileImporterAdapter::setCurrentBlockId(
                RBlock::Id id
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::setCurrentBlockId", engine);
                QScriptValue _q_function = __qtscript_self.property("setCurrentBlockId");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::setCurrentBlockId";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RFileImporterAdapter::setCurrentBlockId(
                            id
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setCurrentBlockId", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: RBlock::Id, copyable: true
        << qScriptValueFromValue(engine, 

        id
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setCurrentBlockId", engine);

                    
            }
        
    
      RBlock::Id REcmaShellFileImporterAdapter::getCurrentBlockId(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::getCurrentBlockId", engine);
                QScriptValue _q_function = __qtscript_self.property("getCurrentBlockId");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::getCurrentBlockId";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RBlock::Id ret =
                        RFileImporterAdapter::getCurrentBlockId(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::getCurrentBlockId", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    RBlock::Id res = qscriptvalue_cast< 
                        RBlock::Id
                      >(
                    
                            _q_function.call(__qtscript_self)
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::getCurrentBlockId", engine);

                    
                            return res;
                          
            }
        
    
      RDocument & REcmaShellFileImporterAdapter::getDocument(
                
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::getDocument", engine);
                QScriptValue _q_function = __qtscript_self.property("getDocument");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=0*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::getDocument";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RDocument & ret =
                        RFileImporterAdapter::getDocument(
                            
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::getDocument", engine);

                        
                          return ret;
                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    RDocument* res = qscriptvalue_cast< 
                        RDocument*
                      >(
                    
                            _q_function.call(__qtscript_self)
                        
                      )
                    
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::getDocument", engine);

                    
                            return *res;
                        
            }
        
    
      void REcmaShellFileImporterAdapter::setDocument(
                RDocument * d
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::setDocument", engine);
                QScriptValue _q_function = __qtscript_self.property("setDocument");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=1*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::setDocument";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RFileImporterAdapter::setDocument(
                            d
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setDocument", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: RDocument *, copyable: false
        << qScriptValueFromValue(engine, 

        d
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setDocument", engine);

                    
            }
        
    
      void REcmaShellFileImporterAdapter::setKnownVariable(
                RS::KnownVariable key, const QVariant & value
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::setKnownVariable", engine);
                QScriptValue _q_function = __qtscript_self.property("setKnownVariable");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=2*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::setKnownVariable";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RFileImporterAdapter::setKnownVariable(
                            key, value
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setKnownVariable", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: RS::KnownVariable, copyable: true
        << qScriptValueFromValue(engine, 

        key
        )
      



    // type: QVariant &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new QVariant(value)
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setKnownVariable", engine);

                    
            }
        
      void REcmaShellFileImporterAdapter::setKnownVariable(
                RS::KnownVariable key, const RVector & value
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("REcmaShellFileImporterAdapter::setKnownVariable", engine);
                QScriptValue _q_function = __qtscript_self.property("setKnownVariable");



                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=2*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") & QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "RFileImporterAdapter::setKnownVariable";
                    
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev & 0xFFFF0000));
                        //}
                        RFileImporterAdapter::setKnownVariable(
                            key, value
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setKnownVariable", engine);

                        
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                



    // type: RS::KnownVariable, copyable: true
        << qScriptValueFromValue(engine, 

        key
        )
      



    // type: RVector &, copyable: true
        << qScriptValueFromValue(engine, 

        
            // const reference argument - make a new object:
            new RVector(value)
        )
      
                            )
                        
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("REcmaShellFileImporterAdapter::setKnownVariable", engine);

                    
            }
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	