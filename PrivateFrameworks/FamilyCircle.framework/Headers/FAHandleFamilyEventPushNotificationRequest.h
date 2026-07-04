/* Runtime dump - FAHandleFamilyEventPushNotificationRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest
{
    NSDictionary * _payload;
}

@property (readonly) NSDictionary * payload;

- (NSDictionary *)payload;
- (void).cxx_destruct;
- (FAHandleFamilyEventPushNotificationRequest *)initWithPayload:(NSDictionary *)arg0;
- (void)startRequestWithCompletionHandler:(id /* block */)arg0;

@end
