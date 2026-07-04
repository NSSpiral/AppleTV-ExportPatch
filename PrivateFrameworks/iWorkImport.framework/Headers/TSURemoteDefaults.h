/* Runtime dump - TSURemoteDefaults
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURemoteDefaults : NSObject
{
    NSObject<OS_dispatch_queue> * _checkQueue;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (readonly, nonatomic) NSURL * downloadableContentURL;

+ (TSURemoteDefaults *)sharedDefaults;

- (void)registerDefaults;
- (TSURemoteDefaults *)initInternal;
- (double)timeIntervalUntilNextUpdate;
- (void)checkForUpdate;
- (void)processResponse:(NSURLResponse *)arg0 data:(NSData *)arg1 error:(NSError *)arg2;
- (NSURL *)downloadableContentURL;
- (NSString *)URLForKey:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (TSURemoteDefaults *)init;
- (NSString *)stringForKey:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)dictionaryForKey:(NSString *)arg0;
- (NSURLRequest *)URLRequest;

@end
