/* Runtime dump - CPMLEvalutionResult
 * Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLEvalutionResult : NSObject
{
    NSObject * object;
    unsigned int count;
}

- (void).cxx_destruct;
- (CPMLEvalutionResult *)init:(id)arg0 withConfigurationList:(NSArray *)arg1;
- (NSString *)getString;
- (double)getDouble;
- (int)getInt;
- (NSArray *)getList;
- (id)getListDict;

@end
