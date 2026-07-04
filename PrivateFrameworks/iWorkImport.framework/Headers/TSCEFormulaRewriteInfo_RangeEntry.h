/* Runtime dump - TSCEFormulaRewriteInfo_RangeEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject
{
    struct _NSRange _range;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _orderedUuids;
    unsigned short _offset;
}

@property (readonly) struct _NSRange range;
@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > * orderedUuids;
@property unsigned short offset;

- (TSCEFormulaRewriteInfo_RangeEntry *)initWithRange:(struct _NSRange)arg0 orderedUuids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 offset:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)orderedUuids;
- (NSString *)description;
- (void)setOffset:(unsigned short)arg0;
- (unsigned short)offset;
- (struct _NSRange)range;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
