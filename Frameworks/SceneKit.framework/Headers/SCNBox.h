/* Runtime dump - SCNBox
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBox : SCNGeometry
{
    id _reserved;
    float _boxwidth;
    float _boxheight;
    float _boxlength;
    float _boxchamferRadius;
    int _boxwidthSegmentCount;
    int _boxheightSegmentCount;
    int _boxlengthSegmentCount;
    int _boxchamferSegmentCount;
    int _boxprimitiveType;
}

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float length;
@property (nonatomic) float chamferRadius;
@property (nonatomic) int widthSegmentCount;
@property (nonatomic) int heightSegmentCount;
@property (nonatomic) int lengthSegmentCount;
@property (nonatomic) int chamferSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNBox *)boxWithWidth:(float)arg0 height:(float)arg1 length:(float)arg2 chamferRadius:(float)arg3;
+ (struct CGRect)box;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNBox *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)widthSegmentCount;
- (void)setWidthSegmentCount:(int)arg0;
- (int)heightSegmentCount;
- (void)setHeightSegmentCount:(int)arg0;
- (SCNBox *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (id)presentationBox;
- (void)setChamferRadius:(float)arg0;
- (float)chamferRadius;
- (int)lengthSegmentCount;
- (void)setLengthSegmentCount:(int)arg0;
- (int)chamferSegmentCount;
- (void)setChamferSegmentCount:(int)arg0;
- (void)dealloc;
- (SCNBox *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNBox *)init;
- (SCNBox *)copy;
- (NSString *)description;
- (float)length;
- (SCNBox *)copyWithZone:(struct _NSZone *)arg0;
- (float)width;
- (float)height;
- (void)setLength:(float)arg0;
- (void)setWidth:(float)arg0;
- (void)setHeight:(float)arg0;
- (int)primitiveType;

@end
