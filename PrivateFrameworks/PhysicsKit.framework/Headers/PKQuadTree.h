/* Runtime dump - PKQuadTree
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKQuadTree : NSObject
{
    struct shared_ptr<QuadTree> quadTree;
}

- (void).cxx_construct;
- (void).cxx_destruct;

@end
