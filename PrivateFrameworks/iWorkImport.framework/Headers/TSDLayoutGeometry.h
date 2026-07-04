/* Runtime dump - TSDLayoutGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying>
{
    struct CGSize mSize;
    struct CGAffineTransform mTransform;
}

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) struct CGAffineTransform transform;

+ (NSString *)geometryFromFullTransform:(struct CGAffineTransform)arg0;

- (TSDLayoutGeometry *)initWithSize:(struct CGSize)arg0 transform:(struct CGAffineTransform)arg1;
- (id)geometryByTranslatingBy:(struct CGPoint)arg0;
- (TSDInfoGeometry *)infoGeometry;
- (TSDLayoutGeometry *)initWithInfoGeometry:(TSDInfoGeometry *)arg0;
- (struct CGAffineTransform)fullTransform;
- (char)differsInMoreThanTranslationFrom:(NSObject *)arg0;
- (struct CGAffineTransform)inverseTransform;
- (struct CGAffineTransform)transformByConcatenatingTransformTo:(struct CGAffineTransform)arg0;
- (id)geometryByTransformingBy:(struct CGAffineTransform)arg0;
- (id)geometryByOutsettingBy:(struct CGSize)arg0;
- (TSDLayoutGeometry *)initWithFrame:(struct CGRect)arg0;
- (struct CGSize)size;
- (TSDLayoutGeometry *)init;
- (struct CGRect)frame;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSDLayoutGeometry *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)center;
- (struct CGAffineTransform)transform;
- (TSDLayoutGeometry *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
