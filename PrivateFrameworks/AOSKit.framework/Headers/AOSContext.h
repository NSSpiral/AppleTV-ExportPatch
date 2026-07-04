/* Runtime dump - AOSContext
 * Image: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

@interface AOSContext : NSObject <NSPortDelegate>
{
    struct AOSAccount * _account;
    struct AOSTransactionC * _transaction;
    /* block */ id * _callback;
    NSThread * _callbackThread;
    id _info;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSNumber *)contextWithAccount:(struct AOSAccount *)arg0 andTransaction:(struct AOSTransactionC *)arg1;

- (void)setTransaction:(struct AOSTransactionC *)arg0;
- (void)dealloc;
- (AOSContext *)init;
- (GEOPhotoInfo *)info;
- (void)setInfo:(NSDictionary *)arg0;
- (NSThread *)_callbackThread;
- (void)_performCallback;
- (char)scheduleCallback;
- (struct AOSAccount *)account;
- (void)setAccount:(struct AOSAccount *)arg0;
- (struct AOSTransactionC *)transaction;
- (void)finalize;

@end
