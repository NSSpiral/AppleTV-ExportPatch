/* Runtime dump - AFUpdateMessageRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUpdateMessageRequest : AFSiriRequest
{
    AFMessage * _message;
}

+ (char)supportsSecureCoding;

- (AFUpdateMessageRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AFMessage *)message;
- (void).cxx_destruct;
- (NSString *)_initWithMessage:(AFMessage *)arg0;
- (NSString *)createResponseWithMessageIdentifier:(AFMessage *)arg0;

@end
