/* Runtime dump - ATVShowcaseTemplateOneupView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVShowcaseTemplateView.h>

@class BRControl;
@interface ATVShowcaseTemplateOneupView : ATVShowcaseTemplateView
{
    BRControl * _descriptionOverlayView;
    float _descriptionOverlayDuration;
}

@property (weak, nonatomic) BRControl * descriptionOverlayView;
@property (nonatomic) float descriptionOverlayDuration;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_updateCarouselView;
- (BRControl *)descriptionOverlayView;
- (void)setDescriptionOverlayDuration:(float)arg0;
- (void)_transitionOverlay:(NSObject *)arg0 fadeInDuration:(double)arg1 delay:(double)arg2 fadeOutDuration:(double)arg3 removeConditionally:(char)arg4;
- (void)setDescriptionOverlayView:(BRControl *)arg0;
- (float)descriptionOverlayDuration;
- (void)setDescriptionOverlayView:(BRControl *)arg0 withDuration:(float)arg1;
- (void).cxx_destruct;

@end
