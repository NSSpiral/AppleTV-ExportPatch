/* Runtime dump - AFCreateMessageRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFCreateMessageRequest : AFSiriRequest
{
    AFMessage * _message;
}

+ (char)supportsSecureCoding;

- (AFCreateMessageRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AFMessage *)message;
- (void).cxx_destruct;
- (NSString *)_initWithMessage:(AFMessage *)arg0;
- (NSString *)createResponseWithMessageIdentifier:(AFMessage *)arg0;

@end
