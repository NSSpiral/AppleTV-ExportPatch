/* Runtime dump - CPMLModel
 * Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLModel : NSObject
{
    NSString * _savedPlistPath;
    NSString * _modelPath;
    CPMLModelEvaluate * cpModelEvaluate;
}

@property (retain, nonatomic) CPMLModelEvaluate * cpModelEvaluate;

- (char)reset;
- (void).cxx_destruct;
- (void)setCpModelEvaluate:(CPMLModelEvaluate *)arg0;
- (CPMLModel *)initWithModelPath:(NSString *)arg0 withPropertyListPath:(NSString *)arg1;
- (NSArray *)getPropertyList;
- (NSString *)evalString:(NSString *)arg0;
- (id)evalNSObjectV:(id)arg0;
- (NSArray *)evalArray:(NSArray *)arg0;
- (id)evalDict:(id)arg0;
- (void)boundResult:(NSObject *)arg0;
- (CPMLModel *)initWithModelPath:(NSString *)arg0 withConfiguration:(NSDictionary *)arg1;
- (char)updateModelWithDB:(double)arg0;
- (char)updateModelWithCPDB:(id)arg0;
- (CPMLModelEvaluate *)cpModelEvaluate;

@end
