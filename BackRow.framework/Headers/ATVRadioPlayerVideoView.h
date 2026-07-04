/* Runtime dump - ATVRadioPlayerVideoView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVRadioPlayer;
@interface ATVRadioPlayerVideoView : BRControl
{
    ATVRadioPlayer * _player;
}

@property (retain, nonatomic) ATVRadioPlayer * player;

+ (Class)layerClass;

- (CALayer *)_playerLayer;
- (void).cxx_destruct;
- (void)setPlayer:(ATVRadioPlayer *)arg0;
- (ATVRadioPlayer *)player;

@end
