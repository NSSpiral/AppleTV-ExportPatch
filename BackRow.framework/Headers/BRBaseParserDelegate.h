/* Runtime dump - BRBaseParserDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol NSXMLParserDelegate;
@interface BRBaseParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSMutableString * _characters;
    char _ignoreCharacters;
    char _trimWhitespace;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (SEL)startSelectorForElementName:(NSString *)arg0 namespaceURI:(NSString *)arg1;
- (SEL)endSelectorForElementName:(NSString *)arg0 namespaceURI:(NSString *)arg1;
- (void)setTrimWhitespace:(char)arg0;
- (void)resetCharacters;
- (void)setIgnoreCharacters:(char)arg0;
- (char)ignoreCharacters;
- (void)dealloc;
- (NSMutableString *)characters;
- (char)trimWhitespace;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;

@end
