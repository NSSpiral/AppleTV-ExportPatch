/* Runtime dump - AXHAMessage
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAMessage : NSObject
{
    NSDictionary * _payload;
    NSError * _error;
}

@property (retain, nonatomic) NSDictionary * payload;
@property (retain, nonatomic) NSError * error;

+ (NSData *)messageWithPayload:(NSDictionary *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSDictionary *)payload;
- (AXHAMessage *)initWithPayload:(NSDictionary *)arg0;
- (void)setPayload:(NSDictionary *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end
