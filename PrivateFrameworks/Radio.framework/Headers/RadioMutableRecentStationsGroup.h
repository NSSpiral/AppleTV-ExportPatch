/* Runtime dump - RadioMutableRecentStationsGroup
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (nonatomic) char active;
@property (copy, nonatomic) NSString * localizedTitle;
@property (copy, nonatomic) NSArray * stations;

- (void)setLocalizedTitle:(NSString *)arg0;
- (void)setStations:(NSArray *)arg0;
- (RadioMutableRecentStationsGroup *)copyWithZone:(struct _NSZone *)arg0;
- (void)setActive:(char)arg0;

@end
