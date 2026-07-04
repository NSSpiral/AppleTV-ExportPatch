/* Runtime dump - BRTransitionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface BRTransitionControl : BRControl
{
    BRControl * _content;
    char _transitionedIn;
}

- (void)layoutSubcontrols;
- (char)accessibilityOutputsRangeForChildren;
- (void)setTransitionedIn:(char)arg0;
- (char)transitionedIn;
- (void)controlDidDisplayAsModalDialog;
- (void)dealloc;
- (BRTransitionControl *)init;
- (BRControl *)content;
- (void)setContent:(BRControl *)arg0;

@end
