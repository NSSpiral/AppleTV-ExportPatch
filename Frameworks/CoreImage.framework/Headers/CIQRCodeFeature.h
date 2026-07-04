/* Runtime dump - CIQRCodeFeature
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIQRCodeFeature : CIFeature
{
    struct CGRect bounds;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
    NSString * messageString;
}

@property struct CGRect bounds;
@property struct CGPoint topLeft;
@property struct CGPoint topRight;
@property struct CGPoint bottomLeft;
@property struct CGPoint bottomRight;
@property (copy) NSString * messageString;

+ (CIQRCodeFeature *)barcodeFeatureWithBounds:(struct CGRect)arg0;
+ (NSArray *)barcodeFeaturesWithBoundsArray:(struct CGRect *)arg0 count:(struct CGRect)arg1;

- (CIQRCodeFeature *)initWithBounds:(struct CGRect)arg0;
- (struct CGPoint)topLeft;
- (void)setTopLeft:(struct CGPoint)arg0;
- (struct CGPoint)topRight;
- (void)setTopRight:(struct CGPoint)arg0;
- (struct CGPoint)bottomLeft;
- (void)setBottomLeft:(struct CGPoint)arg0;
- (struct CGPoint)bottomRight;
- (void)setBottomRight:(struct CGPoint)arg0;
- (CIQRCodeFeature *)initWithBounds:(struct CGRect)arg0 topLeft:(struct CGSize)arg1 topRight:(struct CGPoint)arg2 bottomLeft:(struct CGPoint)arg3 bottomRight:(struct CGPoint)arg4 messageString:(struct CGPoint)arg5;
- (NSString *)messageString;
- (void)setMessageString:(NSString *)arg0;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg0;
- (NSString *)type;
- (void).cxx_construct;

@end
