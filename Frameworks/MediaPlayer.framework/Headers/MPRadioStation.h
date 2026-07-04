/* Runtime dump - MPRadioStation
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding>
{
    RadioStation * _station;
}

@property (readonly, nonatomic) long long uniqueIdentifier;
@property (readonly, nonatomic) NSString * localizedName;
@property (readonly, nonatomic) NSString * localizedDescription;
@property (readonly, nonatomic) RadioStation * _station;

+ (char)supportsSecureCoding;

- (RadioStation *)_station;
- (MPRadioStation *)initWithStation:(RadioStation *)arg0;
- (MPRadioStation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (MPRadioStation *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)localizedName;
- (NSString *)localizedDescription;
- (long long)uniqueIdentifier;
- (void).cxx_destruct;

@end
