/* Runtime dump - NSURLAuthenticationChallenge
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding>
{
    NSURLAuthenticationChallengeInternal * _internal;
}

@property (readonly, copy) NSURLProtectionSpace * protectionSpace;
@property (readonly, copy) NSURLCredential * proposedCredential;
@property (readonly) int previousFailureCount;
@property (readonly, copy) NSURLResponse * failureResponse;
@property (readonly, copy) NSError * error;
@property (readonly, retain) <NSURLAuthenticationChallengeSender> * sender;

+ (NSObject *)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg0 sender:(<NSURLAuthenticationChallengeSender> *)arg1;
+ (char)supportsSecureCoding;
+ (NSObject *)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg0 sender:(<NSURLAuthenticationChallengeSender> *)arg1;

- (NSURLAuthenticationChallenge *)initWithAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg0 sender:(<NSURLAuthenticationChallengeSender> *)arg1;
- (NSURLAuthenticationChallenge *)initWithProtectionSpace:(NSURLProtectionSpace *)arg0 proposedCredential:(NSURLCredential *)arg1 previousFailureCount:(int)arg2 failureResponse:(NSURLResponse *)arg3 error:(NSError *)arg4 sender:(<NSURLAuthenticationChallengeSender> *)arg5;
- (NSURLCredential *)proposedCredential;
- (NSURLResponse *)failureResponse;
- (NSObject *)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge *)arg0 sender:(<NSURLAuthenticationChallengeSender> *)arg1;
- (void)dealloc;
- (NSURLAuthenticationChallenge *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSURLAuthenticationChallenge *)init;
- (int)previousFailureCount;
- (NSURLProtectionSpace *)protectionSpace;
- (<NSURLAuthenticationChallengeSender> *)sender;
- (void)setSender:(<NSURLAuthenticationChallengeSender> *)arg0;
- (NSError *)error;
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;

@end
