/* Runtime dump - UIPDFParserDelegate
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate>
{
    id _p;
    struct CGPath * _path;
    char _parserError;
}

@property (readonly) struct CGPath * path;
@property (readonly) char parserError;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UIPDFParserDelegate *)init;
- (struct CGPath *)path;
- (char)parserError;
- (void)parserDidStartDocument:(NSObject *)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;

@end
