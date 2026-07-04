/* Runtime dump - OADMiterLineJoin
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADMiterLineJoin : OADLineJoin
{
    float mLimit;
    id mIsLimitOverridden;
}

+ (OADMiterLineJoin *)defaultProperties;

- (char)isEqual:(NSObject *)arg0;
- (OADMiterLineJoin *)copyWithZone:(struct _NSZone *)arg0;
- (float)limit;
- (void)setLimit:(float)arg0;
- (OADMiterLineJoin *)initWithDefaults;
- (char)isLimitOverridden;

@end
