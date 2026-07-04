/* Runtime dump - TSDBezierSubpath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBezierSubpath : NSObject
{
    NSMutableArray * mNodes;
    char mClosed;
}

@property (retain, nonatomic) NSMutableArray * nodes;
@property (nonatomic) char closed;
@property (readonly, nonatomic) char isRectangular;
@property (readonly, nonatomic) TSUBezierPath * bezierPath;
@property (readonly, nonatomic) TSDBezierNode * firstNode;
@property (readonly, nonatomic) TSDBezierNode * lastNode;
@property (readonly, nonatomic) char allNodesSelected;
@property (readonly, nonatomic) char hasSelectedNode;
@property (readonly, nonatomic) char canDeleteSelectedNodes;
@property (readonly, nonatomic) struct CGRect nodeBounds;
@property (readonly, nonatomic) char closeIfEndpointsAreEqual;

- (float)distanceToPoint:(struct CGPoint)arg0 elementIndex:(unsigned int *)arg1 tValue:(float *)arg2 threshold:(float)arg3;
- (void)updateReflectedState;
- (void)appendToBezierPath:(NSString *)arg0 selectedNodesOnly:(char)arg1 fromIndex:(unsigned int)arg2;
- (NSObject *)nodePriorToNode:(NSObject *)arg0;
- (NSObject *)nodeAfterNode:(NSObject *)arg0;
- (void)removeLastNode;
- (NSObject *)splitEdgeAtIndex:(unsigned int)arg0 atPercentage:(float)arg1;
- (void)appendToBezierPath:(NSString *)arg0;
- (void)reverseDirection;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg0;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg0;
- (char)allNodesSelected;
- (char)hasSelectedNode;
- (char)canDeleteSelectedNodes;
- (void)deleteSelectedNodes;
- (void)selectAllNodes;
- (void)deselectAllNodes;
- (NSObject *)bezierNodeUnderPoint:(struct CGPoint)arg0 withTransform:(struct CGAffineTransform)arg1 andTolerance:(float)arg2 returningType:(int *)arg3;
- (struct CGRect)nodeBounds;
- (void)sharpenAllNodes;
- (void)smoothNode:(NSObject *)arg0;
- (char)closeIfEndpointsAreEqual;
- (void)addNodesToArray:(NSArray *)arg0;
- (void)convertToHobby;
- (void)smoothAllNodes;
- (void)updateSmoothNodes;
- (struct CGPoint)calculateNewControlFromOriginalDelta:(struct CGPoint)arg0 currentDelta:(struct CGPoint)arg1 originalSmoothDelta:(struct CGPoint)arg2 node:(struct CGPoint)arg3;
- (int)updateSmoothNodes:(id)arg0 from:(int)arg1 to:(int)arg2 closed:(char)arg3 addTemporaryNodes:(char)arg4;
- (void)updateSmoothNodes:(id)arg0 addTemporaryNodes:(char)arg1;
- (void)morphWithMorphInfo:(NSDictionary *)arg0;
- (void)removeTemporaryNodes;
- (void)addTemporarySmoothNodes;
- (void)dealloc;
- (TSDBezierSubpath *)init;
- (NSString *)description;
- (TSUBezierPath *)bezierPath;
- (TSDBezierSubpath *)copyWithZone:(struct _NSZone *)arg0;
- (TSDBezierNode *)firstNode;
- (void)setNodes:(NSMutableArray *)arg0;
- (void)setClosed:(char)arg0;
- (char)isClosed;
- (TSDBezierNode *)lastNode;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg0;
- (char)isRectangular;
- (char)isCircular;
- (NSMutableArray *)nodes;
- (void)addNode:(NSObject *)arg0;
- (void)removeNode:(NSObject *)arg0;

@end
