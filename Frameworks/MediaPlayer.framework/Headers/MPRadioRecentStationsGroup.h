/* Runtime dump - MPRadioRecentStationsGroup
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioRecentStationsGroup : NSObject <NSSecureCoding>
{
    NSString * _localizedTitle;
    NSArray * _stations;
}

@property (copy, nonatomic) NSString * localizedTitle;
@property (copy, nonatomic) NSArray * stations;

+ (char)supportsSecureCoding;

- (void)setLocalizedTitle:(NSString *)arg0;
- (NSArray *)stations;
- (void)setStations:(NSArray *)arg0;
- (MPRadioRecentStationsGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)localizedTitle;

@end
