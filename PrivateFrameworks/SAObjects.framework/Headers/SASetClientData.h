/* Runtime dump - SASetClientData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetClientData : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber * holdToTalkThresholdInMilliseconds;

+ (NSData *)setClientData;
+ (NSDictionary *)setClientDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)holdToTalkThresholdInMilliseconds;
- (void)setHoldToTalkThresholdInMilliseconds:(NSNumber *)arg0;

@end
