/* Runtime dump - CTSubscriber
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTSubscriber : NSObject
{
    struct __CTServerConnection * _server;
    struct vector<dispatch::block<void (^)(NSDictionary *)>, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)> > > _authCallbacks;
}

@property (readonly, retain, nonatomic) NSData * carrierToken;

- (NSData *)carrierToken;
- (char)refreshCarrierToken;
- (void)handleAuthCallback:(id /* block */)arg0;
- (void)authenticateWithInfo:(NSDictionary *)arg0 handleResult:(NSObject *)arg1;
- (void)dealloc;
- (CTSubscriber *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
