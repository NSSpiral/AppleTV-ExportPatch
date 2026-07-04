/* Runtime dump - AFCall
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFCall : AFSiriModelObject
{
    int _service;
    AFContactAddress * _initiatorAddress;
    AFContactAddress * _recipientAddress;
}

+ (char)supportsSecureCoding;

- (AFCall *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (AFContactAddress *)initiatorAddress;
- (void)setInitiatorAddress:(AFContactAddress *)arg0;
- (AFContactAddress *)recipientAddress;
- (void)setRecipientAddress:(AFContactAddress *)arg0;
- (void)setService:(int)arg0;
- (int)service;

@end
