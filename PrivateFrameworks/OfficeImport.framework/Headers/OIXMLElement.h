/* Runtime dump - OIXMLElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OIXMLElement : OIXMLNode
{
    id _attributes;
    id _children;
    char _hasMultipleAttributes;
    char _hasMultipleChildren;
}

+ (void)_initEmptyHTMLNames;
+ (char)isEmptyHTMLElement:(NSObject *)arg0;

- (void)dealloc;
- (OIXMLElement *)init;
- (OIXMLElement *)copyWithZone:(struct _NSZone *)arg0;
- (void)setObjectValue:(<NSObject> *)arg0;
- (<NSObject> *)objectValue;
- (NSString *)stringValue;
- (void)addAttribute:(struct __CFString *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (NSString *)openingTagString;
- (NSString *)closingTagString;
- (int)childrenCount;
- (OIXMLElement *)initWithName:(NSString *)arg0 stringValue:(NSString *)arg1;
- (void)insertChild:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)_appendXMLStringToString:(struct __CFString *)arg0 level:(int)arg1;
- (int)attributeCount;
- (NSString *)contentString;

@end
