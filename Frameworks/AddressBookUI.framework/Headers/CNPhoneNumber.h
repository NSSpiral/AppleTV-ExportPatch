/* Runtime dump - CNPhoneNumber
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNPhoneNumber : NSObject <NSCopying>
{
    NSString * _cachedFormattedNormalizedStringValue;
    NSString * _cachedNormalizedStringValue;
    NSString * _stringValue;
}

@property (readonly, copy) NSString * stringValue;
@property (readonly, copy) NSString * countryCode;
@property (readonly, copy) NSString * formattedStringValue;
@property (readonly, copy) NSString * normalizedStringValue;

+ (CNPhoneNumber *)phoneNumberWithStringValue:(NSString *)arg0;

- (NSString *)normalizedStringValue;
- (NSString *)formattedStringValue;
- (CNPhoneNumber *)initWithStringValue:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (CNPhoneNumber *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)stringValue;
- (NSString *)countryCode;

@end
