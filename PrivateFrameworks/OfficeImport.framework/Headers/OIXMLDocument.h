/* Runtime dump - OIXMLDocument
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OIXMLDocument : OIXMLNode
{
    OIXMLElement * _rootElement;
    NSString * _version;
    NSString * _encoding;
}

- (void)dealloc;
- (NSString *)description;
- (OIXMLDocument *)copyWithZone:(struct _NSZone *)arg0;
- (void)setVersion:(NSString *)arg0;
- (OIXMLElement *)rootElement;
- (NSString *)openingTagString;
- (NSString *)XMLString;
- (NSString *)closingTagString;
- (OIXMLDocument *)initWithRootElement:(OIXMLElement *)arg0;
- (void)setCharacterEncoding:(unsigned int)arg0;
- (void)setRootElement:(OIXMLElement *)arg0;
- (NSString *)createMutableXMLString;
- (NSString *)contentString;

@end
