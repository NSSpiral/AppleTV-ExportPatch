/* Runtime dump - CIEnhancementCalculator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementCalculator : CIEnhancementCalculation
{
    char faceBalanceEnabled;
    char vibranceEnabled;
    char curvesEnabled;
    char shadowsEnabled;
}

@property char faceBalanceEnabled;
@property char vibranceEnabled;
@property char curvesEnabled;
@property char shadowsEnabled;

- (void)setFaceBalanceEnabled:(char)arg0;
- (void)setVibranceEnabled:(char)arg0;
- (void)setCurvesEnabled:(char)arg0;
- (void)setShadowsEnabled:(char)arg0;
- (char)faceBalanceEnabled;
- (void)setupFaceColorFromImage:(UIImage *)arg0 usingContext:(NSObject *)arg1 features:(WKWindowFeatures *)arg2;
- (void)setupHistogramsUsing:(id)arg0 redIndex:(int)arg1 greenIndex:(int)arg2 blueIndex:(int)arg3;
- (char)vibranceEnabled;
- (char)curvesEnabled;
- (char)shadowsEnabled;
- (void)analyzeFeatures:(id)arg0 usingContext:(NSObject *)arg1 baseImage:(UIImage *)arg2;
- (NSArray *)histogramFromRows:(NSArray *)arg0 componentOffset:(unsigned int)arg1;
- (UIImage *)setupFaceColorFromImage:(UIImage *)arg0 usingContext:(NSObject *)arg1 detectorOpts:(id)arg2;
- (void)dealloc;
- (CIEnhancementCalculator *)init;

@end
