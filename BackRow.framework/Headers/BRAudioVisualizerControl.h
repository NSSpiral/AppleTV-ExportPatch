/* Runtime dump - BRAudioVisualizerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMediaPlayer;
@interface BRAudioVisualizerControl : BRControl
{
    BRMediaPlayer * _player;
}

@property (nonatomic) BRMediaPlayer * player;

- (char)displayTrackPopup;
- (char)shouldUseMusicContextMenu;
- (char)shouldShowExplanatoryText;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
