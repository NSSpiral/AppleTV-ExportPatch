/* Runtime dump - TSDDropShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDropShadow : TSDShadow

+ (TSDDropShadow *)instanceWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;

- (void)saveToArchive:(struct ShadowArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDDropShadow *)initWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSDDropShadow *)initWithAngle:(float)arg0 offset:(float)arg1 radius:(float)arg2 opacity:(float)arg3 color:(struct CGColor *)arg4 enabled:(char)arg5;
- (id)newShadowClampedForSwatches;
- (struct CGRect)boundsInNaturalSpaceForRep:(NSObject *)arg0;
- (struct CGRect)boundsForRep:(NSObject *)arg0;
- (struct CGImage *)newShadowImageForRep:(NSObject *)arg0 withSize:(struct CGSize)arg1 drawSelector:(SEL)arg2 unflipped:(char)arg3;
- (char)isEqual:(NSObject *)arg0;
- (TSDDropShadow *)copyWithZone:(struct _NSZone *)arg0;
- (TSDDropShadow *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)shadowType;

@end
