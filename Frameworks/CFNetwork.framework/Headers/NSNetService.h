/* Runtime dump - NSNetService
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSNetService : NSObject
{
    id _netService;
    id _delegate;
    id _reserved;
}

@property <NSNetServiceDelegate> * delegate;
@property char includesPeerToPeer;
@property (readonly, copy) NSString * name;
@property (readonly, copy) NSString * type;
@property (readonly, copy) NSString * domain;
@property (readonly, copy) NSString * hostName;
@property (readonly, copy) NSArray * addresses;
@property (readonly) int port;

+ (NSDictionary *)dataFromTXTRecordDictionary:(NSDictionary *)arg0;
+ (NSData *)dictionaryFromTXTRecordData:(NSData *)arg0;

- (NSMutableArray *)_monitors;
- (NSArray *)addresses;
- (struct __CFNetService *)_internalNetService;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg0;
- (NSNetService *)initWithDomain:(NSString *)arg0 type:(NSString *)arg1 name:(NSString *)arg2 port:(int)arg3;
- (NSObject *)normalizedType;
- (char)includesPeerToPeer;
- (char)_includesAWDL;
- (void)_internal_publishWithOptions:(unsigned int)arg0;
- (void)publishWithServer:(unsigned int)arg0;
- (void)publishWithOptions:(unsigned int)arg0;
- (NSNetService *)initWithCFNetService:(struct __CFNetService *)arg0;
- (void)setIncludesPeerToPeer:(char)arg0;
- (void)_setIncludesAWDL:(char)arg0;
- (void)_dispatchCallBackWithError:(struct ?)arg0;
- (char)getInputStream:(id *)arg0 outputStream:(NSOutputStream *)arg1;
- (char)setTXTRecordData:(NSData *)arg0;
- (void)publish;
- (void)dealloc;
- (void)setDelegate:(<NSNetServiceDelegate> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (<NSNetServiceDelegate> *)delegate;
- (NSString *)name;
- (NSString *)type;
- (NSString *)domain;
- (void)stop;
- (int)port;
- (void)stopMonitoring;
- (void)startMonitoring;
- (NSData *)TXTRecordData;
- (NSNetService *)initWithDomain:(NSString *)arg0 type:(NSString *)arg1 name:(NSString *)arg2;
- (void)resolveWithTimeout:(double)arg0;
- (void)resolve;
- (NSString *)hostName;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)finalize;

@end
