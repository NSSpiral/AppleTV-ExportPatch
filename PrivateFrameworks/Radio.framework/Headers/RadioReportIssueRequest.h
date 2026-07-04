/* Runtime dump - RadioReportIssueRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioReportIssueRequest : RadioRequest
{
    NSData * _data;
    NSString * _description;
    int _issueType;
    SSURLConnectionRequest * _request;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioReportIssueRequest *)initWithIssueType:(int)arg0 description:(NSString *)arg1 data:(NSData *)arg2;
- (RadioReportIssueRequest *)initWithIssueType:(int)arg0 description:(NSString *)arg1;

@end
