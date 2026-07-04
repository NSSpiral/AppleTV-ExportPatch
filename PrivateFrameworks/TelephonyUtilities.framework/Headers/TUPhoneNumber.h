/* Runtime dump - TUPhoneNumber
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding>
{
    struct __CFPhoneNumber * _phoneNumberRef;
}

@property (readonly) NSString * digits;
@property (readonly) NSString * countryCode;
@property (readonly) NSString * formattedRepresentation;
@property (readonly) NSString * formattedInternationalRepresentation;
@property (readonly) NSString * unformattedInternationalRepresentation;
@property struct __CFPhoneNumber * phoneNumberRef;

+ (TUPhoneNumber *)phoneNumberWithDigits:(NSString *)arg0 countryCode:(NSString *)arg1;
+ (char)supportsSecureCoding;
+ (TUPhoneNumber *)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg0;

- (TUPhoneNumber *)initWithDigits:(NSString *)arg0 countryCode:(NSString *)arg1;
- (NSString *)digits;
- (void)dealloc;
- (TUPhoneNumber *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (struct __CFPhoneNumber *)phoneNumberRef;
- (TUPhoneNumber *)initWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg0;
- (NSString *)formattedRepresentation;
- (NSString *)formattedInternationalRepresentation;
- (NSString *)unformattedInternationalRepresentation;
- (void)setPhoneNumberRef:(struct __CFPhoneNumber *)arg0;
- (NSString *)countryCode;

@end
