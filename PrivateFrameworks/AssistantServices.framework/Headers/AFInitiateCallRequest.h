/* Runtime dump - AFInitiateCallRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFInitiateCallRequest : AFSiriRequest
{
    AFCall * _call;
}

+ (char)supportsSecureCoding;

- (AFCall *)call;
- (AFInitiateCallRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSURLResponse *)createResponse;
- (AFInitiateCallRequest *)_initWithCall:(AFCall *)arg0;

@end
