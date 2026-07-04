/* Runtime dump - AFSiriResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriResponse : NSObject <NSSecureCoding>
{
    NSUUID * _requestIdentifier;
}

+ (char)supportsSecureCoding;

- (AFSiriResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0;
- (char)_isForRequest:(NSURLRequest *)arg0;
- (NSString *)_initWithRequestIdentifier:(NSUUID *)arg0;

@end
