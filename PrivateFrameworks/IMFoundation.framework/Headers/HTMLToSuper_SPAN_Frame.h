/* Runtime dump - HTMLToSuper_SPAN_Frame
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface HTMLToSuper_SPAN_Frame : HTMLToSuper_Default_Frame
{
    char _shouldPopBackgroundColor;
    char _shouldPopForegroundColor;
    char _shouldPopFontFamily;
    char _shouldPopFontSize;
    char _shouldDecrementBoldCount;
    char _shouldDecrementItalicCount;
    char _shouldDecrementUnderlineCount;
    char _shouldDecrementStrikeCount;
}

- (void)parser:(NSXMLParser *)arg0 context:(NSObject *)arg1 didStartElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4 attributes:(NSDictionary *)arg5;
- (void)parser:(NSXMLParser *)arg0 context:(NSObject *)arg1 didEndElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4;

@end
