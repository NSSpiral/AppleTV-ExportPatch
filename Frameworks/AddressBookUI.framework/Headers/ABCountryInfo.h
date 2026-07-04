/* Runtime dump - ABCountryInfo
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCountryInfo : NSObject
{
    NSString * _countryCode;
    NSString * _countryName;
    NSString * _phoneticCountryName;
}

@property (copy, nonatomic) NSString * countryCode;
@property (copy, nonatomic) NSString * countryName;
@property (copy, nonatomic) NSString * phoneticCountryName;

- (NSString *)countryName;
- (void)setCountryName:(NSString *)arg0;
- (NSString *)phoneticCountryName;
- (void)setPhoneticCountryName:(NSString *)arg0;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)countryCode;

@end
