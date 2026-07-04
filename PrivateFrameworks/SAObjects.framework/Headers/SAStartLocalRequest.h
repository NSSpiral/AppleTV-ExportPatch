/* Runtime dump - SAStartLocalRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartLocalRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * clientBoundCommands;

+ (NSURLRequest *)startLocalRequest;
+ (NSDictionary *)startLocalRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)clientBoundCommands;
- (void)setClientBoundCommands:(NSArray *)arg0;

@end
