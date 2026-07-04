/* Runtime dump - OADBackgroundProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBackgroundProperties : OADBackground
{
    OADFill * mFill;
    NSArray * mEffects;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (EDFill *)fill;
- (void)setFill:(TSDFill *)arg0;
- (NSArray *)effects;
- (void)setEffects:(NSArray *)arg0;

@end
