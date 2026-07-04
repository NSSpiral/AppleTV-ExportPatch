/* Runtime dump - TSDContactShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDContactShadow : TSDShadow
{
    float mHeight;
}

@property (readonly, nonatomic) float height;
@property (readonly, nonatomic) float perspective;

+ (TSDContactShadow *)instanceWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;
+ (NSSet *)contactShadowWithOffset:(float)arg0 height:(float)arg1 radius:(float)arg2 opacity:(float)arg3 color:(struct CGColor *)arg4 enabled:(char)arg5;

- (void)saveToArchive:(struct ShadowArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDContactShadow *)initWithArchive:(struct ShadowArchive *)arg0 unarchiver:(struct ShadowArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSDContactShadow *)initWithOffset:(float)arg0 height:(float)arg1 radius:(float)arg2 opacity:(float)arg3 color:(struct CGColor *)arg4 enabled:(char)arg5;
- (struct CGRect)shadowBoundsForRect:(NSObject *)arg0 additionalTransform:(SEL)arg1;
- (float)clampOffset:(float)arg0;
- (float)clampRadius:(float)arg0;
- (id)newShadowClampedForSwatches;
- (struct CGRect)boundsInNaturalSpaceForRep:(NSObject *)arg0;
- (struct CGRect)boundsForRep:(NSObject *)arg0;
- (struct CGImage *)newShadowImageForRep:(NSObject *)arg0 withSize:(struct CGSize)arg1 drawSelector:(SEL)arg2 unflipped:(char)arg3;
- (struct CGImage *)newShadowImageFromContext:(struct CGContext *)arg0 withSize:(struct CGSize)arg1 bounds:(struct CGRect)arg2 unflipped:(struct CGSize)arg3;
- (char)isEqual:(NSObject *)arg0;
- (TSDContactShadow *)copyWithZone:(struct _NSZone *)arg0;
- (float)height;
- (TSDContactShadow *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)shadowType;
- (float)perspective;

@end
