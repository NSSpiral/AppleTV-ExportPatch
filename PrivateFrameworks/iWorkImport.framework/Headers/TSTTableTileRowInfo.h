/* Runtime dump - TSTTableTileRowInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableTileRowInfo : TSPContainedObject
{
    struct __CFData * mStorageBuffer;
    id mStorageOffsets;
    unsigned short mBufferSize;
    unsigned short mTileRowIndex;
    unsigned short mCellCount;
    unsigned char mMaxTileColumnIndex;
    char mMaxTileColumnIndexValid;
    unsigned char mStorageVersion;
}

@property (nonatomic) unsigned short tileRowIndex;
@property (readonly, nonatomic) unsigned short cellCount;

- (void)saveToArchive:(struct TileRowInfo *)arg0 archiver:(NSObject *)arg1;
- (TSTTableTileRowInfo *)initWithArchive:(struct TileRowInfo *)arg0 owner:(struct TileRowInfo)arg1;
- (void)i_upgradeWithDataStore:(BKSApplicationDataStore *)arg0;
- (TSTTableTileRowInfo *)initWithOwner:(NSObject *)arg0 tileRowIndex:(unsigned short)arg1;
- (id)p_debugDumpCompact;
- (void)enumerateStoragesInColumnRange:(struct _NSRange)arg0 withBlock:(id /* block */)arg1;
- (unsigned short)tileRowIndex;
- (void)setTileRowIndex:(unsigned short)arg0;
- (void)debugDump;
- (void)dealloc;
- (NSString *)description;
- (void)validate;
- (unsigned short)cellCount;

@end
