/* Runtime dump - NetflixNrdp
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/NetflixNrdObject.h>

@protocol NetflixNrdObjectProtocol;

@class NetflixNrdObjectCallback;
@interface NetflixNrdp : NetflixNrdObject <NetflixNrdObjectProtocol>
{
    char isReady_;
    char isError_;
    NSMutableDictionary * eventListeners_;
    NSMutableDictionary * syncData_;
    NSMutableDictionary * setPropertyPending_;
    NSMutableDictionary * setPropertyCurrent_;
}

@property (readonly, nonatomic) NSString * READY;
@property (readonly, nonatomic) NSString * ACTION_ID;
@property (readonly, nonatomic) NSString * COMPLETE;
@property (readonly, nonatomic) NSString * NETWORK_ERROR;
@property (readonly, nonatomic) NSString * ERROR;
@property char isReady;
@property char isError;
@property (retain) NSMutableDictionary * syncData;
@property (retain) NSMutableDictionary * eventListeners;
@property (retain) NSMutableDictionary * setPropertyPending;
@property (retain) NSMutableDictionary * setPropertyCurrent;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NetflixNrdp *)sharedInstance;

- (NSObject *)syncDataForObject:(NSObject *)arg0;
- (void)setProperty:(NSString *)arg0 property:(NSString *)arg1 value:(NSObject *)arg2;
- (void)callEventListeners:(id)arg0 event:(NSString *)arg1;
- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 listener:(NSObject<OS_xpc_object> *)arg1 name:(NSString *)arg2;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 listener:(NSObject<OS_xpc_object> *)arg1 name:(NSString *)arg2;
- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (char)handleNccpEvent:(NSObject *)arg0 object:(NSObject *)arg1 type:(NSObject *)arg2;
- (NSString *)COMPLETE;
- (NSString *)ACTION_ID;
- (NSString *)NETWORK_ERROR;
- (NSString *)ERROR;
- (void)gotEvent:(NSObject *)arg0;
- (NSObject *)getSubObject:(NSObject *)arg0;
- (void)setIsReady:(char)arg0;
- (NSMutableDictionary *)setPropertyCurrent;
- (NSMutableDictionary *)setPropertyPending;
- (void)setIsError:(char)arg0;
- (NSMutableDictionary *)eventListeners;
- (NSString *)READY;
- (void)notifyEventListeners:(id)arg0 type:(NSObject *)arg1 parameters:(NSDictionary *)arg2;
- (void)setEventListeners:(NSMutableDictionary *)arg0;
- (void)setSetPropertyPending:(NSMutableDictionary *)arg0;
- (void)setSetPropertyCurrent:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (NetflixNrdp *)init;
- (char)handleEvent:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (char)isReady;
- (char)isError;
- (NSMutableDictionary *)syncData;
- (void)setSyncData:(NSMutableDictionary *)arg0;

@end
