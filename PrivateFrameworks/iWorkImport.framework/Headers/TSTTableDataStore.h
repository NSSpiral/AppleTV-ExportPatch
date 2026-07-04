/* Runtime dump - TSTTableDataStore
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataStore : TSPContainedObject
{
    struct TSTTableRBTreeNode_s * mColumnTileIndex;
    struct TSTTableRBTreeNode_s * mRowTileIndex;
    TSTTileIDKeyDict * mTileStorage;
    TSTTableHeaderStorage * mRowHeaderStorage;
    TSPLazyReference * mColumnHeaderStorageReference;
    TSPLazyReference * mConditionalStyleSetTableReference;
    TSPLazyReference * mStringTableReference;
    TSPLazyReference * mStyleTableReference;
    TSPLazyReference * mFormulaTableReference;
    TSPLazyReference * mFormulaErrorTableReference;
    TSPLazyReference * mRichTextPayloadTableReference;
    TSPLazyReference * mFormatTableReference;
    TSPLazyReference * mMultipleChoiceListFormatTableReference;
    TSPLazyReference * mCommentStorageTableReference;
    TSPLazyReference * mImportWarningSetTableReference;
    TSKCustomFormatList * mPasteboardCustomFormatList;
    NSMutableDictionary * mPasteboardCustomFormatMap;
    unsigned short mNextRowStripID;
    unsigned short mNextColumnStripID;
    TSTMergeRegionMap * mMergedCellRanges;
    unsigned long mCellCount;
    char mCellCountValid;
    unsigned char mStorageVersion;
}

@property (readonly, nonatomic) char hasPasteboardCustomFormats;

- (void)saveToArchive:(struct DataStore *)arg0 archiver:(NSObject *)arg1;
- (char)hasPasteboardCustomFormats;
- (void)copyPasteboardCustomFormatsFromDataStore:(NSObject *)arg0;
- (char)needToUpgradeCellStorage;
- (void)upgradeDataStoreCellStorage;
- (TSTTableDataStore *)initWithArchive:(struct DataStore *)arg0 unarchiver:(struct DataStore)arg1 owner:(NSObject *)arg2;
- (void)setStorageParentToInfo:(NSDictionary *)arg0;
- (char)hasFormulaByID:(unsigned int)arg0 atCellID:(struct ?)arg1;
- (NSObject *)indicesForValueCellsInRange:(struct TSUColumnRowRect)arg0;
- (NSString *)addPasteboardCustomFormat:(NSString *)arg0 toDocument:(NSObject *)arg1 updatingPasteboardFormat:(char)arg2;
- (void)clearPasteboardCustomFormatMap;
- (void)enumerateTilesAtNode:(struct TSTTableRBTreeNode_s *)arg0 usingBlock:(struct TSTTableRBTreeNode_s *)arg1;
- (void)enumerateCellStoragesInRange:(struct TSUColumnRowRect)arg0 withBlock:(struct ?)arg1;
- (NSArray *)p_pasteboardCustomFormatList;
- (NSObject *)p_pasteboardCustomFormatMap;
- (void)p_updateTileStorageToCurrentVersion;
- (void)enumerateRowHeaderInfosWithBlock:(id /* block */)arg0;
- (void)enumerateColumnHeaderInfosWithBlock:(id /* block */)arg0;
- (void)reorganizeValueForStorage:(struct TSTCellStorage *)arg0 outValue:(id)arg1;
- (void)gatherReorganizeValuesForColumn:(unsigned char)arg0 rowRange:(struct _NSRange)arg1 outValues:(struct TSTCellReorganizeValue *)arg2;
- (void)debugDump;
- (TSTTableDataStore *)initWithOwner:(TSPObject *)arg0;
- (void)dealloc;
- (void)validate;

@end
