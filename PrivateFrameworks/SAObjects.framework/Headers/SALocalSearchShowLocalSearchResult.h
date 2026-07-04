/* Runtime dump - SALocalSearchShowLocalSearchResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (copy, nonatomic) NSData * rawData;

+ (NSObject *)showLocalSearchResult;
+ (NSDictionary *)showLocalSearchResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSData *)rawData;
- (void)setRawData:(NSData *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
