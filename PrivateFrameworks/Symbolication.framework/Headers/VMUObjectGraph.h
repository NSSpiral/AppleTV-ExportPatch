/* Runtime dump - VMUObjectGraph
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectGraph : VMUDirectedGraph
{
    struct _VMUObjectGraphEdge * _referenceTable;
    unsigned int _referenceTableCapacity;
    struct _VMUObjectGraphEdgeLarge * _referenceTableLarge;
    unsigned int _referenceTableLargeCount;
    unsigned int _referenceTableLargeCapacity;
    struct _VMUBlockNode * _internalizedNodes;
    unsigned int _internalizedCount;
    id * _classInfos;
    unsigned int _classInfosCount;
    id _nodeProvider;
    VMUObjectGraph * _referenceGraph;
    unsigned int _referenceGraphNodeNamespaceSize;
    unsigned int _referenceGraphEdgeNamespaceSize;
    int _referencingCount;
}

- (void)dealloc;
- (VMUObjectGraph *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)arg0;
- (struct ?)nodeDetails:(unsigned int)arg0;
- (VMUObjectGraph *)initWithNodes:(unsigned int)arg0 nodeProvider:(NSObject *)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg0 sourceOffset:(unsigned long long)arg1 withScanType:(int)arg2 toNode:(unsigned int)arg3 destinationOffset:(unsigned long long)arg4;
- (VMUObjectGraph *)initWithArchived:(id)arg0 options:(unsigned int)arg1;
- (void)archiveDictionaryRepresentation:(NSDictionary *)arg0 options:(unsigned int)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg0 toNode:(unsigned int)arg1;
- (void)_modifyDerivativeGraphCount:(int)arg0;
- (void)internalizeNodes;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)arg0;
- (void)_renameWithNodeMap:(unsigned int *)arg0 edgeMap:(unsigned int *)arg1;
- (unsigned int)enumerateMarkedObjects:(void *)arg0 withBlock:(id /* block */)arg1;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)arg0 withBlock:(id /* block */)arg1;
- (struct ?)referenceInfoWithName:(unsigned int)arg0;

@end
