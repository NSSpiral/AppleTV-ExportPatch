/* Runtime dump - TSDCurvedShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCurvedShadow : TSDShadow
{
    float mCurve;
}

@property (readonly, nonatomic) float curve;

+ (TSDCurvedShadow *)instanceWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;
+ (NSSet *)curvedShadowWithOffset:(float)arg0 angle:(float)arg1 radius:(float)arg2 curve:(float)arg3 opacity:(float)arg4 color:(struct CGColor *)arg5 enabled:(char)arg6;

- (void)saveToArchive:(struct ShadowArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDCurvedShadow *)initWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSDCurvedShadow *)initWithOffset:(float)arg0 angle:(float)arg1 radius:(float)arg2 curve:(float)arg3 opacity:(float)arg4 color:(struct CGColor *)arg5 enabled:(char)arg6;
- (struct CGRect)shadowBoundsForRect:(NSObject *)arg0 additionalTransform:(SEL)arg1;
- (float)clampOffset:(float)arg0;
- (id)newShadowClampedForSwatches;
- (char)showForEditingText;
- (struct CGRect)boundsInNaturalSpaceForRep:(NSObject *)arg0;
- (struct CGRect)boundsForRep:(NSObject *)arg0;
- (struct CGImage *)newShadowImageForRep:(NSObject *)arg0 withSize:(struct CGSize)arg1 drawSelector:(SEL)arg2 unflipped:(char)arg3;
- (float)offsetFromCurve;
- (float)getVerticalOffset:(struct CGSize)arg0;
- (float)paddingForBlur;
- (struct CGRect)expandedBoundsForRect:(NSObject *)arg0;
- (struct CGPoint)boundsShiftForSize:(struct CGSize)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSDCurvedShadow *)copyWithZone:(struct _NSZone *)arg0;
- (float)curve;
- (TSDCurvedShadow *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)shadowType;

@end
