/* Runtime dump - OADBiLevelEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBiLevelEffect : OADBlipEffect
{
    float mThreshold;
}

- (OADBiLevelEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADBiLevelEffect *)copyWithZone:(struct _NSZone *)arg0;
- (void)setThreshold:(float)arg0;
- (float)threshold;

@end
