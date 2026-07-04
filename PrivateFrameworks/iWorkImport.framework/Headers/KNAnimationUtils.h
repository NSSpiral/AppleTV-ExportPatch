/* Runtime dump - KNAnimationUtils
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationUtils : NSObject

+ (char)isFPSLoggingEnabled;
+ (char)isSOATSAnimationTestingEnabled;
+ (char)isFPSLoggingTimerDisabled;
+ (char)isMotionBlurCapableWithAnimationContext:(NSObject *)arg0;
+ (void)setRandomSeedWithNumber:(NSNumber *)arg0;
+ (char)isFPSGraphEnabled;
+ (char)isCustomEffectTimingCurveEditingEnabled;
+ (char)isRandomNumberSeedInspectionEnabled;
+ (unsigned int)directionFromCustomAttributesDeliveryOption:(unsigned int)arg0;
+ (KNAnimationUtils *)timingsArrayWithDirection:(unsigned int)arg0 duration:(float)arg1 count:(unsigned int)arg2 chunkDuration:(float)arg3 randomness:(float)arg4;
+ (NSDictionary *)customAttributesArrayWithTextDeliveryOptions:(NSDictionary *)arg0;
+ (NSDictionary *)customAttributesArrayWithDeliveryOptions:(NSDictionary *)arg0;
+ (void)updateDefaultsValues;
+ (char)isMotionBlurBlacklistedWithCapabilities:(id)arg0;
+ (NSDictionary *)customAttributesArrayWithJiggleIntensityOptions:(NSDictionary *)arg0;
+ (unsigned int)randomDirection;
+ (unsigned int)randomBasicDirection;
+ (char)isGLStateValidationEnabled;
+ (char)isDisplayLoggingEnabled;
+ (char)shouldForceDisplayPreferredMode;
+ (KNAnimationUtils *)CAAccelerationFromSFXActionAcceleration:(unsigned int)arg0;
+ (struct CGRect)recommendedLayerBoundsForNaturalPlaybackSize:(NSObject *)arg0 inContainerWithBounds:(SEL)arg1 contentsScale:(struct CGSize)arg2 isExternalDisplay:(struct CGRect)arg3;
+ (void)getRecommendedPosition:(struct CGPoint *)arg0 andTransform:(struct CATransform3D *)arg1 toFitLayer:(id)arg2 inContainerWithBounds:(struct CGRect)arg3 contentsScale:(struct CGSize)arg4;
+ (void)initialize;

@end
