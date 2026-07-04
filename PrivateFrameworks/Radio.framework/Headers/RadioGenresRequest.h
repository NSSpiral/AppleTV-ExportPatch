/* Runtime dump - RadioGenresRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGenresRequest : RadioGetGenreTreeNodesRequest

+ (NSObject *)cacheKeyForGenreWithNodeID:(unsigned long long)arg0;
+ (NSString *)fallbackRequestPath;
+ (NSString *)requestBagKey;
+ (NSString *)responseContentKey;

@end
