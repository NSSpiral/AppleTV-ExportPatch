/* Runtime dump - SCNTube
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTube : SCNGeometry
{
    id _reserved;
    float _tubeinnerRadius;
    float _tubeouterRadius;
    float _tubeheight;
    float _tuberadialSpan;
    int _tubeheightSegmentCount;
    int _tuberadialSegmentCount;
    int _tubeprimitiveType;
}

@property (nonatomic) float innerRadius;
@property (nonatomic) float outerRadius;
@property (nonatomic) float height;
@property (nonatomic) int radialSegmentCount;
@property (nonatomic) int heightSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNTube *)tubeWithInnerRadius:(float)arg0 outerRadius:(float)arg1 height:(float)arg2;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNTube *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)heightSegmentCount;
- (void)setHeightSegmentCount:(int)arg0;
- (SCNTube *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (float)radialSpan;
- (void)setRadialSpan:(float)arg0;
- (int)radialSegmentCount;
- (void)setRadialSegmentCount:(int)arg0;
- (id)presentationTube;
- (float)outerRadius;
- (void)setOuterRadius:(float)arg0;
- (void)dealloc;
- (SCNTube *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNTube *)init;
- (SCNTube *)copy;
- (NSString *)description;
- (SCNTube *)copyWithZone:(struct _NSZone *)arg0;
- (float)height;
- (void)setInnerRadius:(float)arg0;
- (float)innerRadius;
- (void)setHeight:(float)arg0;
- (int)primitiveType;

@end
