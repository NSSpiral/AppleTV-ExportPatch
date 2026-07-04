/* Runtime dump - AVURLAuthenticationChallenge
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest>
{
    AVWeakReference * _weakReference;
    NSDictionary * _requestDictionary;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (AVWeakReference *)_weakReference;
- (AVURLAuthenticationChallenge *)initWithAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg0 sender:(NSObject *)arg1 requestDictionary:(NSDictionary *)arg2;
- (AVURLAuthenticationChallenge *)initWithAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg0 sender:(<NSURLAuthenticationChallengeSender> *)arg1;
- (NSDictionary *)_requestDictionary;
- (void)_performCancellationByClient;
- (char)_shouldInformDelegateOfFigCancellation;
- (AVURLAuthenticationChallenge *)initWithProtectionSpace:(NSURLProtectionSpace *)arg0 proposedCredential:(NSURLCredential *)arg1 previousFailureCount:(int)arg2 failureResponse:(NSURLResponse *)arg3 error:(NSError *)arg4 sender:(<NSURLAuthenticationChallengeSender> *)arg5;
- (void)dealloc;
- (AVURLAuthenticationChallenge *)init;

@end
