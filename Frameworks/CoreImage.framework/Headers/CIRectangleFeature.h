/* Runtime dump - CIRectangleFeature
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRectangleFeature : CIFeature
{
    struct CGRect bounds;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
}

@property struct CGRect bounds;
@property struct CGPoint topLeft;
@property struct CGPoint topRight;
@property struct CGPoint bottomLeft;
@property struct CGPoint bottomRight;

+ (CIRectangleFeature *)rectangleFeatureWithBounds:(struct CGRect)arg0;
+ (NSArray *)rectangleFeaturesWithBoundsArray:(struct CGRect *)arg0 count:(struct CGRect)arg1;

- (CIRectangleFeature *)initWithBounds:(struct CGRect)arg0;
- (CIRectangleFeature *)initWithBounds:(struct CGRect)arg0 topLeft:(struct CGSize)arg1 topRight:(struct CGPoint)arg2 bottomLeft:(struct CGPoint)arg3 bottomRight:(struct CGPoint)arg4;
- (struct CGPoint)topLeft;
- (void)setTopLeft:(struct CGPoint)arg0;
- (struct CGPoint)topRight;
- (void)setTopRight:(struct CGPoint)arg0;
- (struct CGPoint)bottomLeft;
- (void)setBottomLeft:(struct CGPoint)arg0;
- (struct CGPoint)bottomRight;
- (void)setBottomRight:(struct CGPoint)arg0;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg0;
- (NSString *)type;
- (void).cxx_construct;

@end
