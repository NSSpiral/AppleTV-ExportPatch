/* Runtime dump - IMXMLParserFrame
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMXMLParserFrame : NSObject

- (void)parser:(NSXMLParser *)arg0 context:(NSObject *)arg1 didStartElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4 attributes:(NSDictionary *)arg5;
- (void)parser:(NSXMLParser *)arg0 context:(NSObject *)arg1 didEndElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4;
- (void)parser:(NSXMLParser *)arg0 context:(NSObject *)arg1 foundCharacters:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg0 context:(NSObject *)arg1 foundIgnorableWhitespace:(id)arg2;

@end
