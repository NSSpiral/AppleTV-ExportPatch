/* Runtime dump - AFContextResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFContextResponse : AFSiriResponse
{
    AFSiriContext * _context;
}

+ (char)supportsSecureCoding;

- (AFContextResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (EAGLContext *)_context;
- (void).cxx_destruct;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0 context:(AFSiriContext *)arg1;

@end
