/* Runtime dump - ATVPhotoDetailView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVCarouselView, ATVPhotoMetadataViewConfigurator, BRControl, BREvent, BRStateMachine;
@interface ATVPhotoDetailView : BRControl
{
    int _carouselType;
    ATVCarouselView * _carousel;
    ATVPhotoMetadataViewConfigurator * _metadataView;
    BRControl * _commentsBadge;
    id _carouselUIViewDelegateHandler;
    id _transitionBeginHandler;
    id _transitionEndHandler;
    BRControl * _descriptiveTextView;
    <ATVCarouselViewUIDelegate> * __carouselUIDelegate;
    BRStateMachine * __transitionStateMachine;
    NSTimer * __stateMachineEventTimer;
    double _typeChangeFadeDuration;
    double _typeChangeAnimationDuration;
}

@property (nonatomic) double typeChangeFadeDuration;
@property (nonatomic) double typeChangeAnimationDuration;
@property (nonatomic) int carouselType;
@property (retain, nonatomic) ATVCarouselView * carousel;
@property (retain, nonatomic) ATVPhotoMetadataViewConfigurator * metadataView;
@property (retain, nonatomic) BRControl * commentsBadge;
@property (readonly, nonatomic) char isTransitioning;
@property (copy, nonatomic) id carouselUIViewDelegateHandler;
@property (copy, nonatomic) id transitionBeginHandler;
@property (copy, nonatomic) id transitionEndHandler;
@property (retain, nonatomic) BRControl * descriptiveTextView;
@property (retain, nonatomic) <ATVCarouselViewUIDelegate> * _carouselUIDelegate;
@property (retain, nonatomic) BRStateMachine * _transitionStateMachine;
@property (weak, nonatomic) NSTimer * _stateMachineEventTimer;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)setCarousel:(ATVCarouselView *)arg0;
- (void)updateFullScreenDescriptiveTextView:(NSObject *)arg0;
- (void)setCarouselType:(int)arg0;
- (void)setMetadataView:(ATVPhotoMetadataViewConfigurator *)arg0;
- (ATVPhotoMetadataViewConfigurator *)metadataView;
- (NSObject *)_makeTransitionStateMachine;
- (void)set_transitionStateMachine:(BRStateMachine *)arg0;
- (BRStateMachine *)_transitionStateMachine;
- (id /* block */)transitionBeginHandler;
- (id /* block */)transitionEndHandler;
- (void)_loadCarouselUIDelegateWithSetupAnimationDuration:(double)arg0;
- (struct CGPoint)_expectedMetadataCenter;
- (BRControl *)commentsBadge;
- (BRControl *)descriptiveTextView;
- (void)_transitionDescriptiveTextView:(NSObject *)arg0 fadeInDuration:(double)arg1 delay:(double)arg2 fadeOutDuration:(double)arg3 postAnimationCommand:(int)arg4;
- (int)carouselType;
- (double)typeChangeFadeDuration;
- (double)typeChangeAnimationDuration;
- (void)_setStateMachineEventTimer:(NSObject *)arg0;
- (void)set_carouselUIDelegate:(<ATVCarouselViewUIDelegate> *)arg0;
- (void)setDescriptiveTextView:(BRControl *)arg0;
- (void)_reloadCarouselHandler;
- (void)_updatePhotosHandler;
- (void)_transitionCommentsBadge:(UIImage *)arg0 animationDuration:(double)arg1 fadeIn:(char)arg2 easeInOut:(char)arg3 postAnimationCommand:(int)arg4;
- (void)setCommentsBadge:(BRControl *)arg0;
- (void)_reloadCarouselUIDelegateHandler;
- (void)_stateMachineEventTimerHandler:(id /* block */)arg0;
- (id /* block */)carouselUIViewDelegateHandler;
- (<ATVCarouselViewUIDelegate> *)_carouselUIDelegate;
- (void)_setPostAnimationCommand:(int)arg0 view:(NSObject *)arg1 animation:(CAAnimation *)arg2;
- (void)reloadCarousel;
- (void)reloadCarouselUIDelegate;
- (void)updatePhotos;
- (void)updateCommentsBadge:(UIImage *)arg0 withAnimationDuration:(double)arg1;
- (void)setTypeChangeFadeDuration:(double)arg0;
- (void)setTypeChangeAnimationDuration:(double)arg0;
- (void)setCarouselUIViewDelegateHandler:(id /* block */)arg0;
- (void)setTransitionBeginHandler:(id /* block */)arg0;
- (void)setTransitionEndHandler:(id /* block */)arg0;
- (NSTimer *)_stateMachineEventTimer;
- (ATVPhotoDetailView *)init;
- (char)isTransitioning;
- (void).cxx_destruct;
- (ATVCarouselView *)carousel;

@end
