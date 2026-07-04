/* Runtime dump - MFPColorAdjust
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPColorAdjust : NSObject
{
    struct MFPColorMatrix * mColorMatrix;
    struct MFPColorMatrix * mGrayMatrix;
    int mColorMatrixFlags;
    struct ? mTransparentRange;
    float mGamma;
    NSDictionary * mRecolorMap;
    float mThreshold;
    char mEnabled;
}

- (void)dealloc;
- (MFPColorAdjust *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void).cxx_construct;
- (void)setThreshold:(float)arg0;
- (float)threshold;
- (struct MFPColorMatrix *)colorMatrix;
- (void)setColorMatrix:(struct MFPColorMatrix *)arg0;
- (struct MFPColorMatrix *)grayMatrix;
- (void)setGrayMatrix:(struct MFPColorMatrix *)arg0;
- (int)colorMatrixFlags;
- (void)setColorMatrixFlags:(int)arg0;
- (id)transparentLow;
- (id)transparentHigh;
- (void)setTransparentLow:(id)arg0 high:(NSNumber *)arg1;
- (float)gamma;
- (void)setGamma:(float)arg0;
- (NSObject *)recolorMap;
- (void)setRecolorMap:(NSObject *)arg0;

@end
