/* Runtime dump - FADispatchFamilyPushRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FADispatchFamilyPushRequest : FAFamilyCircleRequest
{
    NSDictionary * _payload;
}

@property (readonly, copy) NSDictionary * payload;

- (NSDictionary *)payload;
- (void).cxx_destruct;
- (FADispatchFamilyPushRequest *)initWithPayload:(NSDictionary *)arg0;
- (void)startRequestWithCompletionHandler:(id /* block */)arg0;

@end
