/* Runtime dump - CPMLDB
 * Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLDB : NSObject
{
    unsigned long long * repFields;
    unsigned int maxFieldCount;
    unsigned long commitCountMax;
    unsigned long currentCommitCount;
    unsigned long rowCount;
    double * cardinality;
    double * min;
    double * max;
    double * mean;
    double * sumOfX;
    double * sumOfXX;
    double * sigma;
    CPMLSchema * cpSchema;
    NSMutableArray * indexer;
    NSMutableDictionary * vectorListCardinality;
    NSMutableString * dbTableName;
    double currentTimeInterval;
    double minTimeToLogIndex;
    int _openCPMLDBOptions;
    NSDictionary * _cInfo;
    NSString * _trainingModelFileAndPath;
    NSString * _trainingFile;
    struct sqlite3 * db;
    NSString * _dbFileName;
}

@property (readonly, nonatomic) struct sqlite3 * db;
@property (readonly) NSString * dbFileName;
@property (readonly) CPMLSchema * cpSchema;

+ (NSDictionary *)getConfigurationFromPlist:(id)arg0;

- (void)restart;
- (void)dealloc;
- (char)reset;
- (void).cxx_destruct;
- (struct sqlite3 *)db;
- (NSString *)dbFileName;
- (CPMLDB *)initWithDBName:(NSString *)arg0 withPlistPath:(NSString *)arg1 withWriteOptions:(int)arg2;
- (CPMLDB *)initWithDBName:(NSString *)arg0 withConfiguration:(NSDictionary *)arg1 withWriteOptions:(int)arg2;
- (void)flushDB;
- (NSURLRequest *)fileProtectionClassRequest:(NSURLRequest *)arg0;
- (void)removeTrainingRowData:(double)arg0;
- (unsigned long long)getColumnCount;
- (int)getYColumnPosition;
- (unsigned long long)getCombinedRemapTableCardinality:(unsigned long)arg0;
- (unsigned long long)getRowCount;
- (char)isColumnContinousData:(unsigned long)arg0;
- (unsigned long long)getCardinality:(unsigned long)arg0;
- (int)getSchemaType:(unsigned int)arg0;
- (double)getMeanFor:(unsigned long)arg0;
- (double)getStdDevFor:(unsigned long)arg0;
- (double)getMinFor:(unsigned long)arg0;
- (double)getMaxFor:(unsigned long)arg0;
- (id)getRemapTable;
- (NSString *)getColumnName:(unsigned int)arg0;
- (int)getVectorContent:(unsigned int)arg0;
- (char)logNSDictionary:(NSDictionary *)arg0;
- (CPMLDB *)initWithDBName:(NSString *)arg0 dataFromFile:(NSString *)arg1 withPlistPath:(NSString *)arg2 withWriteOptions:(int)arg3;
- (void)doInitialize:(id)arg0 withConfiguration:(NSDictionary *)arg1 withWriteOptions:(int)arg2;
- (void)createTable:(id)arg0 withSchema:(IKDOMSchema *)arg1 withExistingTable:(char)arg2;
- (void)insertIntoTable:(id)arg0 withTuple:(NSArray *)arg1;
- (void)initMaxSizeStatistics:(unsigned int)arg0;
- (char)loadStatisticTable;
- (void)initStatisticsTable;
- (void)indexTable:(id)arg0 withColumn:(TSWPColumn *)arg1;
- (void)loadTables;
- (void)doInitCommon:(id)arg0 withDict:(id)arg1 withFileExists:(char *)arg2 withWriteOptions:(int)arg3;
- (void)doInitializeWithDataFile:(NSString *)arg0 dataFromFile:(NSString *)arg1 withConfiguration:(NSDictionary *)arg2 withWriteOptions:(int)arg3;
- (id)prepInsertStatementForMainTable;
- (double)updateStatisticsString:(NSString *)arg0 colPosition:(unsigned int)arg1;
- (void)saveStatistics;
- (char)logNSArray:(NSArray *)arg0;
- (void)updateStatisticsReal:(double)arg0 colPosition:(unsigned int)arg1;
- (void)execSQLCommand:(NSObject *)arg0;
- (double)columnQueryFor:(unsigned long)arg0 withQuery:(NSObject *)arg1;
- (void)dropCommands:(id)arg0;
- (void)updateStatistics;
- (id)prepQueryStatementForTable:(id)arg0;
- (void)removeTrainingRow:(id)arg0;
- (CPMLDB *)initWithDBName:(NSString *)arg0 dataFromFile:(NSString *)arg1 withConfiguration:(NSDictionary *)arg2 withWriteOptions:(int)arg3;
- (char)logCTypesV:(void *)arg0;
- (char)logNSObjectV:(id)arg0;
- (char)logBatchNSArray:(NSArray *)arg0;
- (char)logBatchNSDictionary:(NSDictionary *)arg0;
- (void)addColumnToTable:(EBColumnTable *)arg0 withNewColumn:(char)arg1;
- (void)queryDatabase:(id)arg0 whereMatch:(id)arg1;
- (void)updateTable:(id)arg0 withAttribute:(NSObject *)arg1 whereMatch:(id)arg2;
- (void)deleteRow:(id)arg0 whereMatch:(id)arg1;
- (void)deleteAllRows:(NSArray *)arg0;
- (NSDictionary *)getRepresentation:(NSDictionary *)arg0 withColPos:(int)arg1;
- (void)updateCardinality:(id)arg0 withColPos:(int)arg1;
- (void)printFormat:(NSString *)arg0;
- (NSArray *)addValues:(int)arg0;
- (void)performanceTestDB;
- (id)extractRow:(id)arg0;
- (CPMLSchema *)cpSchema;

@end
