/* Runtime dump - DAMailboxRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxRequest : NSObject
{
    int _requestType;
    int _bodyFormat;
    NSString * _messageID;
}

@property (nonatomic) int requestType;
@property (nonatomic) int bodyFormat;
@property (copy, nonatomic) NSString * messageID;

- (char)mf_alwaysReportFailures;
- (DAMailboxRequest *)init;
- (void).cxx_destruct;
- (void)setBodyFormat:(int)arg0;
- (void)setMessageID:(NSString *)arg0;
- (NSString *)messageID;
- (int)bodyFormat;
- (void)setRequestType:(int)arg0;
- (int)requestType;

@end
