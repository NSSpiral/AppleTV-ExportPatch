/* Runtime dump - SAAIRequestSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAIRequestSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * acousticIdSearchSessionId;

+ (SAAIRequestSearch *)requestSearch;
+ (NSDictionary *)requestSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)acousticIdSearchSessionId;
- (void)setAcousticIdSearchSessionId:(NSString *)arg0;

@end
