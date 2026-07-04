/* Runtime dump - MKLayer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLayer : CALayer
{
    struct CGRect _hitBounds;
    struct CGPoint _hitOffset;
    struct CGPoint _hitOutset;
}

@property (nonatomic) struct CGPoint hitOffset;
@property (nonatomic) struct CGPoint hitOutset;
@property (readonly, nonatomic) struct CGRect hitBounds;

- (void)setHitOffset:(struct CGPoint)arg0;
- (void)setHitOutset:(struct CGPoint)arg0;
- (struct CGRect)hitBounds;
- (struct CGPoint)hitOffset;
- (struct CGPoint)hitOutset;
- (void)setBounds:(struct CGRect)arg0;
- (char)containsPoint:(struct CGPoint)arg0;

@end
