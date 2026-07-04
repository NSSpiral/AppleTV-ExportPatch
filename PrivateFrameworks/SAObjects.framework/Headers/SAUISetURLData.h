/* Runtime dump - SAUISetURLData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISetURLData : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * urlData;

+ (NSData *)setURLData;
+ (NSDictionary *)setURLDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)urlData;
- (void)setUrlData:(NSArray *)arg0;

@end
