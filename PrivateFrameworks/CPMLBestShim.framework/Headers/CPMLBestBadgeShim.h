/* Runtime dump - CPMLBestBadgeShim
 * Image: /System/Library/PrivateFrameworks/CPMLBestShim.framework/CPMLBestShim
 */

@interface CPMLBestBadgeShim : CPMLBestShim
{
    NSMutableDictionary * learnedWeights;
    NSMutableDictionary * hysteresis;
    NSMutableString * weightsPath;
    NSDictionary * configPList;
    CDSession * cdSession;
    CDAttribute * cdBundleIdAttribute;
}

@property (retain) NSMutableDictionary * learnedWeights;
@property (retain) NSMutableDictionary * hysteresis;
@property (retain) NSMutableString * weightsPath;
@property (retain) NSDictionary * configPList;
@property (retain) CDSession * cdSession;
@property (retain) CDAttribute * cdBundleIdAttribute;

+ (CPMLBestBadgeShim *)bestShim;
+ (NSString *)bestShimWithDBPath:(NSString *)arg0 withModelPath:(NSString *)arg1 withPListPath:(NSString *)arg2;

- (void)setHysteresis:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)hysteresis;
- (void).cxx_destruct;
- (NSArray *)rankItems:(NSArray *)arg0 withMetaInfo:(NSDictionary *)arg1 withNumOfRankItem:(unsigned int)arg2;
- (void)feedback:(GEODirectionsFeedback *)arg0 withItemsVisited:(id)arg1;
- (void)setCdSession:(CDSession *)arg0;
- (CDSession *)cdSession;
- (void)setCdBundleIdAttribute:(CDAttribute *)arg0;
- (void)setWeightsPath:(NSMutableString *)arg0;
- (NSMutableString *)weightsPath;
- (void)setLearnedWeights:(NSMutableDictionary *)arg0;
- (void)setConfigPList:(NSDictionary *)arg0;
- (NSDictionary *)configPList;
- (NSMutableDictionary *)learnedWeights;
- (CDAttribute *)cdBundleIdAttribute;

@end
