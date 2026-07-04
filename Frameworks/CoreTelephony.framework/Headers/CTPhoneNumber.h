/* Runtime dump - CTPhoneNumber
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress>
{
    NSString * _digits;
    NSString * _countryCode;
    char _isShortCode;
}

@property (readonly) NSString * digits;
@property (readonly) NSString * countryCode;
@property char isShortCode;

+ (CTPhoneNumber *)phoneNumberWithDigits:(NSString *)arg0 countryCode:(NSString *)arg1;
+ (BOOL)isValidPhoneNumber:(NSNumber *)arg0;
+ (BOOL)isValidPhoneNumberChar:(unsigned short)arg0;

- (CTPhoneNumber *)initWithDigits:(NSString *)arg0 countryCode:(NSString *)arg1;
- (NSString *)encodedString;
- (char)isShortCode;
- (NSString *)canonicalFormat;
- (id)formatForCallingCountry:(id)arg0;
- (int)numberOfDigitsForShortCodeNumber;
- (void)setIsShortCode:(char)arg0;
- (NSString *)digits;
- (void)dealloc;
- (CTPhoneNumber *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)countryCode;

@end
