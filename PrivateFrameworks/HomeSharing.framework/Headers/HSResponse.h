/* Runtime dump - HSResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSResponse : NSObject
{
    NSString * _MIMEType;
    unsigned int _responseCode;
    NSDictionary * _responseHeaderFields;
    NSData * _responseData;
    NSURL * _responseDataFileURL;
    NSError * _error;
}

@property (readonly, nonatomic) NSString * MIMEType;
@property (readonly, nonatomic) unsigned int responseCode;
@property (readonly, nonatomic) NSDictionary * responseHeaderFields;
@property (readonly, nonatomic) NSData * responseData;
@property (copy, nonatomic) NSURL * responseDataFileURL;
@property (readonly, nonatomic) NSError * error;

+ (NSURLResponse *)responseWithResponse:(NSURLResponse *)arg0;
+ (HSResponse *)responseWithCode:(unsigned int)arg0 headerFields:(NSDictionary *)arg1 data:(NSData *)arg2 MIMEType:(NSString *)arg3 error:(NSError *)arg4;

- (unsigned int)responseCode;
- (NSString *)description;
- (NSString *)MIMEType;
- (void).cxx_destruct;
- (NSData *)responseData;
- (NSError *)error;
- (HSResponse *)initWithCode:(unsigned int)arg0 headerFields:(NSDictionary *)arg1 data:(NSData *)arg2 MIMEType:(NSString *)arg3 error:(NSError *)arg4;
- (NSDictionary *)responseHeaderFields;
- (NSURL *)responseDataFileURL;
- (void)setResponseDataFileURL:(NSURL *)arg0;

@end
