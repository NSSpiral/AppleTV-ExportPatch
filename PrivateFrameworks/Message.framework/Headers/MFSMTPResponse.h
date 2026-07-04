/* Runtime dump - MFSMTPResponse
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSMTPResponse : NSObject <NSCopying>
{
    id _lastResponseLine;
    int _status;
    id _statusClass;
    id _statusSubject;
    id _statusDetail;
    NSString * _statusString;
    NSArray * _continuationResponses;
}

@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) unsigned int statusClass;
@property (readonly, nonatomic) unsigned int statusSubject;
@property (readonly, nonatomic) unsigned int statusDetail;
@property (readonly, nonatomic) NSString * statusString;
@property (retain, nonatomic) NSArray * continuationResponses;

- (void)dealloc;
- (NSString *)description;
- (MFSMTPResponse *)copyWithZone:(struct _NSZone *)arg0;
- (int)status;
- (void)setStatus:(int)arg0;
- (MFSMTPResponse *)initWithStatus:(int)arg0;
- (id)lastResponseLine;
- (NSString *)errorMessageWithAddress:(NSString *)arg0 defaultMessage:(NSString *)arg1;
- (void)setLastResponseLine:(id)arg0;
- (void)setContinuationResponses:(NSArray *)arg0;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (int)failureReason;
- (unsigned int)statusClass;
- (unsigned int)statusSubject;
- (unsigned int)statusDetail;
- (NSString *)statusString;
- (NSArray *)continuationResponses;

@end
