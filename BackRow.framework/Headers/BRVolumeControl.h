/* Runtime dump - BRVolumeControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRPercentageIndicatorLayer;
@interface BRVolumeControl : BRControl
{
    BRImageControl * _speakerOnLayer;
    BRImageControl * _speakerOffLayer;
    BRPercentageIndicatorLayer * _percentageIndicatorLayer;
}

- (void)layoutSubcontrols;
- (void)dealloc;
- (BRVolumeControl *)init;
- (float)volume;
- (void)setVolume:(float)arg0;

@end
