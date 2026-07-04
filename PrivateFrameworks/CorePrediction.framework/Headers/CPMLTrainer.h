/* Runtime dump - CPMLTrainer
 * Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLTrainer : NSObject
{
    char shouldFail;
    struct sqlite3 * db;
    struct sqlite3 * modelDB;
    NSDictionary * modelPlist;
    CPMLDB * cpmlDB;
    struct CPMLCDB * cpCDB;
    struct CPMLAlgorithm * cpMLAlgo;
    CPMLSchema * cpmlSchema;
    struct CPMLStatistics * trainerCPStatistics;
    struct CPMLSerialization * trainerCPSerializer;
    struct CPMLTunableData * cpTuneableData;
    int mapFunction;
}

- (void)dealloc;
- (void).cxx_destruct;
- (CPMLTrainer *)init:(id)arg0 withModelDBPath:(struct sqlite3 *)arg1 withPropertyList:(NSArray *)arg2;
- (void)train:(char)arg0;
- (void)buildTrainingMachineLearningAlgorithm:(id)arg0;
- (NSURLRequest *)fileProtectionClassRequest:(NSURLRequest *)arg0;

@end
