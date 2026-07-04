/* Runtime dump - AXHARemoteMessage
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHARemoteMessage : AXHAMessage
{
    NSString * _UUID;
    id _sendCompletion;
}

@property (retain, nonatomic) NSString * UUID;
@property (copy, nonatomic) id sendCompletion;

+ (NSData *)messageWithPayload:(NSData *)arg0 andSendCompletion:(id /* block */)arg1;

- (void)dealloc;
- (NSString *)UUID;
- (AXHARemoteMessage *)initWithPayload:(NSDictionary *)arg0;
- (void)setSendCompletion:(id /* block */)arg0;
- (NSData *)transportPayload;
- (id /* block */)sendCompletion;
- (void)setUUID:(NSSet *)arg0;

@end
