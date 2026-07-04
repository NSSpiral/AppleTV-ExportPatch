/* Runtime dump - CPMLBestAppShim
 * Image: /System/Library/PrivateFrameworks/CPMLBestShim.framework/CPMLBestShim
 */

@interface CPMLBestAppShim : CPMLBestShim

+ (CPMLBestAppShim *)bestShim;
+ (NSString *)bestShimWithDBPath:(NSString *)arg0 withModelPath:(NSString *)arg1 withPListPath:(NSString *)arg2;

- (NSArray *)rankItems:(NSArray *)arg0 withMetaInfo:(NSDictionary *)arg1 withNumOfRankItem:(unsigned int)arg2;
- (void)feedback:(GEODirectionsFeedback *)arg0 withItemsVisited:(id)arg1;

@end
