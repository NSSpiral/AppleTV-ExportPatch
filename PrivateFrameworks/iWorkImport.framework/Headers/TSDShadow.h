/* Runtime dump - TSDShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShadow : NSObject <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>
{
    float mAngle;
    float mOffset;
    float mRadius;
    float mOpacity;
    struct CGColor * mColor;
    char mEnabled;
}

@property (readonly, nonatomic) float angle;
@property (readonly, nonatomic) float offset;
@property (readonly, nonatomic) struct CGPoint offsetDelta;
@property (readonly, nonatomic) float radius;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) struct CGColor * color;
@property (readonly, nonatomic) char enabled;
@property (readonly, copy, nonatomic) TSUColor * TSUColor;
@property (readonly, nonatomic) NSString * presetKind;

+ (TSDShadow *)instanceWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;
+ (char)canMixWithNilObjects;
+ (NSArray *)mixableObjectClasses;
+ (TSDShadow *)defaultShadow;
+ (TSDShadow *)defaultDisabledShadow;
+ (TSDShadow *)shadowWithAngle:(float)arg0 offset:(float)arg1 radius:(float)arg2 opacity:(float)arg3 color:(struct CGColor *)arg4 enabled:(char)arg5;
+ (TSDShadow *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (TSDShadow *)p_defaultShadowEnabled:(char)arg0;
+ (TSDShadow *)contactShadowWithAngle:(float)arg0 offset:(float)arg1 radius:(float)arg2 height:(float)arg3 opacity:(float)arg4 color:(struct CGColor *)arg5 enabled:(char)arg6;
+ (TSDShadow *)shadowWithNSShadow:(id)arg0;
+ (NSSet *)curvedShadowWithOffset:(float)arg0 angle:(float)arg1 radius:(float)arg2 curve:(float)arg3 opacity:(float)arg4 color:(struct CGColor *)arg5 enabled:(char)arg6;
+ (UIColor *)keyPathsForValuesAffectingTSUColor;
+ (char)automaticallyNotifiesObserversOfTSUColor;

- (void)saveToArchive:(struct ShadowArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDShadow *)initWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;
- (NSString *)presetKind;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSObject *)mixedBaseObjectWithObject:(NSObject *)arg0;
- (void)applyToContext:(struct CGContext *)arg0 viewScale:(float)arg1 flipped:(char)arg2;
- (void)applyToContext:(struct CGContext *)arg0 viewScale:(float)arg1 flipped:(char)arg2 extraOffset:(struct CGSize)arg3;
- (struct CGRect)shadowBoundsForRect:(NSObject *)arg0;
- (struct CGRect)shadowBoundsForRect:(NSObject *)arg0 additionalAngle:(SEL)arg1;
- (TSUColor *)TSUColor;
- (NSString *)shadowByTransformingByTransform:(struct CGAffineTransform)arg0;
- (struct CGPoint)offsetDelta;
- (struct CGRect)shadowBoundsForRect:(NSObject *)arg0 additionalTransform:(SEL)arg1;
- (float)clampOffset:(float)arg0;
- (float)clampRadius:(float)arg0;
- (float)clampOpacity:(float)arg0;
- (id)newShadowClampedForSwatches;
- (char)isContactShadow;
- (char)isDropShadow;
- (char)isCurvedShadow;
- (char)showForEditingText;
- (void)applyToContext:(struct CGContext *)arg0 viewScale:(float)arg1;
- (struct CGRect)boundsInNaturalSpaceForRep:(NSObject *)arg0;
- (struct CGRect)boundsForRep:(NSObject *)arg0;
- (struct CGImage *)newShadowImageForRep:(NSObject *)arg0 withSize:(struct CGSize)arg1 drawSelector:(SEL)arg2 unflipped:(char)arg3;
- (char)differenceRequiresRebuilding:(id)arg0;
- (id)NSShadow;
- (id)i_initWithOpacity:(float)arg0 color:(struct CGColor *)arg1 enabled:(char)arg2;
- (struct CGImage *)i_newEmptyImageWithSize:(struct CGSize)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDShadow *)mutableCopy;
- (char)isEnabled;
- (TSDShadow *)copyWithZone:(struct _NSZone *)arg0;
- (float)opacity;
- (float)offset;
- (struct CGColor *)color;
- (TSDShadow *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (float)angle;
- (NSString *)typeDescription;
- (float)radius;
- (unsigned int)shadowType;

@end
