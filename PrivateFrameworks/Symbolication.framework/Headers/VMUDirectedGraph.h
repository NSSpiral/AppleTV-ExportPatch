/* Runtime dump - VMUDirectedGraph
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDirectedGraph : NSObject <NSCopying>
{
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    unsigned int _edgeCapacity;
    unsigned int _externalEdges;
    void * _deadNodes;
    unsigned int _nextNodeName;
    unsigned int _nextEdgeName;
    unsigned int * _nodeAdjIndex;
    struct _VMUDirectedGraphEdge * _edges;
    NSDictionary * _additionalProperties;
    unsigned int _indexedNodeSpace;
    unsigned int _indexedEdges;
    char _insideSearch;
    char _inverted;
}

@property (copy, nonatomic) NSDictionary * additionalProperties;
@property (readonly, nonatomic) unsigned int nodeCount;
@property (readonly, nonatomic) unsigned int edgeCount;
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (readonly, nonatomic) unsigned int edgeNamespaceSize;

+ (void)initialize;
+ (void *)_copyUnarchived:(id)arg0 length:(unsigned int *)arg1 options:(unsigned int)arg2;
+ (NSData *)_archivedBytes:(void *)arg0 length:(void)arg1 options:(unsigned int)arg2;
+ (NSObject *)_archivedObject:(NSObject *)arg0 options:(unsigned int)arg1;
+ (NSObject *)_unarchivedObject:(NSObject *)arg0 options:(unsigned int)arg1;

- (NSDictionary *)additionalProperties;
- (void)dealloc;
- (VMUDirectedGraph *)copyWithZone:(struct _NSZone *)arg0;
- (void)setInverted:(char)arg0;
- (unsigned int)nodeCount;
- (unsigned int)enumerateNodesWithBlock:(id /* block */)arg0;
- (VMUDirectedGraph *)initWithArchived:(id)arg0 options:(unsigned int)arg1;
- (void)_adjustAdjacencyMap;
- (void)archiveDictionaryRepresentation:(NSDictionary *)arg0 options:(unsigned int)arg1;
- (VMUDirectedGraph *)initWithNodes:(unsigned int)arg0;
- (void)_internalAddEdgeFromNode:(unsigned int)arg0 toNode:(unsigned int)arg1 withName:(unsigned int)arg2;
- (void)_faultDeadNodeMap;
- (void)_removeEdges:(MREffectPhotoEdges *)arg0;
- (void)_renameWithNodeMap:(unsigned int *)arg0 nodeNamespace:(unsigned int)arg1 edgeMap:(unsigned int *)arg2 edgeNamespace:(unsigned int)arg3;
- (unsigned int)enumerateEdgesWithBlock:(id /* block */)arg0;
- (void)_searchMainLoop:(unsigned int)arg0 action:(NSObject *)arg1;
- (unsigned int)nodeNamespaceSize;
- (void)depthFirstSearch:(unsigned int)arg0 nodeVisitBlock:(id /* block */)arg1 edgeVisitBlock:(/* block */ id)arg2;
- (void)removeMarkedNodes:(void *)arg0;
- (void)_renormalize;
- (VMUDirectedGraph *)initWithPlistRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)plistRepresentationWithOptions:(unsigned int)arg0;
- (unsigned int)addNode;
- (unsigned int)addEdgeFromNode:(unsigned int)arg0 toNode:(unsigned int)arg1;
- (void)removeMarkedEdges:(void *)arg0;
- (unsigned int)addGroupNodeForNodes:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)ungroupNode:(unsigned int)arg0;
- (unsigned int)edgeCount;
- (unsigned int)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id /* block */)arg1;
- (void)withNodeMarkingMap:(NSObject *)arg0;
- (void)withEdgeMarkingMap:(NSObject *)arg0;
- (void)breadthFirstSearch:(unsigned int)arg0 nodeVisitBlock:(id /* block */)arg1 edgeVisitBlock:(/* block */ id)arg2;
- (void)stronglyConnectedComponentSearch:(id)arg0;
- (void)_dumpAdjacencyList;
- (void)invertEdges;
- (id)subgraphWithMarkedNodes:(void *)arg0;
- (NSObject *)renormalizedGraph;
- (NSObject *)invertedGraph;
- (unsigned int)edgeNamespaceSize;
- (void)setAdditionalProperties:(NSDictionary *)arg0;
- (char)inverted;

@end
