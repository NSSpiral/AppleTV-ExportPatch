/* Runtime dump - TSDImageAdjustments
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing>
{
    float mExposure;
    float mSaturation;
    float mContrast;
    float mHighlights;
    float mShadows;
    float mSharpness;
    float mDenoise;
    float mTemperature;
    float mTint;
    float mBottomLevel;
    float mTopLevel;
    float mGamma;
    char mEnhance;
    char mRepresentsSageAdjustments;
}

@property (readonly, nonatomic) float exposure;
@property (readonly, nonatomic) float saturation;
@property (readonly, nonatomic) float contrast;
@property (readonly, nonatomic) float highlights;
@property (readonly, nonatomic) float shadows;
@property (readonly, nonatomic) float sharpness;
@property (readonly, nonatomic) float denoise;
@property (readonly, nonatomic) float temperature;
@property (readonly, nonatomic) float tint;
@property (readonly, nonatomic) float bottomLevel;
@property (readonly, nonatomic) float topLevel;
@property (readonly, nonatomic) float gamma;
@property (readonly, nonatomic) char enhance;
@property (readonly, nonatomic) char representsSageAdjustments;

- (void)saveToArchive:(struct ImageAdjustmentsArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDImageAdjustments *)initWithArchive:(struct ImageAdjustmentsArchive *)arg0 unarchiver:(struct ImageAdjustmentsArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)enhance;
- (float)bottomLevel;
- (float)topLevel;
- (float)highlights;
- (float)denoise;
- (void)i_initFromDefaultArchive;
- (char)representsSageAdjustments;
- (id)imageAdjustmentsWithoutEnhance;
- (float)saturation;
- (float)sharpness;
- (TSDImageAdjustments *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDImageAdjustments *)copyWithZone:(struct _NSZone *)arg0;
- (TSDImageAdjustments *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (float)contrast;
- (float)shadows;
- (float)gamma;
- (float)tint;
- (float)exposure;
- (float)temperature;

@end
