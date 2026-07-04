/* Runtime dump - CoreDAVXMLElementGenerator
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate>
{
    int _parsingState;
    SEL _parentElementSetter;
    CoreDAVItem * _element;
    CoreDAVItem * _parentElement;
    CoreDAVXMLElementGenerator * _parentGenerator;
    NSMutableData * _characters;
    NSMutableData * _cDATA;
    CoreDAVXMLElementGenerator * _currentlyParsingSubItem;
    NSDictionary * _cachedElementParseRules;
    char _checkedElementValidityIfRootElement;
    char _isUnrecognized;
    NSURL * _baseURL;
}

@property (retain, nonatomic) CoreDAVItem * element;
@property (nonatomic) char isUnrecognized;
@property (nonatomic) char checkedElementValidityIfRootElement;
@property (nonatomic) int parsingState;
@property (nonatomic) SEL parentElementSetter;
@property (retain, nonatomic) NSMutableData * characters;
@property (retain, nonatomic) NSMutableData * cDATA;
@property (retain, nonatomic) CoreDAVXMLElementGenerator * currentlyParsingSubItem;
@property (nonatomic) CoreDAVXMLElementGenerator * parentGenerator;
@property (retain, nonatomic) NSDictionary * cachedElementParseRules;
@property (retain, nonatomic) NSURL * baseURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSMutableData *)characters;
- (NSURL *)baseURL;
- (CoreDAVXMLElementGenerator *)initWithParser:(NSObject *)arg0 parentGenerator:(CoreDAVXMLElementGenerator *)arg1 parentElementSetter:(SEL)arg2 element:(CoreDAVItem *)arg3;
- (CoreDAVXMLElementGenerator *)parentGenerator;
- (CoreDAVItem *)element;
- (char)tracksRootElement;
- (char)checkedElementValidityIfRootElement;
- (void)setCheckedElementValidityIfRootElement:(char)arg0;
- (char)isExpectedNameSpace:(NSObject *)arg0 andElementName:(NSString *)arg1;
- (void)noteChildCascadingFailure;
- (void)notifyElement:(NSObject *)arg0 ofAttributesFound:(id)arg1;
- (NSDictionary *)cachedElementParseRules;
- (void)setCachedElementParseRules:(NSDictionary *)arg0;
- (void)setIsUnrecognized:(char)arg0;
- (NSMutableData *)cDATA;
- (char)isUnrecognized;
- (SEL)parentElementSetter;
- (void)setCharacters:(NSMutableData *)arg0;
- (void)setCDATA:(NSMutableData *)arg0;
- (void)resumeParsingWithParser:(NSObject *)arg0;
- (CoreDAVXMLElementGenerator *)initWithParser:(NSObject *)arg0 baseURL:(NSURL *)arg1 rootElementNameSpace:(NSObject *)arg2 elementName:(NSString *)arg3 parseClass:(Class)arg4;
- (void)setParentElementSetter:(SEL)arg0;
- (void)setElement:(CoreDAVItem *)arg0;
- (void)setParentGenerator:(CoreDAVXMLElementGenerator *)arg0;
- (int)parsingState;
- (void)setParsingState:(int)arg0;
- (CoreDAVXMLElementGenerator *)currentlyParsingSubItem;
- (void)setCurrentlyParsingSubItem:(CoreDAVXMLElementGenerator *)arg0;
- (void)setBaseURL:(NSURL *)arg0;
- (void)parserDidEndDocument:(NSObject *)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 foundCDATA:(NSData *)arg1;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;
- (void)parser:(NSXMLParser *)arg0 validationErrorOccurred:(NSError *)arg1;

@end
