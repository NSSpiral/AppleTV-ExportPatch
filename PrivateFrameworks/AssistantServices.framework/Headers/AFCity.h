/* Runtime dump - AFCity
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFCity : NSObject <NSSecureCoding>
{
    NSString * _name;
    NSString * _unlocalizedName;
    NSString * _countryName;
    NSString * _unlocalizedCountryName;
    NSString * _timeZone;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSNumber * _alCityID;
}

+ (char)supportsSecureCoding;

- (AFCity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)_initWithName:(NSString *)arg0 unlocalizedName:(NSString *)arg1 countryName:(NSString *)arg2 unlocalizedCountryName:(NSString *)arg3 timeZone:(NSString *)arg4 latitude:(NSNumber *)arg5 longitude:(NSNumber *)arg6 alCityID:(NSNumber *)arg7;
- (id)alCityValue;

@end
