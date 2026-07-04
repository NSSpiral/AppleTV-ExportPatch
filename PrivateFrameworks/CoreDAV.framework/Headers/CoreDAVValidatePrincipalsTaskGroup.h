/* Runtime dump - CoreDAVValidatePrincipalsTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSMutableSet * _urlsToExamine;
    NSMutableSet * _principalURLs;
    NSURL * _urlBeingExamined;
    char _authError;
}

@property (readonly, nonatomic) NSSet * resultPrincipalURLs;
@property (readonly, nonatomic) char didReceiveAuthenticationError;
@property (retain, nonatomic) NSMutableSet * urlsToExamine;
@property (retain, nonatomic) NSMutableSet * principalURLs;
@property (retain, nonatomic) NSURL * urlBeingExamined;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_finishWithError:(NSError *)arg0;
- (void)dealloc;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)startTaskGroup;
- (void)cancelTaskGroup;
- (char)didReceiveAuthenticationError;
- (NSMutableSet *)principalURLs;
- (NSMutableSet *)urlsToExamine;
- (void)setUrlBeingExamined:(NSURL *)arg0;
- (NSURL *)urlBeingExamined;
- (void)_fetchNextURL;
- (void)setUrlsToExamine:(NSMutableSet *)arg0;
- (CoreDAVValidatePrincipalsTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 urls:(id)arg1 taskManager:(NSObject *)arg2;
- (NSSet *)resultPrincipalURLs;
- (void)setPrincipalURLs:(NSMutableSet *)arg0;

@end
