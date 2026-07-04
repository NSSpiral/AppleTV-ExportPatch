/* Runtime dump - RUIParser
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser * _parser;
    RUIObjectModel * _uiObjectModel;
    NSMutableArray * _pages;
    NSMutableArray * _currentPageStack;
    int _actionSignal;
    int _parserState;
    NSURL * _baseURL;
    NSMutableString * _accumulator;
    NSDictionary * _currentElementAttributes;
    char _succeeded;
    NSData * _xmlData;
    <RUIParserDelegate> * _delegate;
}

@property (retain, nonatomic) NSURL * baseURL;
@property (retain, nonatomic) NSData * xmlData;
@property (readonly, nonatomic) char succeeded;
@property (weak, nonatomic) <RUIParserDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)textAlignmentForString:(NSString *)arg0;

- (char)succeeded;
- (void)dealloc;
- (void)setDelegate:(<RUIParserDelegate> *)arg0;
- (<RUIParserDelegate> *)delegate;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (void)setBaseURL:(NSURL *)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 foundCDATA:(NSData *)arg1;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;
- (void)parser:(NSXMLParser *)arg0 validationErrorOccurred:(NSError *)arg1;
- (RUIParser *)initWithXML:(id)arg0 baseURL:(NSURL *)arg1 delegate:(<RUIParserDelegate> *)arg2;
- (RUIObjectModel *)uiObjectModel;
- (int)actionSignal;
- (RUIParser *)initWithXML:(id)arg0;
- (void)setXmlData:(NSData *)arg0;
- (NSString *)_createPageWithName:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (NSDictionary *)_createAndAddPageWithAttributes:(NSDictionary *)arg0;
- (id)_lastPageCreateIfNeeded;
- (void)_addSectionWithAttributes:(NSDictionary *)arg0;
- (void)_addTableHeaderViewWithAttributes:(NSDictionary *)arg0;
- (void)_addTableFooterViewWithAttributes:(NSDictionary *)arg0;
- (void)_newRowWithAttributeDict:(id)arg0;
- (void)_addNavigationBarWithAttributes:(NSDictionary *)arg0;
- (id)_lastRow;
- (void)_addSectionHeaderText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1 isHTML:(char)arg2;
- (void)_addSectionDetailHeaderText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)_addSectionSubHeaderText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)_addSectionFooterText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1 isHTML:(char)arg2;
- (void)_finalizeSection;
- (NSData *)xmlData;

@end
