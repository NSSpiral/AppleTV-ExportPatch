/* Runtime dump - TSTTableTile
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableTile : TSPObject
{
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray * mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}

@property (readonly, nonatomic) unsigned char maxColumn;
@property (readonly, nonatomic) unsigned short maxRow;
@property (readonly, nonatomic) unsigned short numCells;
@property (readonly, nonatomic) unsigned short numRows;
@property (readonly, nonatomic) NSArray * rowInfos;

- (NSString *)packageLocator;
- (TSTTableTile *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSTTableTile *)initWithRows:(NSArray *)arg0 context:(NSObject *)arg1;
- (void)pruneEmptyRows;
- (unsigned long)flushableSize;
- (unsigned char)maxColumn;
- (unsigned short)maxRow;
- (unsigned short)numCells;
- (unsigned short)numRows;
- (NSArray *)rowInfos;
- (void)debugListRows;
- (void)i_upgradeTileRowInfosWithDataStore:(BKSApplicationDataStore *)arg0;
- (void)debugDump;
- (void)dealloc;
- (NSString *)description;
- (void)validate;
- (TSTTableTile *)initWithContext:(TSPObjectContext *)arg0;

@end
