/* Runtime dump - EDWorkbook
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDWorkbook : OCDDocument
{
    EDResources * mResources;
    NSMutableArray * mOtherResources;
    EDProcessors * mProcessors;
    ECMappingContext * mMappingContext;
    EDWarnings * mWarnings;
    NSMutableArray * mSheets;
    EDReference * mVisibleRange;
    unsigned int mActiveSheetIndex;
    NSDate * mDateBaseDate;
    int mDateBase;
    NSString * mFileName;
    NSString * mTemporaryDirectory;
    OADTheme * mTheme;
    NSMutableArray * mBulletBlips;
    ESDContainer * mEscherDrawingGroup;
}

- (NSString *)fileName;
- (void)dealloc;
- (EDWorkbook *)init;
- (TPTheme *)theme;
- (NSObject *)sheetAtIndex:(unsigned int)arg0;
- (void)removeWorksheetAtIndex:(unsigned int)arg0;
- (unsigned int)sheetCount;
- (NSObject *)sheetAtIndex:(unsigned int)arg0 loadIfNeeded:(BOOL)arg1;
- (NSString *)workbookName;
- (id)processors;
- (EDWorkbook *)initWithStringOptimization:(BOOL)arg0;
- (void)addSheet:(NSObject *)arg0;
- (NSString *)temporaryDirectory;
- (void)setTemporaryDirectory:(TSUManagedTemporaryDirectory *)arg0;
- (NSMutableSet *)warnings;
- (void)applyProcessors;
- (EDWorkbook *)initWithFileName:(NSString *)arg0 andStringOptimization:(BOOL)arg1;
- (void)setDateBase:(int)arg0;
- (void)setVisibleRange:(NSObject *)arg0;
- (void)setActiveSheetIndex:(unsigned int)arg0;
- (NSMutableArray *)mappingContext;
- (int)dateBase;
- (unsigned int)indexOfSheet:(NSObject *)arg0;
- (void)reduceMemoryIfPossible;
- (unsigned int)legacyDateBase;
- (NSObject *)visibleRange;
- (void)removeSheetAtIndex:(unsigned int)arg0;
- (unsigned int)indexOfSheetWithName:(NSString *)arg0;
- (NSObject *)activeSheet;
- (void)setActiveSheet:(NSObject *)arg0;
- (void)setMappingContext:(NSMutableArray *)arg0;
- (void)setTheme:(TSSTheme *)arg0;
- (id)bulletBlips;
- (NSObject *)escherDrawingGroup;
- (void)setEscherDrawingGroup:(NSObject *)arg0;
- (unsigned int)activeSheetIndex;
- (NSDate *)dateBaseDate;
- (void)addOtherResources:(NSArray *)arg0;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;

@end
