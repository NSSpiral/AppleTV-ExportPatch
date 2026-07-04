/* Runtime dump - SCNCone
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCone : SCNGeometry
{
    id _reserved;
    float _conetopRadius;
    float _conebottomRadius;
    float _coneheight;
    int _coneheightSegmentCount;
    int _coneradialSegmentCount;
    int _coneprimitiveType;
}

@property (nonatomic) float topRadius;
@property (nonatomic) float bottomRadius;
@property (nonatomic) float height;
@property (nonatomic) int radialSegmentCount;
@property (nonatomic) int heightSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNCone *)coneWithTopRadius:(float)arg0 bottomRadius:(float)arg1 height:(float)arg2;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNCone *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)heightSegmentCount;
- (void)setHeightSegmentCount:(int)arg0;
- (SCNCone *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)radialSegmentCount;
- (void)setRadialSegmentCount:(int)arg0;
- (id)presentationCone;
- (float)topRadius;
- (float)bottomRadius;
- (void)setTopRadius:(float)arg0;
- (void)setBottomRadius:(float)arg0;
- (void)dealloc;
- (SCNCone *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNCone *)init;
- (SCNCone *)copy;
- (NSString *)description;
- (SCNCone *)copyWithZone:(struct _NSZone *)arg0;
- (float)height;
- (void)setHeight:(float)arg0;
- (int)primitiveType;

@end
