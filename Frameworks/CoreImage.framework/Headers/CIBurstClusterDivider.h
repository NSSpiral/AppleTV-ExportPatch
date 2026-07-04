/* Runtime dump - CIBurstClusterDivider
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstClusterDivider : NSObject
{
    float dividerScore;
    int trueLocalMaximum;
    int leftImage;
    float actionAmount;
    float noiseThreshold;
    float highNoiseThreshold;
}

@property float dividerScore;
@property int trueLocalMaximum;
@property int leftImage;
@property float actionAmount;
@property float noiseThreshold;
@property float highNoiseThreshold;

- (void)setDividerScore:(float)arg0;
- (void)setLeftImage:(int)arg0;
- (void)setActionAmount:(float)arg0;
- (float)dividerScore;
- (void)setNoiseThreshold:(float)arg0;
- (void)setHighNoiseThreshold:(float)arg0;
- (int)leftImage;
- (float)noiseThreshold;
- (float)highNoiseThreshold;
- (void)setTrueLocalMaximum:(int)arg0;
- (int)compareDividers:(id)arg0;
- (int)compareIndices:(id)arg0;
- (float)actionAmount;
- (int)compareActionAmounts:(id)arg0;
- (int)trueLocalMaximum;

@end
