/* Runtime dump - SAAIRetrySearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAIRetrySearch : SABaseClientBoundCommand

@property (nonatomic) double minimumDurationForRetry;

+ (SAAIRetrySearch *)retrySearch;
+ (NSDictionary *)retrySearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (double)minimumDurationForRetry;
- (void)setMinimumDurationForRetry:(double)arg0;

@end
