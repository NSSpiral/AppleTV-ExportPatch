/* Runtime dump - IKDOMDocument
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMDocument : IKDOMNode <IKJSDOMDocument, IKJSDOMXPathEvaluator>
{
    <IKJSDOMDocumentAppBridge> * _appBridge;
    unsigned int _itmlIDSequence;
}

@property (weak, nonatomic) <IKJSDOMDocumentAppBridge> * appBridge;
@property (weak, nonatomic) IKJSNavigationDocument * navigationDocument;
@property (nonatomic) unsigned int itmlIDSequence;
@property (readonly, weak, nonatomic) IKDOMImplementation * implementation;
@property (readonly, retain, nonatomic) IKDOMElement * documentElement;
@property (readonly, retain, nonatomic) NSString * inputEncoding;
@property (readonly, retain, nonatomic) NSString * xmlEncoding;
@property (nonatomic) char xmlStandalone;
@property (retain, nonatomic) NSString * xmlVersion;
@property (nonatomic) char strictErrorChecking;
@property (retain, nonatomic) NSString * documentURI;

+ (struct _xmlDoc *)_documentWithXMLStr:(struct _xmlNode *)arg0 lsInput:(struct _xmlNode *)arg1 error:(struct _xmlDoc *)arg2;

- (void)replace:(struct tmat4x4<float> *)arg0;
- (NSObject *)createElement:(NSObject *)arg0;
- (IKDOMElement *)documentElement;
- (NSString *)getElementsByTagName:(NSString *)arg0;
- (int)nodeType;
- (void).cxx_destruct;
- (IKDOMDocument *)initWithAppContext:(<IKApplication> *)arg0;
- (void)setAppBridge:(<IKJSDOMDocumentAppBridge> *)arg0;
- (IKJSNavigationDocument *)navigationDocument;
- (id)snapshotImpressions;
- (id)recordedImpressions;
- (<IKJSDOMDocumentAppBridge> *)appBridge;
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode *)arg0;
- (void)setITMLIDForNode:(NSObject *)arg0;
- (void)runTest:(id /* block */)arg0 :(id)arg1;
- (char)strictErrorChecking;
- (void)setStrictErrorChecking:(char)arg0;
- (IKDOMDocument *)initWithAppContext:(<IKApplication> *)arg0 xmlStr:(id)arg1 error:(id *)arg2;
- (IKDOMDocument *)initWithAppContext:(<IKApplication> *)arg0 input:(BWNodeInput *)arg1 error:(id *)arg2;
- (IKDOMDocument *)initWithAppContext:(<IKApplication> *)arg0 qualifiedName:(NSString *)arg1;
- (char)markUpdated;
- (void)setNavigationDocument:(IKJSNavigationDocument *)arg0;
- (unsigned int)itmlIDSequence;
- (void)setItmlIDSequence:(unsigned int)arg0;
- (void)scrollToTop;
- (void)setNeedsUpdate;
- (NSString *)nodeName;
- (IKDOMImplementation *)implementation;
- (NSString *)inputEncoding;
- (NSString *)xmlEncoding;
- (NSString *)xmlVersion;
- (void)setXmlVersion:(NSString *)arg0;
- (char)xmlStandalone;
- (void)setXmlStandalone:(char)arg0;
- (NSString *)documentURI;
- (void)setDocumentURI:(NSString *)arg0;
- (id)createDocumentFragment;
- (NSObject *)createTextNode:(NSObject *)arg0;
- (id)createComment:(id)arg0;
- (NSObject *)getElementById:(NSObject *)arg0;
- (NSObject *)adoptNode:(NSObject *)arg0;
- (NSObject *)createExpression:(NSObject *)arg0 :(id)arg1;
- (id)evaluate:(CPMLModelEvaluate *)arg0 :(id)arg1 :(id)arg2 :(int)arg3 :(id)arg4;

@end
