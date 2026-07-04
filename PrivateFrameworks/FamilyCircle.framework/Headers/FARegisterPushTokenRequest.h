/* Runtime dump - FARegisterPushTokenRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest
{
    NSData * _pushToken;
}

@property (readonly, copy) NSData * pushToken;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)arg0;
- (NSData *)pushToken;
- (FARegisterPushTokenRequest *)initWithPushToken:(NSData *)arg0;

@end
