/* Runtime dump - AFObjectCreatedSiriResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFObjectCreatedSiriResponse : AFSiriResponse
{
    NSURL * _objectIdentifier;
}

+ (char)supportsSecureCoding;

- (AFObjectCreatedSiriResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0 objectIdentifier:(NSURL *)arg1;
- (NSString *)_objectIdentifier;

@end
