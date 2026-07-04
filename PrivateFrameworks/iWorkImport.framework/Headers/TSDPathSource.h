/* Runtime dump - TSDPathSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPathSource : NSObject <TSDMixing, NSCopying>
{
    char mHorizontalFlip;
    char mVerticalFlip;
}

@property char hasHorizontalFlip;
@property char hasVerticalFlip;

+ (NSObject *)pathSourceForShapeType:(int)arg0 naturalSize:(struct CGSize)arg1;
+ (TSDPathSource *)pathSourceWithArchive:(struct PathSourceArchive *)arg0;

- (char)hasVerticalFlip;
- (char)hasHorizontalFlip;
- (void)saveToArchive:(struct PathSourceArchive *)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)setHasHorizontalFlip:(char)arg0;
- (void)setHasVerticalFlip:(char)arg0;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform)pathFlipTransform;
- (char)isRectangularForever;
- (NSString *)interiorWrapPath;
- (Class)preferredControllerClass;
- (float)uniformScaleForScalingToNaturalSize:(struct CGSize)arg0;
- (void)scaleToNaturalSize:(struct CGSize)arg0;
- (NSString *)valueForSetSelector:(SEL)arg0;
- (void)loadSharedFromArchive:(struct PathSourceArchive *)arg0;
- (void)saveSharedToArchive:(struct PathSourceArchive *)arg0;
- (void)setNaturalSize:(struct CGSize)arg0;
- (char)isEqual:(NSObject *)arg0;
- (TSUBezierPath *)bezierPath;
- (TSDPathSource *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)naturalSize;
- (char)isRectangular;
- (char)isCircular;
- (TSDPathSource *)initWithArchive:(struct PathSourceArchive *)arg0;

@end
