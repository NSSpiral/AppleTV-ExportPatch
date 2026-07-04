/* Runtime dump - HTSHTTPMessageResponse
 * Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPMessageResponse : HTSHTTPMessage
{
    int _statusCode;
    NSString * _statusDescription;
    NSString * _trackingDescription;
    HTSHTTPMessageRequest * _request;
    NSMutableData * _serializedData;
    double _sendTime;
    unsigned long long _written;
}

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString * statusDescription;
@property (copy, nonatomic) NSString * trackingDescription;
@property (retain, nonatomic) HTSHTTPMessageRequest * request;
@property (retain, nonatomic) NSMutableData * serializedData;
@property (nonatomic) unsigned long long written;
@property (nonatomic) double sendTime;

- (void)setStatusDescription:(NSString *)arg0;
- (void)dealloc;
- (HTSHTTPMessageRequest *)request;
- (int)statusCode;
- (NSString *)statusDescription;
- (void)setStatusCode:(int)arg0;
- (NSMutableData *)serializedData;
- (void)setRequest:(HTSHTTPMessageRequest *)arg0;
- (struct __CFHTTPMessage *)copyMessage;
- (NSString *)trackingDescription;
- (void)setTrackingDescription:(NSString *)arg0;
- (void)setSerializedData:(NSMutableData *)arg0;
- (double)sendTime;
- (void)setSendTime:(double)arg0;
- (unsigned long long)written;
- (void)setWritten:(unsigned long long)arg0;

@end
