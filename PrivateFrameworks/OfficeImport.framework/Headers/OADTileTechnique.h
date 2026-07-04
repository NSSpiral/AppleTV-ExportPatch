/* Runtime dump - OADTileTechnique
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTileTechnique : OADImageFillTechnique
{
    float mOffsetX;
    char mIsOffsetXOverridden;
    float mOffsetY;
    char mIsOffsetYOverridden;
    float mScaleX;
    char mIsScaleXOverridden;
    float mScaleY;
    char mIsScaleYOverridden;
    int mFlipMode;
    char mIsFlipModeOverridden;
    int mAlignment;
    char mIsAlignmentOverridden;
}

+ (OADTileTechnique *)defaultProperties;

- (void)setAlignment:(int)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADTileTechnique *)copyWithZone:(struct _NSZone *)arg0;
- (int)alignment;
- (void)setFlipMode:(int)arg0;
- (void)setOffsetX:(float)arg0;
- (void)setOffsetY:(float)arg0;
- (void)setScaleX:(float)arg0;
- (void)setScaleY:(float)arg0;
- (char)isFlipModeOverridden;
- (int)flipMode;
- (char)isOffsetXOverridden;
- (char)isOffsetYOverridden;
- (char)isScaleXOverridden;
- (char)isScaleYOverridden;
- (char)isAlignmentOverridden;
- (float)scaleX;
- (float)scaleY;
- (OADTileTechnique *)initWithDefaults;
- (float)offsetX;
- (float)offsetY;

@end
