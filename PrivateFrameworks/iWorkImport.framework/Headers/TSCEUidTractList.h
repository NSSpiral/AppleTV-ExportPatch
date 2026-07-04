/* Runtime dump - TSCEUidTractList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEUidTractList : NSObject <NSCopying, NSFastEnumeration>
{
    unsigned char _stickyBits;
    NSMutableArray * _tracts;
}

@property unsigned char stickyBits;

- (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTractList *)arg0;
- (void)setStickyBits:(unsigned char)arg0;
- (unsigned char)stickyBits;
- (char)remapUsingUidMap:(struct TSUUuidMap *)arg0;
- (char)remapUsingColumnUidMap:(struct TSUUuidMap *)arg0 rowUidMap:(struct TSUUuidMap)arg1;
- (void)appendUidTract:(id)arg0;
- (NSObject *)uidTractAtIndex:(unsigned char)arg0;
- (void)addPrimaryTract:(id)arg0;
- (unsigned char)tractCount;
- (id)primaryTract;
- (void)addPrimaryTractForColumnUid:(struct UUIDData<TSP::UUIDData> *)arg0 rowUid:(struct UUIDData<TSP::UUIDData>)arg1;
- (void)dropPrimaryTract;
- (void)pruneUidTractsAtAndAboveIndex:(unsigned char)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSString *)description;
- (TSCEUidTractList *)copyWithZone:(struct _NSZone *)arg0;
- (TSCEUidTractList *)initWithArchive:(struct ASTNodeArrayArchive_ASTUidTractList *)arg0;

@end
