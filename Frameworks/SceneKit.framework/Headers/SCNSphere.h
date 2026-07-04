/* Runtime dump - SCNSphere
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSphere : SCNGeometry
{
    id _reserved;
    float _sphereradius;
    float _sphereradialSpan;
    int _spheresegmentCount;
    int _sphereprimitiveType;
    char _spheregeodesic;
    char _spherehemispheric;
}

@property (nonatomic) float radius;
@property (nonatomic) char geodesic;
@property (nonatomic) int segmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNSphere *)sphereWithRadius:(float)arg0;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (void)setGeodesic:(char)arg0;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNSphere *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (SCNSphere *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (id)presentationSphere;
- (float)radialSpan;
- (void)setRadialSpan:(float)arg0;
- (void)setSegmentCount:(int)arg0;
- (char)isGeodesic;
- (char)isHemispheric;
- (void)setHemispheric:(char)arg0;
- (void)dealloc;
- (SCNSphere *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNSphere *)init;
- (SCNSphere *)copy;
- (NSString *)description;
- (SCNSphere *)copyWithZone:(struct _NSZone *)arg0;
- (float)radius;
- (void)setRadius:(float)arg0;
- (int)segmentCount;
- (int)primitiveType;

@end
