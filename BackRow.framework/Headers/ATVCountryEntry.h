/* Runtime dump - ATVCountryEntry
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCountryEntry : NSObject
{
    NSString * _countryCode;
    NSString * _countryDisplayString;
}

@property (readonly, nonatomic) NSString * countryCode;
@property (readonly, nonatomic) NSString * countryDisplayString;

- (ATVCountryEntry *)initWithISOCode:(id)arg0;
- (NSString *)countryDisplayString;
- (void).cxx_destruct;
- (NSString *)countryCode;

@end
