/* Runtime dump - TSDBezierPathSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBezierPathSource : TSDPathSource <TSDMixing>
{
    TSUBezierPath * mPath;
    char mIsRectangular;
    struct CGSize mNaturalSize;
}

@property (nonatomic) struct CGSize naturalSize;

+ (NSString *)pathSourceWithBezierPath:(TSUBezierPath *)arg0;

- (void)saveToArchive:(struct PathSourceArchive *)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSDBezierPathSource *)initWithBezierPath:(TSUBezierPath *)arg0;
- (id)bezierPathWithoutFlips;
- (char)isRectangularForever;
- (TSDBezierPathSource *)initWithArchive:(struct PathSourceArchive *)arg0 andBezierArchive:(struct PathSourceArchive)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg0 andBezierArchive:(id)arg1;
- (void)p_setBezierPath:(NSString *)arg0;
- (struct CGAffineTransform)transformToNaturalSize;
- (TSDBezierPathSource *)initWithNaturalSize:(struct CGSize)arg0;
- (void)setNaturalSize:(struct CGSize)arg0;
- (void)dealloc;
- (TSDBezierPathSource *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDBezierPathSource *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)naturalSize;
- (char)isRectangular;
- (char)isCircular;
- (TSDBezierPathSource *)initWithArchive:(struct PathSourceArchive *)arg0;

@end
