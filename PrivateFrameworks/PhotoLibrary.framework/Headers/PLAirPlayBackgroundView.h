/* Runtime dump - PLAirPlayBackgroundView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAirPlayBackgroundView : PLPlayingExternallyBackgroundView
{
    NSString * _deviceName;
}

@property (retain, nonatomic) NSString * deviceName;

- (void)dealloc;
- (void)setIsMovie:(char)arg0;
- (NSString *)deviceName;
- (PLAirPlayBackgroundView *)initWithFrame:(struct CGRect)arg0 deviceName:(struct CGSize)arg1;
- (void)setDeviceName:(NSString *)arg0;

@end
