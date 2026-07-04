/* Runtime dump - ATVXMLDocument
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVXMLDocument : ATVXMLNode

@property (retain, nonatomic) ATVXMLElement * rootElement;
@property (readonly, nonatomic) NSData * XMLData;

- (void)dealloc;
- (ATVXMLDocument *)init;
- (ATVXMLDocument *)initWithData:(NSData *)arg0 error:(id *)arg1;
- (NSData *)XMLData;
- (NSData *)makeDocumentFragmentWithData:(NSData *)arg0 error:(id *)arg1;
- (void)setDOMRootElement:(NSObject *)arg0;
- (id)makeElementNamed:(id)arg0;
- (id)makeDocumentFragment;
- (char)adoptNode:(NSObject *)arg0 error:(id *)arg1;
- (ATVXMLElement *)rootElement;
- (ATVXMLDocument *)initWithRootElement:(ATVXMLElement *)arg0;
- (void)setRootElement:(ATVXMLElement *)arg0;

@end
