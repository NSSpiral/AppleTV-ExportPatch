/* Runtime dump - SACreateSessionInfoResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData * sessionInfo;
@property (copy, nonatomic) NSNumber * validityDuration;

+ (NSURLResponse *)createSessionInfoResponse;
+ (NSDictionary *)createSessionInfoResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSessionInfo:(NSData *)arg0;
- (NSData *)sessionInfo;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)validityDuration;
- (void)setValidityDuration:(NSNumber *)arg0;

@end
