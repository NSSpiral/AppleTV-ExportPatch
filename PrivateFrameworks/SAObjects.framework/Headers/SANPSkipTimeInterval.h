/* Runtime dump - SANPSkipTimeInterval
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSkipTimeInterval : SADomainCommand

@property (copy, nonatomic) NSNumber * adjustmentInMilliseconds;

+ (SANPSkipTimeInterval *)skipTimeInterval;
+ (NSDictionary *)skipTimeIntervalWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)adjustmentInMilliseconds;
- (void)setAdjustmentInMilliseconds:(NSNumber *)arg0;

@end
