/* Runtime dump - UIPDFAnnotationParserDelegate
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSMutableString * _characters;
    char _parseError;
    UIPDFAnnotation * _annotation;
}

@property (retain, nonatomic) UIPDFAnnotation * annotation;
@property (readonly, nonatomic) char parseError;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UIPDFAnnotationParserDelegate *)init;
- (UIPDFAnnotation *)annotation;
- (void)setAnnotation:(UIPDFAnnotation *)arg0;
- (char)parseError;
- (void)parserDidStartDocument:(NSObject *)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;

@end
