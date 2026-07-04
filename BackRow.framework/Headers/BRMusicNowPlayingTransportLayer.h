/* Runtime dump - BRMusicNowPlayingTransportLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRMusicNowPlayingTransportLayer : BRControl
{
    NSDictionary * _textAttributes;
    float _percent;
    float _duration;
    float _elapsedTime;
    float _timeTextWidth;
    float _fillLayerHeight;
    float _fillLayerWidth;
    float _ordinaryTimeTextWidth;
    char _flip;
}

- (void)layoutSubcontrols;
- (void)setElapsedTime:(float)arg0 andDuration:(float)arg1;
- (void)setPercentage:(float)arg0;
- (void)setFlip:(char)arg0;
- (void)dealloc;
- (BRMusicNowPlayingTransportLayer *)init;
- (float)duration;
- (void)setTextAttributes:(NSDictionary *)arg0;
- (BRMusicNowPlayingTransportLayer *)initWithStyle:(int)arg0;
- (float)elapsedTime;

@end
