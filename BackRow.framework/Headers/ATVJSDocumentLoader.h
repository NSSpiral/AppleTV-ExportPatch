/* Runtime dump - ATVJSDocumentLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext, ATVRemoteImageCacher;
@interface ATVJSDocumentLoader : NSObject
{
    char _isUsed;
    ATVJSContext * _context;
    NSString * _functionName;
    ATVXMLDocument * _origXMLDocument;
    ATVXMLDocument * _xmlDocument;
    id _jsCallback;
    ATVRemoteImageCacher * _remoteImageCacher;
}

@property (retain, nonatomic) ATVJSContext * context;
@property (copy, nonatomic) NSString * functionName;
@property (retain, nonatomic) ATVXMLDocument * origXMLDocument;
@property (retain, nonatomic) ATVXMLDocument * xmlDocument;
@property (copy, nonatomic) id jsCallback;
@property (nonatomic) char isUsed;
@property (retain, nonatomic) ATVRemoteImageCacher * remoteImageCacher;

+ (NSString *)documentLoaderForContext:(struct OpaqueJSContext *)arg0 functionName:(NSString *)arg1 argumentCount:(unsigned long)arg2 arguments:(struct OpaqueJSValue * *)arg3 exception:(struct OpaqueJSValue *)arg4;

- (void)loadDocumentViewByReusingJSContext:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)setXmlDocument:(ATVXMLDocument *)arg0;
- (void)loadDocumentByReusingJSContext:(char)arg0 completionHandler:(id /* block */)arg1;
- (ATVJSDocumentLoader *)initWithContext:(ATVJSContext *)arg0 functionName:(NSString *)arg1 xmlDocument:(ATVXMLDocument *)arg2 jsCallback:(id /* block */)arg3;
- (char)isUsed;
- (void)setIsUsed:(char)arg0;
- (ATVXMLDocument *)origXMLDocument;
- (id /* block */)jsCallback;
- (void)setRemoteImageCacher:(ATVRemoteImageCacher *)arg0;
- (void)setFunctionName:(NSString *)arg0;
- (void)setOrigXMLDocument:(ATVXMLDocument *)arg0;
- (void)setJsCallback:(id /* block */)arg0;
- (ATVRemoteImageCacher *)remoteImageCacher;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (void).cxx_destruct;
- (NSString *)functionName;
- (ATVXMLDocument *)xmlDocument;

@end
