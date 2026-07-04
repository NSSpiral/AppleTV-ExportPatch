/* Runtime dump - TSTLayoutHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutHint : NSObject <TSDHint>
{
    char mIsValid;
    char mHorizontal;
    struct TSUColumnRowRect mCellRange;
    struct ? mCacheHintID;
    NSNumber * mPartitioningPass;
    unsigned int mPartitionPosition;
    struct CGSize mMaximumSize;
    struct CGSize mEffectiveSize;
    TSTLayout * mLayout;
}

@property (nonatomic) char isValid;
@property (nonatomic) struct TSUColumnRowRect cellRange;
@property (nonatomic) struct ? cacheHintID;
@property (retain, nonatomic) NSNumber * partitioningPass;
@property (nonatomic) unsigned int partitionPosition;
@property (nonatomic) struct CGSize maximumSize;
@property (nonatomic) struct CGSize effectiveSize;
@property (nonatomic) TSTLayout * layout;
@property (nonatomic) char horizontal;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)archivedHintClass;

- (void)saveToArchive:(struct LayoutHintArchive *)arg0;
- (char)overlapsWithSelection:(id)arg0;
- (void)offsetByDelta:(int)arg0;
- (<TSDHint> *)firstChildHint;
- (<TSDHint> *)lastChildHint;
- (id)copyForArchiving;
- (char)isFirstHint;
- (struct TSUColumnRowRect)cellRange;
- (struct ?)cacheHintID;
- (unsigned int)partitionPosition;
- (void)setCellRange:(struct TSUColumnRowRect)arg0;
- (void)setCacheHintID:(struct ?)arg0;
- (void)setPartitionPosition:(unsigned int)arg0;
- (TSTLayoutHint *)initWithRange:(struct TSUColumnRowRect)arg0 hintId:(struct ?)arg1 partitionPosition:(unsigned int)arg2 maximumSize:(struct ?)arg3 effectiveSize:(unsigned int)arg4 layout:(struct CGSize)arg5 validity:(struct CGSize)arg6 horizontal:(char)arg7;
- (void)setPartitioningPass:(NSNumber *)arg0;
- (void)setEffectiveSize:(struct CGSize)arg0;
- (NSNumber *)partitioningPass;
- (struct CGSize)maximumSize;
- (void)release;
- (void)dealloc;
- (TSTLayoutHint *)init;
- (NSString *)description;
- (void)invalidate;
- (char)isValid;
- (TSTLayout *)layout;
- (void)setLayout:(TSTLayout *)arg0;
- (void).cxx_construct;
- (void)setHorizontal:(char)arg0;
- (char)horizontal;
- (void)setIsValid:(char)arg0;
- (TSTLayoutHint *)initWithArchive:(struct LayoutHintArchive *)arg0;
- (void)setMaximumSize:(struct CGSize)arg0;
- (struct CGSize)effectiveSize;

@end
