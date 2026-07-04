/* Runtime dump - IDSMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMessage : IDSBaseMessage <NSCopying>
{
    NSNumber * _wantsDeliveryStatus;
    NSDictionary * _deliveryStatusContext;
    NSNumber * _version;
}

@property (copy) NSNumber * wantsDeliveryStatus;
@property (copy) NSDictionary * deliveryStatusContext;
@property (copy) NSNumber * version;

- (void)dealloc;
- (IDSMessage *)init;
- (IDSMessage *)copyWithZone:(struct _NSZone *)arg0;
- (void)setVersion:(NSNumber *)arg0;
- (NSNumber *)version;
- (void)setWantsDeliveryStatus:(NSNumber *)arg0;
- (void)setDeliveryStatusContext:(NSDictionary *)arg0;
- (NSNumber *)wantsDeliveryStatus;
- (NSDictionary *)deliveryStatusContext;
- (char)wantsAPSRetries;
- (char)wantsHTTPHeaders;
- (NSString *)userAgentHeaderString;
- (char)wantsUserAgentInHeaders;
- (MFMessageBody *)messageBody;

@end
