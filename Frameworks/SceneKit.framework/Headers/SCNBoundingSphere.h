/* Runtime dump - SCNBoundingSphere
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBoundingSphere : NSObject
{
    struct SCNVector3 center;
    float radius;
}

@property (nonatomic) struct SCNVector3 center;
@property (nonatomic) float radius;

+ (NSObject *)SCNJSExportProtocol;

- (NSString *)description;
- (struct SCNVector3)center;
- (void)setCenter:(struct SCNVector3)arg0;
- (float)radius;
- (void)setRadius:(float)arg0;

@end
