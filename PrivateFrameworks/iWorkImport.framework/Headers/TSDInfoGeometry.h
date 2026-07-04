/* Runtime dump - TSDInfoGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    struct CGPoint mPosition;
    struct CGSize mSize;
    struct ? mFlags;
    float mAngle;
}

@property (readonly, nonatomic) struct CGPoint position;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) char widthValid;
@property (readonly, nonatomic) char heightValid;
@property (readonly, nonatomic) char horizontalFlip;
@property (readonly, nonatomic) char verticalFlip;
@property (readonly, nonatomic) float angle;

+ (NSString *)geometryFromFullTransform:(struct CGAffineTransform)arg0;
+ (NSString *)geometryFromFullTransform:(struct CGAffineTransform)arg0 widthValid:(char)arg1 heightValid:(char)arg2;
+ (NSString *)geometryFromTransform:(struct CGAffineTransform)arg0 withSize:(struct CGSize)arg1;

- (char)horizontalFlip;
- (char)verticalFlip;
- (void)saveToArchive:(struct GeometryArchive *)arg0 archiver:(NSObject *)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)widthValid;
- (char)heightValid;
- (TSDInfoGeometry *)initWithTransform:(struct CGAffineTransform)arg0 size:(struct CGSize)arg1;
- (struct CGRect)boundsBeforeRotation;
- (TSDInfoGeometry *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1;
- (char)isEqualExceptForPosition:(NSObject *)arg0;
- (struct CGAffineTransform)fullTransform;
- (NSString *)geometryByAppendingTransform:(struct CGAffineTransform)arg0;
- (TSDInfoGeometry *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1 widthValid:(char)arg2 heightValid:(char)arg3 horizontalFlip:(char)arg4 verticalFlip:(char)arg5 angle:(float)arg6;
- (TSDInfoGeometry *)initWithTransformedBoundsOrigin:(struct CGPoint)arg0 size:(struct CGSize)arg1 horizontalFlip:(char)arg2 verticalFlip:(char)arg3 angle:(float)arg4;
- (struct CGPoint)transformedBoundsOrigin;
- (struct CGAffineTransform)transformBasedOnRect:(struct CGRect)arg0;
- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg0 centeredAtPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg0 centeredAtPoint:(struct CGPoint)arg1 withFlips:(char)arg2;
- (struct CGRect)transformedBounds;
- (TSDInfoGeometry *)initWithFullTransform:(struct CGAffineTransform)arg0 widthValid:(char)arg1 heightValid:(char)arg2;
- (TSDInfoGeometry *)initWithWidth:(float)arg0;
- (TSDInfoGeometry *)initWithHeight:(float)arg0;
- (TSDInfoGeometry *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1 angle:(float)arg2;
- (TSDInfoGeometry *)initWithCenter:(struct CGPoint)arg0 size:(struct CGSize)arg1;
- (TSDInfoGeometry *)initWithTransformedBoundsOrigin:(struct CGPoint)arg0 size:(struct CGSize)arg1 angle:(float)arg2;
- (TSDInfoGeometry *)initWithLayoutGeometry:(NSObject *)arg0;
- (struct CGAffineTransform)transformWithoutFlips;
- (NSObject *)geometryWithParentGeometry:(NSObject *)arg0;
- (NSObject *)geometryRelativeToGeometry:(NSObject *)arg0;
- (id)geometryWithNewBounds:(struct CGRect)arg0;
- (NSObject *)normalizedGeometry;
- (struct CGSize)size;
- (TSDInfoGeometry *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDInfoGeometry *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)center;
- (struct CGAffineTransform)transform;
- (struct CGPoint)position;
- (TSDInfoGeometry *)initWithSize:(struct CGSize)arg0;
- (TSDInfoGeometry *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (float)angle;
- (TSDInfoGeometry *)initWithArchive:(struct GeometryArchive *)arg0;

@end
