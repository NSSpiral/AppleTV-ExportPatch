/* Runtime dump - OADStretchTechnique
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADStretchTechnique : OADImageFillTechnique
{
    OADRelativeRect * mFillRect;
    char mIsFillRectOverridden;
}

+ (OADStretchTechnique *)defaultProperties;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADStretchTechnique *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFillRect:(NSObject *)arg0;
- (char)isFillRectOverridden;
- (NSObject *)fillRect;
- (OADStretchTechnique *)initWithDefaults;

@end
