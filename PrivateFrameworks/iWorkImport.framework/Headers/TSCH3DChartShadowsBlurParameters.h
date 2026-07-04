/* Runtime dump - TSCH3DChartShadowsBlurParameters
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartShadowsBlurParameters : NSObject
{
    float mQuality;
    int mNumPasses;
    int mShadowSize;
    float mKernelScale;
}

@property (nonatomic) float quality;
@property (nonatomic) int numPasses;
@property (nonatomic) int shadowSize;
@property (nonatomic) float kernelScale;

+ (TSCH3DChartShadowsBlurParameters *)paramsWithQuality:(float)arg0 numPasses:(int)arg1 shadowSize:(int)arg2 kernelScale:(float)arg3;

- (int)numPasses;
- (float)kernelScale;
- (int)shadowSize;
- (TSCH3DChartShadowsBlurParameters *)initWithQuality:(float)arg0 numPasses:(int)arg1 shadowSize:(int)arg2 kernelScale:(float)arg3;
- (void)setNumPasses:(int)arg0;
- (void)setShadowSize:(int)arg0;
- (void)setKernelScale:(float)arg0;
- (float)quality;
- (void)setQuality:(float)arg0;

@end
