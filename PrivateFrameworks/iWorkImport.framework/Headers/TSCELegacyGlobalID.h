/* Runtime dump - TSCELegacyGlobalID
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCELegacyGlobalID : NSObject <NSCopying, NSCoding>
{
    id mBytes;
}

- (NSString *)newStringValue;
- (id)newStringForTableReferencesInNativeSyntax;
- (NSString *)stringForTableReferencesInNativeSyntax;
- (TSCELegacyGlobalID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TSCELegacyGlobalID *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCELegacyGlobalID *)copyWithZone:(struct _NSZone *)arg0;
- (TSCELegacyGlobalID *)initWithString:(NSString *)arg0;
- (NSString *)stringValue;

@end
