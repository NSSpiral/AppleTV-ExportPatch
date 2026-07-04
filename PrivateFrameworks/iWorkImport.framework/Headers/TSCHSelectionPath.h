/* Runtime dump - TSCHSelectionPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSelectionPath : NSObject <NSCopying>
{
    TSCHSelectionPathType * mPathType;
    NSArray * mArguments;
    TSCHSelectionPath * mSubSelection;
}

@property (readonly, nonatomic) TSCHSelectionPathType * pathType;
@property (readonly, nonatomic) TSCHSelectionPath * subSelection;

+ (NSObject *)selectionPathWithPathType:(TSCHSelectionPathType *)arg0 arguments:(NSDictionary *)arg1;
+ (NSObject *)selectionPathWithType:(NSObject *)arg0 name:(NSString *)arg1 arguments:(NSDictionary *)arg2;
+ (NSObject *)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned int)arg0;
+ (NSObject *)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned int)arg0;
+ (NSObject *)seriesSelectionPathWithSeriesIndex:(unsigned int)arg0;
+ (NSObject *)selectionPathWithPathType:(TSCHSelectionPathType *)arg0 arguments:(NSDictionary *)arg1 subSelection:(TSCHSelectionPath *)arg2;

- (void)saveToArchive:(struct ChartSelectionPathArchive *)arg0;
- (NSObject *)argumentAtIndex:(unsigned int)arg0;
- (unsigned int)argumentsCount;
- (NSString *)debuggingName;
- (TSCHSelectionPath *)initWithType:(NSString *)arg0 name:(NSString *)arg1 arguments:(NSDictionary *)arg2;
- (TSCHSelectionPath *)initWithPathType:(TSCHSelectionPathType *)arg0 arguments:(NSDictionary *)arg1 subSelection:(TSCHSelectionPath *)arg2;
- (TSCHSelectionPath *)subSelection;
- (NSString *)rangeOfReferenceLinePathsToPath:(NSString *)arg0 forModel:(NSObject *)arg1;
- (NSString *)rangeOfPathsToPath:(NSString *)arg0;
- (void)dealloc;
- (TSCHSelectionPath *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSString *)type;
- (TSCHSelectionPath *)copyWithZone:(struct _NSZone *)arg0;
- (TSCHSelectionPathType *)pathType;
- (TSCHSelectionPath *)initWithArchive:(struct ChartSelectionPathArchive *)arg0;

@end
