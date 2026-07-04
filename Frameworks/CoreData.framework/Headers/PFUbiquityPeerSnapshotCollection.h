/* Runtime dump - PFUbiquityPeerSnapshotCollection
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerSnapshotCollection : NSObject
{
    NSMutableDictionary * _peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary * _peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary * _kvToSnapshot;
    NSMutableArray * _peerSnapshots;
    char _needSort;
}

- (id)allPeerIDs;
- (void)addSnapshot:(NSObject *)arg0;
- (char)calculateSnapshotDiffsWithError:(id *)arg0;
- (id)snapshotForKnowledgeVector:(id)arg0;
- (NSObject *)snapshotForPeerID:(NSObject *)arg0 andTransactionNumber:(NSNumber *)arg1;
- (NSNumber *)knowledgeVectorsForTransactionNumber:(NSNumber *)arg0 exportedByPeerWithID:(int)arg1;
- (void)dealloc;
- (PFUbiquityPeerSnapshotCollection *)init;

@end
