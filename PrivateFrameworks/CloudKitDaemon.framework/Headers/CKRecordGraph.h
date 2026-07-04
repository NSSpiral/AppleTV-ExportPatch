/* Runtime dump - CKRecordGraph
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKRecordGraph : NSObject
{
    NSMutableSet * _nodes;
    NSArray * _sortedRecords;
}

@property (copy, nonatomic) NSMutableSet * nodes;
@property (retain, nonatomic) NSArray * sortedRecords;

- (CKRecordGraph *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setSortedRecords:(NSArray *)arg0;
- (NSArray *)sortedRecords;
- (char)addRecords:(NSArray *)arg0 error:(id *)arg1;
- (NSError *)recordsByTopologicalSortWithError:(id *)arg0;
- (void)setNodes:(NSMutableSet *)arg0;
- (NSMutableSet *)nodes;

@end
