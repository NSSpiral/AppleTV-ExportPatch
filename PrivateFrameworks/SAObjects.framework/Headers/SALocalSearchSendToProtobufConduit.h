/* Runtime dump - SALocalSearchSendToProtobufConduit
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (copy, nonatomic) NSArray * attributes;
@property (copy, nonatomic) NSURL * endpoint;
@property (copy, nonatomic) NSData * rawRequest;
@property (nonatomic) int timeoutInSeconds;

+ (SALocalSearchSendToProtobufConduit *)sendToProtobufConduit;
+ (NSDictionary *)sendToProtobufConduitWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)attributes;
- (void)setAttributes:(NSArray *)arg0;
- (NSURL *)endpoint;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setEndpoint:(NSURL *)arg0;
- (NSData *)rawRequest;
- (void)setRawRequest:(NSData *)arg0;
- (int)timeoutInSeconds;
- (void)setTimeoutInSeconds:(int)arg0;

@end
