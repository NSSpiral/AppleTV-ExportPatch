/* Runtime dump - CoreDAVXMLParser
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>
{
    CoreDAVXMLElementGenerator * _rootElementGenerator;
    CoreDAVXMLElementGenerator * _rootErrorGenerator;
    NSSet * _parseHints;
    NSURL * _baseURL;
}

@property (retain, nonatomic) NSSet * parseHints;
@property (retain, nonatomic) NSURL * baseURL;
@property (readonly, nonatomic) CoreDAVItem * rootElement;
@property (readonly, nonatomic) CoreDAVErrorItem * rootError;
@property (retain, nonatomic) CoreDAVXMLElementGenerator * rootElementGenerator;
@property (retain, nonatomic) CoreDAVXMLElementGenerator * rootErrorGenerator;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSError * parserError;

+ (char)canHandleContentType:(NSObject *)arg0;

- (void)dealloc;
- (CoreDAVXMLParser *)initWithData:(NSData *)arg0;
- (NSURL *)baseURL;
- (CoreDAVXMLParser *)initWithRootElementNameSpace:(NSObject *)arg0 name:(NSString *)arg1 parseClass:(Class)arg2 baseURL:(NSURL *)arg3;
- (void)setParseHints:(NSSet *)arg0;
- (char)processData:(NSData *)arg0 forTask:(NSObject *)arg1;
- (CoreDAVErrorItem *)rootError;
- (NSSet *)parseHints;
- (CoreDAVXMLElementGenerator *)rootErrorGenerator;
- (void)setRootErrorGenerator:(CoreDAVXMLElementGenerator *)arg0;
- (void)setRootElementGenerator:(CoreDAVXMLElementGenerator *)arg0;
- (CoreDAVXMLElementGenerator *)rootElementGenerator;
- (void)setBaseURL:(NSURL *)arg0;
- (CoreDAVItem *)rootElement;

@end
