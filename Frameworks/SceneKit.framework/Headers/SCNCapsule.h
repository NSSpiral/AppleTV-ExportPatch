/* Runtime dump - SCNCapsule
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCapsule : SCNGeometry
{
    id _reserved;
    float _capsulecapRadius;
    float _capsuleheight;
    int _capsuleheightSegmentCount;
    int _capsuleradialSegmentCount;
    int _capsulecapSegmentCount;
    int _capsuleprimitiveType;
}

@property (nonatomic) float capRadius;
@property (nonatomic) float height;
@property (nonatomic) int radialSegmentCount;
@property (nonatomic) int heightSegmentCount;
@property (nonatomic) int capSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNCapsule *)capsuleWithCapRadius:(float)arg0 height:(float)arg1;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNCapsule *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)heightSegmentCount;
- (void)setHeightSegmentCount:(int)arg0;
- (SCNCapsule *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)radialSegmentCount;
- (void)setRadialSegmentCount:(int)arg0;
- (id)presentationCapsule;
- (float)capRadius;
- (void)setCapRadius:(float)arg0;
- (int)capSegmentCount;
- (void)setCapSegmentCount:(int)arg0;
- (void)dealloc;
- (SCNCapsule *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNCapsule *)init;
- (SCNCapsule *)copy;
- (NSString *)description;
- (SCNCapsule *)copyWithZone:(struct _NSZone *)arg0;
- (float)height;
- (void)setHeight:(float)arg0;
- (int)primitiveType;

@end
