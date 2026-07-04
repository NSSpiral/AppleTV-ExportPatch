/* Runtime dump - CPMLModelEvaluate
 * Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLModelEvaluate : NSObject
{
    char enableCacheString;
    char keepInMemory;
    char shouldFail;
    struct sqlite3 * db;
    int countRows;
    NSMutableArray * modelSchema;
    NSMutableArray * vectorPositions;
    NSNumber * maxRemoveTrainingRow;
    NSString * serializeFunction;
    NSString * machineLearningAlgo;
    struct CPMLAlgorithm * cpMLAlgo;
    struct CPMLSerialization * trainerCPDeSerializer;
    struct CPMLRemapper * cpRemapper;
    CPMLSchema * cpmlSchema;
    struct CPMLStatistics * trainerCPStatistics;
    struct CPMLTunableData * cpTuneableData;
    int mapFunction;
    struct vector<int, std::__1::allocator<int> > boundedRemappedValues;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (CPMLModelEvaluate *)initWithModel:(NSObject *)arg0 withPropertyList:(NSArray *)arg1;
- (NSURLRequest *)fileProtectionClassRequest:(NSURLRequest *)arg0;
- (NSString *)evalString:(NSString *)arg0;
- (id)evalNSObjectV:(id)arg0;
- (NSArray *)evalArray:(NSArray *)arg0;
- (id)evalDict:(id)arg0;
- (void)boundResult:(NSObject *)arg0;
- (char)updateModel:(NSObject *)arg0;
- (void)buildEvaluateMachineLearningAlgorithm;
- (void)doRemapToFeatureVector:(struct CPMLFeatureVector *)arg0 withPositionID:(struct vector<double, std::__1::allocator<double> > *)arg1 withMaxCol:(id)arg2 withValue:(struct vector<VectorClass, std::__1::allocator<VectorClass> >)arg3;
- (id)doEvaluate:(struct CPMLFeatureVector *)arg0 withBoundedList:(struct vector<double, std::__1::allocator<double> > *)arg1;
- (int)getAttributeType:(NSObject *)arg0;
- (void)constructVector:(struct CPMLFeatureVector *)arg0 withColumnPosition:(struct vector<double, std::__1::allocator<double> > *)arg1 maxColNumber:(NSNumber *)arg2 withValue:(struct vector<VectorClass, std::__1::allocator<VectorClass> >)arg3;
- (NSArray *)evalCTypesV:(char *)arg0;

@end
