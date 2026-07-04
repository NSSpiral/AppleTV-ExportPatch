/* Runtime dump - TSCH3DPickedPoint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPickedPoint : NSObject <NSCopying>
{
    struct tvec2<int> mElement;
    TSCH3DSceneObject * mSceneObject;
    struct tvec3<float> mObjectSpacePoint;
    struct tvec2<float> mCenterProjectionPoint;
    struct tmat4x4<float> mProjection;
    struct tmat4x4<float> mTransform;
}

@property (readonly, nonatomic) struct tvec2<int> element;
@property (readonly, nonatomic) struct tvec3<float> objectSpacePoint;
@property (readonly, nonatomic) struct tvec2<float> centerProjectionPoint;
@property (readonly, nonatomic) struct tmat4x4<float> projection;
@property (readonly, nonatomic) struct tmat4x4<float> transform;
@property (readonly, retain, nonatomic) TSCH3DSceneObject * sceneObject;
@property (readonly, nonatomic) struct tvec3<float> cameraSpacePoint;

+ (NSObject *)pickedPointWithSceneObject:(TSCH3DSceneObject *)arg0 element:(struct tvec2<int> *)arg1 projection:(struct tvec2<int>)arg2 transform:(struct tmat4x4<float> *)arg3 objectSpacePoint:(struct tmat4x4<float>)arg4 centerProjectionPoint:(struct tvec2<float>)arg5;

- (struct tmat4x4<float>)projection;
- (void)clearParent;
- (TSCH3DSceneObject *)sceneObject;
- (struct tvec3<float>)cameraSpacePoint;
- (struct tvec2<float>)centerProjectionPoint;
- (TSCH3DPickedPoint *)initWithSceneObject:(TSCH3DSceneObject *)arg0 element:(struct tvec2<int> *)arg1 projection:(struct tvec2<int>)arg2 transform:(struct tmat4x4<float> *)arg3 objectSpacePoint:(struct tmat4x4<float>)arg4 centerProjectionPoint:(struct tvec2<float>)arg5;
- (struct tvec3<float>)objectSpacePoint;
- (void)dealloc;
- (TSCH3DPickedPoint *)copyWithZone:(struct _NSZone *)arg0;
- (struct tmat4x4<float>)transform;
- (void).cxx_construct;
- (struct tvec2<int>)element;

@end
