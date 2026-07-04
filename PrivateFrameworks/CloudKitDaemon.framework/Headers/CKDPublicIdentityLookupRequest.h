/* Runtime dump - CKDPublicIdentityLookupRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupRequest : NSObject
{
    char _isCancelled;
    id _perEmailProgressBlock;
    id _lookupCompletionBlock;
    NSMutableSet * _remainingEmailsToFetch;
    NSMutableDictionary * _emailsToProtectionInfo;
    NSMutableDictionary * _emailsToUserInfo;
}

@property (copy, nonatomic) id perEmailProgressBlock;
@property (copy, nonatomic) id lookupCompletionBlock;
@property (retain, nonatomic) NSMutableSet * remainingEmailsToFetch;
@property (retain, nonatomic) NSMutableDictionary * emailsToProtectionInfo;
@property (retain, nonatomic) NSMutableDictionary * emailsToUserInfo;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (char)isCancelled;
- (void).cxx_destruct;
- (void)setIsCancelled:(char)arg0;
- (void)finishWithError:(NSError *)arg0;
- (CKDPublicIdentityLookupRequest *)initWithEmails:(NSArray *)arg0;
- (void)setPerEmailProgressBlock:(id /* block */)arg0;
- (void)setLookupCompletionBlock:(id /* block */)arg0;
- (void)receivedProtectionInfo:(NSDictionary *)arg0 userInfo:(NSDictionary *)arg1 forEmail:(SAPhonePlayVoiceMail *)arg2;
- (id /* block */)perEmailProgressBlock;
- (id /* block */)lookupCompletionBlock;
- (NSMutableSet *)remainingEmailsToFetch;
- (void)setRemainingEmailsToFetch:(NSMutableSet *)arg0;
- (NSMutableDictionary *)emailsToProtectionInfo;
- (void)setEmailsToProtectionInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)emailsToUserInfo;
- (void)setEmailsToUserInfo:(NSMutableDictionary *)arg0;

@end
