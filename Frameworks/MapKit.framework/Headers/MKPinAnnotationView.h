/* Runtime dump - MKPinAnnotationView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPinAnnotationView : MKAnnotationView
{
    UIImageView * _shadowView;
    id _delegate;
    int _pinType;
    int _state;
    char _animatesDrop;
}

@property (nonatomic) unsigned int pinColor;
@property (nonatomic) char animatesDrop;

+ (NSObject *)_pinsWithType:(int)arg0 mapDisplayStyle:(unsigned int)arg1;
+ (struct CGRect)_desiredBounds;
+ (struct CGPoint)_calloutOffset;
+ (struct CGPoint)_leftCalloutOffset;
+ (struct CGPoint)_rightCalloutOffset;
+ (NSObject *)_bounceAnimation;
+ (NSObject *)_dropBounceAnimation;
+ (struct CGSize)_perceivedSize;
+ (struct CGRect)_pinFrameForPosition:(NSObject *)arg0;
+ (struct CGPoint)_perceivedAnchorPoint;
+ (struct CGPoint)_shadowAnchorPoint;
+ (Class)layerClass;
+ (struct UIImage *)_shadowImage;
+ (NSString *)_reuseIdentifier;

- (void)_setMapDisplayStyle:(unsigned int)arg0;
- (void)_didUpdatePosition;
- (void)_setPinType:(int)arg0;
- (int)_pinType;
- (void)_updatePinType;
- (void)_setMapType:(unsigned int)arg0;
- (void)_invalidateImage;
- (id)_pins;
- (void)_removeAllAnimations;
- (unsigned int)pinColor;
- (void)_setRotationRadians:(float)arg0 withAnimation:(NSObject *)arg1;
- (void)_updateShadowLayer;
- (void)_cleanupAfterPinDropAnimation;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (struct UIImage *)_floatingImage;
- (NSObject *)_bounceAnimation:(char)arg0 withBeginTime:(double)arg1 addToLayer:(char)arg2;
- (void)_liftForDraggingAnimated:(char)arg0;
- (void)_dropAfterDraggingAndRevertPosition:(char)arg0 animated:(char)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(char)arg0;
- (void)_liftDidEnd:(id)arg0;
- (struct UIImage *)_highlightedImage;
- (struct CGPoint)_draggingDropOffset;
- (void)setPinColor:(unsigned int)arg0;
- (void)setAnimatesDrop:(char)arg0;
- (char)animatesDrop;
- (struct CGRect)_significantBounds;
- (void)_stopDrop;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_dropFromPoint:(struct CGPoint)arg0 shadowStartPoint:(struct CGPoint)arg1 distance:(float)arg2 maxDistance:(float)arg3 withDelay:(double)arg4;
- (void)_dropAfterDraggingDidEnd:(id)arg0;
- (void)_liftBeforeDropDidEnd:(id)arg0;
- (struct UIImage *)_image;
- (NSString *)description;
- (NSObject *)_delegate;
- (void)setCenter:(struct CGPoint)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (void)setHighlighted:(char)arg0;
- (int)_state;
- (char)isHighlighted;
- (void)_setDelegate:(NSObject *)arg0;
- (void)_reset;
- (void).cxx_destruct;
- (void)setAnnotation:(<MKAnnotation> *)arg0;
- (void)setDragState:(unsigned int)arg0 animated:(char)arg1;
- (MKPinAnnotationView *)initWithAnnotation:(<MKAnnotation> *)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setDragState:(unsigned int)arg0;
- (struct CGPoint)centerOffset;

@end
