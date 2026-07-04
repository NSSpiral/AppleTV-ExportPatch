/* Runtime dump - CPPDFAnnotationParserDelegate
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSMutableString * _characters;
    char _parseError;
    id _p;
    struct __CFArray * _quadPoints;
    struct CGRect _rect;
    struct __CFDictionary * _annotationDictionary;
    struct __CFString * _id;
    struct __CFString * _otherId;
    struct __CFString * _content;
    struct CGColor * _color;
}

@property (readonly, nonatomic) char parseError;
@property (nonatomic) struct __CFDictionary * annotationDictionary;
@property (readonly, nonatomic) struct CGRect rect;
@property (readonly, nonatomic) struct __CFString * annotationId;
@property (readonly, nonatomic) struct __CFString * otherId;
@property (readonly, nonatomic) struct __CFString * content;
@property (readonly, nonatomic) struct CGColor * color;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (CPPDFAnnotationParserDelegate *)init;
- (struct CGRect)rect;
- (struct CGColor *)color;
- (struct __CFString *)content;
- (char)parseError;
- (void)addQuadpoints;
- (struct __CFDictionary *)annotationDictionary;
- (void)setAnnotationDictionary:(struct __CFDictionary *)arg0;
- (struct __CFString *)annotationId;
- (struct __CFString *)otherId;
- (void)parserDidStartDocument:(NSObject *)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;

@end
