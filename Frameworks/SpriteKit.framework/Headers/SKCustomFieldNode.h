/* Runtime dump - SKCustomFieldNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKCustomFieldNode : SKFieldNode

@property (copy, nonatomic) id block;

- (NSString *)_descriptionClassName;
- (void)_initialize;
- (void)setBatchBlock:(id /* block */)arg0;
- (id /* block */)batchBlock;
- (SKCustomFieldNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKCustomFieldNode *)init;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;

@end
