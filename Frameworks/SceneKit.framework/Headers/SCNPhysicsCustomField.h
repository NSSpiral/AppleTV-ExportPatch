/* Runtime dump - SCNPhysicsCustomField
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsCustomField : SCNPhysicsField
{
    id _block;
}

@property id block;

+ (NSObject *)SCNJSExportProtocol;

- (struct c3dPhysicsField *)_createField;
- (void)dealloc;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;

@end
