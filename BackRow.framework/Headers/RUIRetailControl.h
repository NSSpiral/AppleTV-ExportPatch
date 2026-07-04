/* Runtime dump - RUIRetailControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMediaPlayer;
@interface RUIRetailControl : BRControl
{
    BRMediaPlayer * _player;
    char _playbackStarted;
}

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerVisualsChanged:(NSNotification *)arg0;
- (RUIRetailControl *)initWithMediaURL:(NSURL *)arg0;
- (void)_updateVisuals;
- (void)_movieCued:(id)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
