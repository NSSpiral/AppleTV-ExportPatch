/* Runtime dump - ATVPlayerEventDisplayControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRTextControl;
@interface ATVPlayerEventDisplayControl : BRControl
{
    NSMutableDictionary * _textAttrs;
    BRTextControl * _displayText;
    AVPlayerItem * _playerItem;
}

+ (void)showPlaybackEventPopup:(id)arg0;
+ (void)hidePlaybackEventPopup;

- (void)layoutSubcontrols;
- (void)_readableBitRate:(double *)arg0 andUnitsString:(id *)arg1 forBitsPerSecond:(double)arg2;
- (void)_readableBitRate:(double *)arg0 andUnitsString:(id *)arg1 forBytes:(double)arg2 andDuration:(double)arg3;
- (ATVPlayerEventDisplayControl *)initWithPlayerItem:(AVPlayerItem *)arg0;
- (void)dealloc;

@end
