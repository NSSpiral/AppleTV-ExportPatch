/* Runtime dump - TSKTintLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKTintLayer : CAReplicatorLayer
{
    CALayer * _contentsLayer;
}

@property (retain, nonatomic) CALayer * contentsLayer;
@property struct CGColor * tintColor;

- (void)setContentsLayer:(CALayer *)arg0;
- (CALayer *)contentsLayer;
- (void)setNeedsDisplay;
- (MRImageProvider *)contents;
- (struct CGColor *)tintColor;
- (void)setTintColor:(struct CGColor *)arg0;
- (void)setContents:(UIKBKeyDisplayContents *)arg0;
- (void)layoutSublayers;

@end
