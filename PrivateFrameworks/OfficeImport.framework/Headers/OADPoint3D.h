/* Runtime dump - OADPoint3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPoint3D : NSObject <NSCopying>
{
    float mX;
    float mY;
    float mZ;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADPoint3D *)copyWithZone:(struct _NSZone *)arg0;
- (float)x;
- (float)y;
- (float)z;
- (OADPoint3D *)initWithX:(float)arg0 y:(float)arg1 z:(float)arg2;

@end
