/* Runtime dump - OADRotation3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRotation3D : NSObject <NSCopying>
{
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADRotation3D *)copyWithZone:(struct _NSZone *)arg0;
- (float)latitude;
- (float)longitude;
- (OADRotation3D *)initWithLatitude:(float)arg0 longitude:(float)arg1 revolution:(float)arg2;
- (float)revolution;

@end
