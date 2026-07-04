/* Runtime dump - SCNPhysicsShape
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    id _referenceObject;
    NSDictionary * _options;
    NSArray * _transforms;
    void * _cachedObject;
    struct btCollisionShape * _collisionShape;
}

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)shapeWithGeometry:(SCNGeometry *)arg0 options:(NSDictionary *)arg1;
+ (NSObject *)shapeWithNode:(SCNNode *)arg0 options:(NSDictionary *)arg1;
+ (SCNPhysicsShape *)shapeWithShapes:(NSArray *)arg0 transforms:(NSArray *)arg1;
+ (SCNPhysicsShape *)defaultShapeForGeometry:(NSObject *)arg0;
+ (char)supportsSecureCoding;

- (struct btCollisionShape *)_handle;
- (SCNPhysicsShape *)initWithContent:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (void)_setTransforms:(TSCH3DLabelsRendererTransforms *)arg0;
- (SCNPhysicsShape *)initWithCachedObject:(void *)arg0 options:(NSDictionary *)arg1;
- (void)dealloc;
- (SCNPhysicsShape *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPhysicsShape *)copy;
- (SCNPhysicsShape *)copyWithZone:(struct _NSZone *)arg0;

@end
