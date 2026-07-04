/* Runtime dump - SCNSkinner
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSkinner : NSObject <NSSecureCoding>
{
    id _reserved;
    struct __C3DSkinner * _skinner;
}

@property (retain, nonatomic) SCNNode * skeleton;
@property (retain, nonatomic) SCNGeometry * baseGeometry;
@property (nonatomic) struct SCNMatrix4 baseGeometryBindTransform;
@property (readonly, nonatomic) NSArray * boneInverseBindTransforms;
@property (readonly, nonatomic) NSArray * bones;
@property (readonly, nonatomic) SCNGeometrySource * boneWeights;
@property (readonly, nonatomic) SCNGeometrySource * boneIndices;

+ (SCNSkinner *)skinnerWithSkinnerRef:(struct __C3DSkinner *)arg0;
+ (struct __C3DSkinner *)createSkinnerWithBaseGeometry:(SCNGeometry *)arg0 bones:(NSArray *)arg1 boneWeights:(SCNGeometrySource *)arg2 boneIndices:(SCNGeometrySource *)arg3;
+ (NSObject *)skinnerWithBaseGeometry:(SCNGeometry *)arg0 bones:(NSArray *)arg1 boneInverseBindTransforms:(NSArray *)arg2 boneWeights:(SCNGeometrySource *)arg3 boneIndices:(SCNGeometrySource *)arg4;
+ (char)supportsSecureCoding;

- (SCNScene *)scene;
- (struct __C3DScene *)sceneRef;
- (void *)__CFObject;
- (struct __C3DSkinner *)skinnerRef;
- (SCNNode *)skeleton;
- (void)setSkeleton:(SCNNode *)arg0;
- (SCNSkinner *)initWithSkinnerRef:(struct __C3DSkinner *)arg0;
- (void)setBones:(NSArray *)arg0;
- (void)setBoneInverseBindTransforms:(NSArray *)arg0;
- (NSArray *)bones;
- (SCNGeometry *)baseGeometry;
- (struct SCNMatrix4)baseGeometryBindTransform;
- (SCNGeometrySource *)boneWeights;
- (SCNGeometrySource *)boneIndices;
- (NSArray *)boneInverseBindTransforms;
- (void)setBaseGeometryBindTransform:(struct SCNMatrix4)arg0;
- (void)setBaseGeometry:(SCNGeometry *)arg0;
- (NSArray *)joints;
- (void)dealloc;
- (SCNSkinner *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNSkinner *)copy;
- (SCNSkinner *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
