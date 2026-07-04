/* Runtime dump - NSAffineTransform
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAffineTransform : NSObject <NSCopying, NSCoding>
{
    struct ? _transformStruct;
}

@property struct ? transformStruct;

+ (struct SCNMatrix4)transform;

- (void)gqu_transformRect:(struct CGRect)arg0 upperLeft:(struct CGSize)arg1 lowerLeft:(id)arg2 lowerRight:(struct CGPoint *)arg3 upperRight:(struct CGPoint *)arg4;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSObject *)CAMLType;
- (id)CA_addValue:(NSValue *)arg0 multipliedBy:(int)arg1;
- (id)CA_interpolateValue:(id)arg0 byFraction:(float)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)invert;
- (NSAffineTransform *)initWithTransform:(NSObject *)arg0;
- (void)rotateByRadians:(float)arg0;
- (NSAffineTransform *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSAffineTransform *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSAffineTransform *)copyWithZone:(struct _NSZone *)arg0;
- (void)scaleBy:(float)arg0;
- (void)translateXBy:(float)arg0 yBy:(float)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg0;
- (void)scaleXBy:(float)arg0 yBy:(float)arg1;
- (struct ?)transformStruct;
- (void)setTransformStruct:(struct ?)arg0;
- (struct CGPoint)transformPoint:(struct CGPoint)arg0;
- (void)prependTransform:(NSObject *)arg0;
- (void)appendTransform:(NSObject *)arg0;
- (void)rotateByDegrees:(float)arg0;

@end
