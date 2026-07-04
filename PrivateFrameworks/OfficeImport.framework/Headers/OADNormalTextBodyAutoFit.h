/* Runtime dump - OADNormalTextBodyAutoFit
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit
{
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADNormalTextBodyAutoFit *)initWithFontScalePercent:(float)arg0 lineSpacingReductionPercent:(float)arg1;
- (float)fontScalePercent;
- (float)lineSpacingReductionPercent;

@end
