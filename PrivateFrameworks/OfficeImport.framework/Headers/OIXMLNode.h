/* Runtime dump - OIXMLNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OIXMLNode : NSObject <NSCopying>
{
    unsigned int _kind;
    NSString * _name;
    id _value;
}

+ (NSString *)elementWithName:(NSString *)arg0;
+ (NSString *)elementWithName:(NSString *)arg0 stringValue:(NSString *)arg1;
+ (NSString *)attributeWithName:(NSString *)arg0 stringValue:(NSString *)arg1;
+ (NSString *)textWithStringValue:(NSString *)arg0;
+ (void)_escapeCharacters:(unsigned short *)arg0 amount:(unsigned short)arg1 escapeWhiteSpaces:(unsigned int)arg2 inString:(char)arg3 appendingToString:(NSString *)arg4;
+ (void)_escapeHTMLAttributeCharacters:(id)arg0 withQuote:(unsigned short)arg1 appendingToString:(struct __CFString *)arg2;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (OIXMLNode *)copyWithZone:(struct _NSZone *)arg0;
- (void)setObjectValue:(<NSObject> *)arg0;
- (<NSObject> *)objectValue;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (unsigned int)kind;
- (NSString *)openingTagString;
- (NSString *)XMLString;
- (NSString *)closingTagString;
- (OIXMLNode *)initWithKind:(unsigned int)arg0;
- (void)_appendXMLStringToString:(struct __CFString *)arg0 level:(int)arg1;
- (OIXMLNode *)initWithKind:(unsigned int)arg0 name:(NSString *)arg1 stringValue:(NSString *)arg2;
- (NSString *)contentString;

@end
