/* Runtime dump - AFSiriTask
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTask : NSObject <BSXPCCoding, NSSecureCoding>
{
    AFSiriRequest * _request;
    NSXPCListenerEndpoint * _remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint * _usageResultListenerEndpoint;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (char)supportsSecureCoding;

- (AFSiriTask *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (AFSiriRequest *)request;
- (AFSiriTask *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (NSURLRequest *)_initWithRequest:(AFSiriRequest *)arg0 remoteResponseListenerEndpoint:(NSXPCListenerEndpoint *)arg1 usageResultListenerEndpoint:(NSXPCListenerEndpoint *)arg2;
- (NSURLConnection *)_responseHandlerConnection;
- (NSURLConnection *)_usageResultHandlerConnection;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)failWithError:(NSError *)arg0;
- (void)completeWithResponse:(NSURLResponse *)arg0;
- (void)reportUsageResult:(NSObject *)arg0;

@end
