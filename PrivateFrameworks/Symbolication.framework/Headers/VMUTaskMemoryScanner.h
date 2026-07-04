/* Runtime dump - VMUTaskMemoryScanner
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUTaskMemoryScanner : NSObject
{
    unsigned int _task;
    unsigned int _suspensionToken;
    VMUObjectIdentifier * _objectIdentifier;
    VMUVMRegionIdentifier * _regionIdentifier;
    struct _VMUBlockNode * _blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode * _regions;
    unsigned int _regionsCount;
    unsigned int _regionsSize;
    struct _VMURegionMap * _regionMap;
    struct _VMUZoneNode * _zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode * _threads;
    unsigned int _threadsCount;
    id * _classInfos;
    unsigned int _classInfosCount;
    char _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    int _scanningMask;
    id _referenceLogger;
    id _nodeLogger;
}

@property (nonatomic) char exactScanningEnabled;
@property (nonatomic) unsigned long long maxInteriorOffset;
@property (nonatomic) int scanningMask;
@property (readonly, nonatomic) unsigned int nodeCount;
@property (readonly, nonatomic) unsigned int mallocNodeCount;

- (VMUTaskMemoryScanner *)initWithTask:(unsigned int)arg0;
- (void)dealloc;
- (char)_suspend;
- (void)addRootNodesFromTask;
- (void)addMallocNodes:(id)arg0;
- (void)removeRootReachableNodes;
- (unsigned int)nodeCount;
- (unsigned int)enumerateNodesWithBlock:(id /* block */)arg0;
- (void)detachFromTask;
- (void)setNodeScanningLogger:(id)arg0;
- (void)setReferenceScanningLogger:(id)arg0;
- (void)_withMemoryReaderBlock:(id /* block */)arg0;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg0 block:(id /* block */)arg1;
- (void)_fixupBlockIsas;
- (void)_sortBlocks;
- (void)_withOrderedNodeMapper:(NSObject *)arg0;
- (void)_orderedScanWithScanner:(NSScanner *)arg0 recorder:(/* block */ id)arg1 keepMapped:(id)arg2 actions:(/* block */ id)arg3;
- (void)_withScanningContext:(NSObject *)arg0;
- (struct ?)nodeDetails:(unsigned int)arg0;
- (void)scanNodesForReferences:(id)arg0;
- (void *)contentForNode:(unsigned int)arg0;
- (NSString *)nodeDescription:(unsigned int)arg0 withOffset:(unsigned long long)arg1;
- (NSString *)nodeDescription:(unsigned int)arg0;
- (void)addMallocNodesFromTask;
- (void)orderedNodeTraversal:(int)arg0 withBlock:(id /* block */)arg1;
- (NSObject *)scanNodesIntoGraph;
- (NSObject *)zoneNameForNode:(unsigned int)arg0;
- (NSObject *)labelForMallocNode:(unsigned int)arg0;
- (unsigned int)mallocNodeCount;
- (NSString *)referenceDescription:(struct ?)arg0 withSourceNode:(unsigned int)arg1 destinationNode:(unsigned int)arg2 symbolicator:(struct _CSTypeRef)arg3 alignmentSpacing:(unsigned int)arg4;
- (unsigned long long)maxInteriorOffset;
- (void)setMaxInteriorOffset:(unsigned long long)arg0;
- (char)exactScanningEnabled;
- (void)setExactScanningEnabled:(char)arg0;
- (int)scanningMask;
- (void)setScanningMask:(int)arg0;

@end
