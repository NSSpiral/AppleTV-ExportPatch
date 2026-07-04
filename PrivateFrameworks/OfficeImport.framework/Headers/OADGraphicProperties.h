/* Runtime dump - OADGraphicProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill * mFill;
    NSArray * mEffects;
    NSArray * mExts;
    OADScene3D * mScene3D;
    OADShape3D * mShape3D;
    OADStroke * mStroke;
    id mHasIsBehindText;
    id mIsBehindText;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDFill *)fill;
- (OADStroke *)stroke;
- (void)setFill:(TSDFill *)arg0;
- (void)setStroke:(TSDStroke *)arg0;
- (char)hasFill;
- (char)hasStroke;
- (NSArray *)effects;
- (void)setEffects:(NSArray *)arg0;
- (void)setScene3D:(OADScene3D *)arg0;
- (void)setShape3D:(OADShape3D *)arg0;
- (void)setIsBehindText:(char)arg0;
- (void)setExts:(id)arg0;
- (char)hasExts;
- (char)hasIsBehindText;
- (id)exts;
- (char)isBehindText;
- (char)hasScene3D;
- (char)hasShape3D;
- (OADScene3D *)scene3D;
- (OADShape3D *)shape3D;
- (void)removeUnnecessaryOverrides;
- (OADGraphicProperties *)initWithDefaults;
- (char)hasEffects;
- (void)setParent:(NSObject *)arg0;

@end
