/* Runtime dump - SCNPyramid
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPyramid : SCNGeometry
{
    id _reserved;
    float _pyramidwidth;
    float _pyramidheight;
    float _pyramidlength;
    int _pyramidwidthSegmentCount;
    int _pyramidheightSegmentCount;
    int _pyramidlengthSegmentCount;
    int _pyramidprimitiveType;
}

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float length;
@property (nonatomic) int widthSegmentCount;
@property (nonatomic) int heightSegmentCount;
@property (nonatomic) int lengthSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNPyramid *)pyramidWithWidth:(float)arg0 height:(float)arg1 length:(float)arg2;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNPyramid *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)widthSegmentCount;
- (void)setWidthSegmentCount:(int)arg0;
- (int)heightSegmentCount;
- (void)setHeightSegmentCount:(int)arg0;
- (SCNPyramid *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (int)lengthSegmentCount;
- (void)setLengthSegmentCount:(int)arg0;
- (id)presentationPyramid;
- (void)dealloc;
- (SCNPyramid *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPyramid *)init;
- (SCNPyramid *)copy;
- (NSString *)description;
- (float)length;
- (SCNPyramid *)copyWithZone:(struct _NSZone *)arg0;
- (float)width;
- (float)height;
- (void)setLength:(float)arg0;
- (void)setWidth:(float)arg0;
- (void)setHeight:(float)arg0;
- (int)primitiveType;

@end
