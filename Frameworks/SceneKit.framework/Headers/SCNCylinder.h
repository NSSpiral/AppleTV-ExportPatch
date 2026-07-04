/* Runtime dump - SCNCylinder
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCylinder : SCNGeometry
{
    id _reserved;
    float _cylinderradius;
    float _cylinderheight;
    float _cylinderradialSpan;
    int _cylinderheightSegmentCount;
    int _cylinderradialSegmentCount;
    int _cylinderprimitiveType;
}

@property (nonatomic) float radius;
@property (nonatomic) float height;
@property (nonatomic) int radialSegmentCount;
@property (nonatomic) int heightSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNCylinder *)cylinderWithRadius:(float)arg0 height:(float)arg1;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNCylinder *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)heightSegmentCount;
- (void)setHeightSegmentCount:(int)arg0;
- (SCNCylinder *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (float)radialSpan;
- (void)setRadialSpan:(float)arg0;
- (id)presentationCylinder;
- (int)radialSegmentCount;
- (void)setRadialSegmentCount:(int)arg0;
- (void)dealloc;
- (SCNCylinder *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNCylinder *)init;
- (SCNCylinder *)copy;
- (NSString *)description;
- (SCNCylinder *)copyWithZone:(struct _NSZone *)arg0;
- (float)height;
- (void)setHeight:(float)arg0;
- (float)radius;
- (void)setRadius:(float)arg0;
- (int)primitiveType;

@end
