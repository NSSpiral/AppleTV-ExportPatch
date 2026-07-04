/* Runtime dump - OADColorTransform
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorTransform : NSObject <NSCopying>
{
    int mType;
}

+ (NSString *)colorByApplyingTransforms:(id)arg0 toColor:(UIColor *)arg1;
+ (float)alphaByApplyingTransforms:(id)arg0 toAlpha:(float)arg1;
+ (float)applyAlphaTransform:(NSObject *)arg0 toAlpha:(float)arg1;
+ (OADColorTransform *)applyExpTransformWithValue:(float)arg0 toColor:(UIColor *)arg1;
+ (NSString *)applyRGBTransform:(NSObject *)arg0 toColor:(UIColor *)arg1 skipGamma:(BOOL)arg2;
+ (NSString *)applyHSLTransform:(NSObject *)arg0 toColor:(UIColor *)arg1;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)type;
- (OADColorTransform *)copyWithZone:(struct _NSZone *)arg0;
- (OADColorTransform *)initWithType:(int)arg0;

@end
