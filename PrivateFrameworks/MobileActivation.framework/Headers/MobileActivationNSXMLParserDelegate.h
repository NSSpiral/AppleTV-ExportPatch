/* Runtime dump - MobileActivationNSXMLParserDelegate
 * Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate>
{
    int _state;
    BOOL _renderHTML;
    NSMutableString * _currentPlist;
    NSMutableDictionary * _activationTicket;
    BOOL _recertifying;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (MobileActivationNSXMLParserDelegate *)init;
- (NSObject *)stringForState:(int)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (NSObject *)activationTicket:(id *)arg0 andRenderHTML:(BOOL *)arg1;
- (NSString *)flattenedDictString:(NSString *)arg0;
- (void)appendClosingTagForElementName:(NSString *)arg0;
- (void)appendOpeningTagForElementName:(NSString *)arg0 andAttributes:(NSDictionary *)arg1;
- (void)setRecertifying:(BOOL)arg0;
- (NSObject *)activationTicket:(id *)arg0;

@end
