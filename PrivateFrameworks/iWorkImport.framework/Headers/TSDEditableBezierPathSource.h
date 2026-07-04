/* Runtime dump - TSDEditableBezierPathSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing>
{
    NSMutableArray * mSubpaths;
    unsigned int mActiveSubpath;
    char mHasLockedFlipTransform;
    struct CGAffineTransform mLockedFlipTransform;
}

@property (retain, nonatomic) NSMutableArray * subpaths;
@property (retain, nonatomic) NSMutableArray * nodes;
@property (retain, nonatomic) NSArray * nodeTypes;
@property (readonly, nonatomic) TSDBezierNode * firstNode;
@property (readonly, nonatomic) TSDBezierNode * lastNode;
@property (nonatomic) char closed;
@property (readonly, nonatomic) char isOpen;
@property (readonly, nonatomic) char closeIfEndpointsAreEqual;
@property (readonly, nonatomic) char hasSelectedNode;
@property (readonly, nonatomic) char allNodesSelected;
@property (readonly, nonatomic) char canDeleteSelectedNodes;
@property (readonly, nonatomic) char deletingSelectedNodesWillDeleteShape;
@property (readonly, nonatomic) struct CGRect nodeBounds;
@property (readonly, nonatomic) char isCompound;
@property (readonly, nonatomic) struct CGPath * subpathForSelection;

+ (NSObject *)editableBezierPathSourceWithPathSource:(TSDPathSource *)arg0;
+ (NSString *)editableBezierPathSourceWithBezierPath:(TSUBezierPath *)arg0;
+ (NSObject *)editableBezierPathSource;

- (void)saveToArchive:(struct PathSourceArchive *)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform)pathFlipTransform;
- (struct CGPath *)pathWithoutFlips;
- (void)alignToOrigin;
- (NSObject *)nodePriorToNode:(NSObject *)arg0;
- (NSObject *)nodeAfterNode:(NSObject *)arg0;
- (void)removeLastNode;
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
- (void)convertToHobby;
- (void)setSubpaths:(NSMutableArray *)arg0;
- (void)setBezierPath:(TSUBezierPath *)arg0;
- (char)isCompound;
- (void)deleteSelectedNodesForced:(char)arg0;
- (void)toggleNode:(NSObject *)arg0 toType:(int)arg1 prevNode:(GKListNode *)arg2 nextNode:(GKListNode *)arg3;
- (void)smoothAllNodes;
- (NSObject *)subpathsForConnectingUsingFirstSubpathFirstNode:(char *)arg0 andSecondPathFirstNode:(char *)arg1;
- (id)splitEdge:(int)arg0 at:(float)arg1 fromSubpath:(int)arg2;
- (void)adjustGeometryForAlignToOrigin:(id)arg0;
- (void)setLockedFlipTransform:(char)arg0;
- (Class)preferredRepClass;
- (char)deletingSelectedNodesWillDeleteShape;
- (float)distanceToPoint:(struct CGPoint)arg0 subpathIndex:(unsigned int *)arg1 elementIndex:(unsigned int *)arg2 tValue:(float *)arg3 threshold:(float)arg4;
- (void)toggleSelectedNodesToType:(int)arg0;
- (void)selectSubpathForNode:(NSObject *)arg0 toggle:(char)arg1;
- (char)canConnectSelectedNodes;
- (void)connectSelectedNodes;
- (char)canCloseSelectedNodes;
- (void)closeSelectedNodes;
- (void)deleteSelectedEdges;
- (void)splitSelectedEdges;
- (void)splitSelectedNodes;
- (char)canCutAtSelectedNodes;
- (void)cutAtSelectedNodes;
- (struct CGPath *)subpathForSelection;
- (NSArray *)nodeTypes;
- (void)setNodeTypes:(NSArray *)arg0;
- (void)smoothCurveToPoint:(struct CGPoint)arg0 controlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (void)updateSmoothNodes;
- (void)morphWithMorphInfo:(NSDictionary *)arg0;
- (void)addTemporarySmoothNodes;
- (void)setNaturalSize:(struct CGSize)arg0;
- (NSMutableArray *)subpaths;
- (void)dealloc;
- (TSDEditableBezierPathSource *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)moveToPoint:(struct CGPoint)arg0;
- (void)closePath;
- (TSDEditableBezierPathSource *)copyWithZone:(struct _NSZone *)arg0;
- (void)lineToPoint:(struct CGPoint)arg0;
- (TSDBezierNode *)firstNode;
- (struct CGSize)naturalSize;
- (void)setNodes:(NSMutableArray *)arg0;
- (void)setClosed:(char)arg0;
- (char)isClosed;
- (char)isOpen;
- (TSDBezierNode *)lastNode;
- (void)curveToPoint:(struct CGPoint)arg0 controlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg0;
- (char)isRectangular;
- (char)isCircular;
- (TSDEditableBezierPathSource *)initWithArchive:(struct PathSourceArchive *)arg0;
- (NSMutableArray *)nodes;
- (void)addNode:(NSObject *)arg0;
- (void)removeNode:(NSObject *)arg0;

@end
