/* Runtime dump - ODILayoutNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODILayoutNode : NSObject
{
    ODDPoint * mPoint;
    ODDAlgorithm * mAlgorithm;
    ODDShape * mShape;
    NSMutableArray * mChildren;
}

- (void)dealloc;
- (ODILayoutNode *)initWithLayoutNode:(NSObject *)arg0 state:(struct ODILayoutNodeState *)arg1;
- (ODILayoutNode *)initWithLayoutNode:(NSObject *)arg0 point:(struct CGPoint)arg1;
- (void)processLayoutObjects:(NSArray *)arg0 state:(struct ODILayoutNodeState *)arg1;
- (void)processLayoutNode:(NSObject *)arg0 state:(struct ODILayoutNodeState *)arg1;
- (void)processChoose:(id)arg0 state:(struct ODILayoutNodeState *)arg1;
- (void)processForEach:(id)arg0 state:(struct ODILayoutNodeState *)arg1;
- (void)processAlgorithm:(id)arg0 state:(struct ODILayoutNodeState *)arg1;
- (void)processShape:(id)arg0 state:(struct ODILayoutNodeState *)arg1;

@end
