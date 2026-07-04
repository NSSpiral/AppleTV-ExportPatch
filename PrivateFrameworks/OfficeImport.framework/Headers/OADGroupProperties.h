/* Runtime dump - OADGroupProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill * mFill;
    NSArray * mEffects;
    OADScene3D * mScene3D;
    OADShape3D * mShape3D;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (OADGroupProperties *)defaultProperties;

- (void)dealloc;
- (EDFill *)fill;
- (void)setFill:(TSDFill *)arg0;
- (char)hasFill;
- (NSArray *)effects;
- (void)setEffects:(NSArray *)arg0;
- (void)setScene3D:(OADScene3D *)arg0;
- (void)setShape3D:(OADShape3D *)arg0;
- (char)hasScene3D;
- (char)hasShape3D;
- (OADScene3D *)scene3D;
- (OADShape3D *)shape3D;
- (OADGroupProperties *)initWithDefaults;
- (char)hasEffects;

@end
