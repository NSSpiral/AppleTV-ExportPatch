/* Runtime dump - AASigningSession
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASigningSession : NSObject
{
    struct NACContextOpaque_ * _context;
    NSString * _certURL;
    NSString * _sessionURL;
    long _error;
}

@property (readonly, nonatomic) long error;

- (void)dealloc;
- (void).cxx_destruct;
- (AASigningSession *)initWithCertURL:(NSString *)arg0 sessionURL:(NSString *)arg1;
- (void)establishSession;
- (NSData *)signatureForData:(NSData *)arg0;
- (long)error;

@end
