/* Runtime dump - NSURLAuthenticationChallengeInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLAuthenticationChallengeInternal : NSObject
{
    NSURLProtectionSpace * space;
    NSURLCredential * proposedCredential;
    int previousFailureCount;
    NSURLResponse * failureResponse;
    NSError * error;
    <NSURLAuthenticationChallengeSender> * sender;
}

- (NSURLAuthenticationChallengeInternal *)initWithProtectionSpace:(NSURLProtectionSpace *)arg0 proposedCredential:(NSURLCredential *)arg1 previousFailureCount:(int)arg2 failureResponse:(NSURLResponse *)arg3 error:(NSError *)arg4 sender:(<NSURLAuthenticationChallengeSender> *)arg5;
- (void)dealloc;

@end
