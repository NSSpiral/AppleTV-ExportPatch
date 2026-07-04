/* Runtime dump - BRFadeThroughBlackTransitionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTransitionControl.h>

@class BRControl;
@interface BRFadeThroughBlackTransitionControl : BRTransitionControl
{
    BRControl * _shroud;
}

- (void)layoutSubcontrols;
- (void)setTransitionedIn:(char)arg0;
- (void)_updateContentForTransitionState;
- (void)_transitionInCompleted:(id)arg0;
- (void)_transitionOutCompleted:(id)arg0;
- (void)_addShroud;
- (void)_removeShroud;
- (void)dealloc;
- (void)setContent:(BRControl *)arg0;

@end
