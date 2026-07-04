/* Runtime dump - PKPhysicsFieldCustomBlock
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsFieldCustomBlock : PKPhysicsField
{
    id _batchBlock;
    id _block;
}

+ (PKPhysicsFieldCustomBlock *)fieldWithCustomBlock:(id /* block */)arg0;
+ (PKPhysicsFieldCustomBlock *)fieldWithCustomBatchBlock:(id /* block */)arg0;

- (void).cxx_destruct;
- (PKPhysicsFieldCustomBlock *)initWithCustomBlock:(id /* block */)arg0;
- (PKPhysicsFieldCustomBlock *)initWithCustomBatchBlock:(id /* block */)arg0;

@end
