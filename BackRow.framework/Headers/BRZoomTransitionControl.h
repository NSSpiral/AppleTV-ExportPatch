/* Runtime dump - BRZoomTransitionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTransitionControl.h>

@class BRControl;
@interface BRZoomTransitionControl : BRTransitionControl
{
    BRControl * _prerender;
    char _prerenderAnimation;
}

- (void)layoutSubcontrols;
- (void)setTransitionedIn:(char)arg0;
- (void)_updateContentForTransitionState;
- (void)setPrerenderAnimation:(char)arg0;
- (char)prerenderAnimation;
- (void)_addPrerender;
- (void)_zoomInCompleted:(id)arg0;
- (void)_takePrerenderSnapshot;
- (void)_zoomOutCompleted:(id)arg0;
- (void)_removePrerender;
- (void)dealloc;
- (void)setContent:(BRControl *)arg0;

@end
