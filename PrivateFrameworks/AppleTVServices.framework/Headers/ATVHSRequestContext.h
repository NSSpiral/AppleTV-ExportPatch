/* Runtime dump - ATVHSRequestContext
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSRequestContext : NSObject
{
    ATVHSRequest * _hsRequest;
    NSURLSessionTask * _urlSessionTask;
    unsigned long long _urlSessionStartTime;
}

@property (retain, nonatomic) ATVHSRequest * hsRequest;
@property (retain, nonatomic) NSURLSessionTask * urlSessionTask;
@property (nonatomic) unsigned long long urlSessionStartTime;

- (NSString *)description;
- (void).cxx_destruct;
- (ATVHSRequestContext *)initWithHSRequest:(NSURLRequest *)arg0;
- (unsigned long long)elapsedURLSessionTimeInMilliseconds;
- (void)setURLSessionTask:(NSObject *)arg0;
- (ATVHSRequest *)hsRequest;
- (void)setHsRequest:(ATVHSRequest *)arg0;
- (unsigned long long)urlSessionStartTime;
- (void)setUrlSessionStartTime:(unsigned long long)arg0;
- (NSURLSessionTask *)urlSessionTask;

@end
