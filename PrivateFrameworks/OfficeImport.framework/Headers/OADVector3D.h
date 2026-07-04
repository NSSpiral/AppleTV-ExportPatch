/* Runtime dump - OADVector3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADVector3D : NSObject <NSCopying>
{
    float mDx;
    float mDy;
    float mDz;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADVector3D *)copyWithZone:(struct _NSZone *)arg0;
- (OADVector3D *)initWithDx:(float)arg0 dy:(float)arg1 dz:(float)arg2;
- (float)dx;
- (float)dy;
- (float)dz;

@end
