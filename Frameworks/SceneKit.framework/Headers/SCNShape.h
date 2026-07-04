/* Runtime dump - SCNShape
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNShape : SCNGeometry
{
    id _reserved;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    struct UIBezierPath * _chamferProfile;
    int _primitiveType;
    int _chamferMode;
    struct UIBezierPath * _path;
}

@property (copy, nonatomic) UIBezierPath * path;
@property (nonatomic) float extrusionDepth;
@property (nonatomic) int chamferMode;
@property (nonatomic) float chamferRadius;
@property (copy, nonatomic) UIBezierPath * chamferProfile;

+ (NSObject *)SCNJSExportProtocol;
+ (NSString *)shapeWithPath:(UIBezierPath *)arg0 extrusionDepth:(float)arg1;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DShapeGeometry *)arg0;
- (void)setChamferRadius:(float)arg0;
- (float)chamferRadius;
- (void)setExtrusionDepth:(float)arg0;
- (float)extrusionDepth;
- (struct UIBezierPath *)chamferProfile;
- (void)setChamferProfile:(struct UIBezierPath *)arg0;
- (struct ?)params;
- (void)setDiscretizedStraightLineMaxLength:(float)arg0;
- (float)discretizedStraightLineMaxLength;
- (SCNShape *)initPresentationShapeGeometryWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg0;
- (int)chamferMode;
- (void)setChamferMode:(int)arg0;
- (SCNShape *)initWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg0;
- (void)_customEncodingOfSCNShape:(id)arg0;
- (void)_customDecodingOfSCNShape:(id)arg0;
- (void)dealloc;
- (SCNShape *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNShape *)init;
- (SCNShape *)copy;
- (NSString *)description;
- (struct UIBezierPath *)path;
- (SCNShape *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPath:(struct UIBezierPath *)arg0;
- (int)primitiveType;

@end
