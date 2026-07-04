/* Runtime dump - TSCEUidTract
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEUidTract : NSObject <NSCopying>
{
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _columnUids;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _rowUids;
}

@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > * columnUids;
@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > * rowUids;

+ (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTract *)arg0 columnUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 rowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg2;
+ (char)p_remapUidVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0 usingUidMap:(struct UUIDData<TSP::UUIDData> *)arg1 clearIfMissing:(struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;

- (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTract *)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)columnUids;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)rowUids;
- (char)remapUsingUidMap:(struct TSUUuidMap *)arg0;
- (char)remapUsingColumnUidMap:(struct TSUUuidMap *)arg0 rowUidMap:(struct TSUUuidMap)arg1;
- (TSCEUidTract *)initWithColumnUid:(struct UUIDData<TSP::UUIDData> *)arg0 rowUid:(struct UUIDData<TSP::UUIDData>)arg1;
- (TSCEUidTract *)initWithColumnUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0 rowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg1;
- (NSString *)description;
- (TSCEUidTract *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSCEUidTract *)initWithArchive:(struct ASTNodeArrayArchive_ASTUidTract *)arg0;

@end
