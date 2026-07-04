/* Runtime dump - SAAISearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAISearchCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * results;

+ (SAAISearchCompleted *)searchCompleted;
+ (NSDictionary *)searchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
