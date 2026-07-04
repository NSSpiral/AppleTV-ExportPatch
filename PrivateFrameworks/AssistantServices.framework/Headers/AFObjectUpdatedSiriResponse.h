/* Runtime dump - AFObjectUpdatedSiriResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFObjectUpdatedSiriResponse : AFSiriResponse
{
    NSURL * _objectIdentifier;
}

+ (char)supportsSecureCoding;

- (AFObjectUpdatedSiriResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0 objectIdentifier:(NSURL *)arg1;
- (NSString *)_objectIdentifier;

@end
