/* Runtime dump - CoreDAVXMLData
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLData : NSObject
{
    char _shouldAddFormattingSpaces;
    struct _xmlTextWriter * _writer;
    struct _xmlDoc * _doc;
    char _docHasEnded;
    struct __CFDictionary * _seenURIsToPrefixes;
    struct __CFDictionary * _seenURIsToDepth;
    struct __CFArray * _elementStack;
}

@property (nonatomic) char shouldAddFormattingSpaces;
@property (readonly, nonatomic) NSData * data;

+ (char)string:(NSString *)arg0 isEqualToXmlCharString:(char *)arg1;

- (void)dealloc;
- (CoreDAVXMLData *)init;
- (NSData *)data;
- (void)startElement:(char *)arg0 inNamespace:(struct _xmlNode *)arg1 withAttributeNamesAndValues:(NSArray *)arg2;
- (void)appendElement:(NSObject *)arg0 inNamespace:(struct _xmlNode *)arg1 withStringContent:(NSObject *)arg2 withAttributeNamesAndValues:(NSArray *)arg3;
- (void)endElement:(NSObject *)arg0 inNamespace:(struct _xmlNode *)arg1;
- (void)setShouldAddFormattingSpaces:(char)arg0;
- (char *)_prefixForNameSpace:(SEL)arg0;
- (void)_startElement:(NSObject *)arg0 inNamespace:(struct _xmlNode *)arg1;
- (void)_startElement:(NSObject *)arg0 inNamespace:(struct _xmlNode *)arg1 withAttributeNamesAndValues:(NSArray *)arg2 attributes:(void *)arg3;
- (char)shouldAddFormattingSpaces;
- (void)startElement:(char *)arg0 inNamespace:(struct _xmlNode *)arg1 withAttributes:(NSDictionary *)arg2;
- (void)appendElement:(NSObject *)arg0 inNamespace:(struct _xmlNode *)arg1 withStringContentAsCDATA:(id)arg2 withAttributeNamesAndValues:(NSArray *)arg3;

@end
