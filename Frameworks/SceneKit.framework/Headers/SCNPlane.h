/* Runtime dump - SCNPlane
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPlane : SCNGeometry
{
    id _reserved;
    float _width;
    float _height;
    float _cornerRadius;
    int _widthSegmentCount;
    int _heightSegmentCount;
    int _cornerSegmentCount;
    int _primitiveType;
}

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) int widthSegmentCount;
@property (nonatomic) int heightSegmentCount;
@property (nonatomic) float cornerRadius;
@property (nonatomic) int cornerSegmentCount;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNPlane *)planeWithWidth:(float)arg0 height:(float)arg1;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(NSObject *)arg0;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0;
- (SCNPlane *)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (NSObject *)presentationPlane;
- (int)widthSegmentCount;
- (void)setWidthSegmentCount:(int)arg0;
- (int)heightSegmentCount;
- (void)setHeightSegmentCount:(int)arg0;
- (int)cornerSegmentCount;
- (void)setCornerSegmentCount:(int)arg0;
- (SCNPlane *)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0;
- (void)dealloc;
- (SCNPlane *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPlane *)init;
- (SCNPlane *)copy;
- (NSString *)description;
- (SCNPlane *)copyWithZone:(struct _NSZone *)arg0;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg0;
- (float)width;
- (float)height;
- (void)setWidth:(float)arg0;
- (void)setHeight:(float)arg0;
- (int)primitiveType;

@end
