/* Runtime dump - TSCHSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSelection : TSKSelection
{
    TSCHChartDrawableInfo * mInfo;
    NSArray * mPaths;
}

@property (readonly, retain, nonatomic) TSCHChartDrawableInfo * chartInfo;
@property (readonly, copy, nonatomic) NSArray * paths;
@property (readonly, nonatomic) unsigned int pathCount;
@property (readonly, copy, nonatomic) TSCHSelectionPath * firstPath;
@property (readonly, copy, nonatomic) TSCHSelectionPathType * pathType;
@property (readonly, copy, nonatomic) NSSet * pathTypes;
@property (readonly, nonatomic) char returnChartFrameForAutoscroll;

+ (NSDictionary *)selectionWithChartInfo:(TSCHChartDrawableInfo *)arg0 paths:(NSArray *)arg1;
+ (NSDictionary *)emptySelectionWithChartInfo:(TSCHChartDrawableInfo *)arg0;
+ (Class)archivedSelectionClass;

- (void)saveToArchive:(struct ChartSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHChartDrawableInfo *)chartInfo;
- (TSCHSelection *)initWithChartInfo:(TSCHChartDrawableInfo *)arg0 paths:(NSArray *)arg1;
- (TSCHSelection *)initWithChartInfo:(TSCHChartDrawableInfo *)arg0 path:(NSString *)arg1;
- (TSCHSelection *)initFromArchive:(struct ChartSelectionArchive *)arg0 unarchiver:(struct ChartSelectionArchive)arg1;
- (NSArray *)selectionByAddingPathsFromArray:(NSArray *)arg0;
- (NSArray *)selectionByRemovingPathsFromArray:(NSArray *)arg0;
- (char)returnChartFrameForAutoscroll;
- (NSSet *)pathTypes;
- (void)dealloc;
- (TSCHSelection *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCHSelection *)copyWithZone:(struct _NSZone *)arg0;
- (TSCHSelectionPath *)firstPath;
- (TSCHSelectionPathType *)pathType;
- (TSCHSelection *)initWithPaths:(NSArray *)arg0;
- (NSArray *)paths;
- (unsigned int)pathCount;

@end
