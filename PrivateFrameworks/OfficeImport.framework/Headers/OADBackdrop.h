/* Runtime dump - OADBackdrop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBackdrop : NSObject <NSCopying>
{
    OADPoint3D * mAnchor;
    OADVector3D * mNormal;
    OADVector3D * mUp;
}

- (TSCH3Dvec3DataBuffer *)normal;
- (void)dealloc;
- (OADBackdrop *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADBackdrop *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)anchor;
- (void)setAnchor:(PLImageViewWithAnimatedAnchor *)arg0;
- (void)setNormal:(id)arg0;
- (void)setUp:(struct Matrix<double, 3, 1>)arg0;
- (struct Matrix<double, 3, 1>)up;

@end
