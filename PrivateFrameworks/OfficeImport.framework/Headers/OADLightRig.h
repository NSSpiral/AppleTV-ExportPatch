/* Runtime dump - OADLightRig
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLightRig : NSObject <NSCopying>
{
    OADRotation3D * mRotation;
    int mType;
    int mDirection;
}

- (void)dealloc;
- (OADLightRig *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (OADLightRig *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDirection:(int)arg0;
- (int)direction;
- (void)setRotation:(CPRotation *)arg0;
- (struct SCNVector4)rotation;

@end
