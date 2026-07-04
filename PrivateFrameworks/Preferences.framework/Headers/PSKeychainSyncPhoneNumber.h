/* Runtime dump - PSKeychainSyncPhoneNumber
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSKeychainSyncPhoneNumber : NSObject
{
    NSString * _digits;
    KeychainSyncCountryInfo * _countryInfo;
}

@property (retain, nonatomic) NSString * digits;
@property (retain, nonatomic) KeychainSyncCountryInfo * countryInfo;

+ (PSKeychainSyncPhoneNumber *)phoneNumberWithDigits:(NSString *)arg0 countryInfo:(KeychainSyncCountryInfo *)arg1;

- (NSString *)digits;
- (void)dealloc;
- (KeychainSyncCountryInfo *)countryInfo;
- (void)setCountryInfo:(KeychainSyncCountryInfo *)arg0;
- (void)setDigits:(NSString *)arg0;
- (NSString *)formattedString;
- (NSString *)_stringByAddingDialingPrefixToString:(NSString *)arg0;
- (NSString *)formattedStringWithDialingPrefix;
- (NSString *)formattedAndObfuscatedString;

@end
