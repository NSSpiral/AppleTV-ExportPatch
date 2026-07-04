/* Runtime dump - SBSAssertion
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAssertion : NSObject
{
    NSString * _assertionName;
    NSString * _reason;
    unsigned int _port;
    struct _opaque_pthread_mutex_t _lock;
}

@property (readonly, nonatomic) NSString * assertionName;
@property (readonly, nonatomic) NSString * reason;

- (void)dealloc;
- (void)invalidate;
- (NSString *)reason;
- (NSString *)assertionName;
- (SBSAssertion *)initWithAssertionName:(NSString *)arg0 reason:(NSString *)arg1 port:(unsigned int)arg2;

@end
