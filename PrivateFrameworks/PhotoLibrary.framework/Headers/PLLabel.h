/* Runtime dump - PLLabel
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLLabel : UILabel
{
    float shadowBlurRadius;
}

@property (nonatomic) float shadowBlurRadius;

- (void)setShadowBlurRadius:(float)arg0;
- (float)shadowBlurRadius;
- (void)drawTextInRect:(struct CGRect)arg0;

@end
