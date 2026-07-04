/* Runtime dump - SALocalSearchGetNavigationStatus
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (copy, nonatomic) NSNumber * getRoute;

+ (SALocalSearchGetNavigationStatus *)getNavigationStatus;
+ (NSDictionary *)getNavigationStatusWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)getRoute;
- (void)setGetRoute:(NSNumber *)arg0;

@end
