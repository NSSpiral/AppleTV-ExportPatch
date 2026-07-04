/* Runtime dump - SCNTorus
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTorus : SCNGeometry
{
    id _reserved;
    float _torusringRadius;
    float _toruspipeRadius;
    float _torusradialSpan;
    int _torusringSegmentCount;
    int _toruspipeSegmentCount;
    int _torusprimitiveType;
}

@property (nonatomic) float ringRadius;
@property (nonatomic) float pipeRadius;
@property (nonatomic) int ringSegmentCount;
@property (nonatomic) int pipeSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNTorus *)torusWithRingRadius:(float)arg0 pipeRadius:(float)arg1;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNTorus *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (SCNTorus *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (float)radialSpan;
- (void)setRadialSpan:(float)arg0;
- (id)presentationTorus;
- (float)ringRadius;
- (float)pipeRadius;
- (void)setRingRadius:(float)arg0;
- (void)setPipeRadius:(float)arg0;
- (int)ringSegmentCount;
- (void)setRingSegmentCount:(int)arg0;
- (int)pipeSegmentCount;
- (void)setPipeSegmentCount:(int)arg0;
- (void)dealloc;
- (SCNTorus *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNTorus *)init;
- (SCNTorus *)copy;
- (NSString *)description;
- (SCNTorus *)copyWithZone:(struct _NSZone *)arg0;
- (int)primitiveType;

@end
