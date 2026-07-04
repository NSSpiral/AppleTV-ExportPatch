/* Runtime dump - BSAction
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAction : NSObject <BSXPCCoding, BSSettingDescriptionProvider>
{
    BSSettings * _info;
    char _expectsResponse;
    unsigned long long _timeout;
    NSObject<OS_dispatch_queue> * _queue;
    char _queue_hasBeenNeutered;
    id _queue_handler;
    struct ? _queue_listenerTokens;
    NSObject<OS_dispatch_source> * _queue_timer;
}

@property (readonly, copy, nonatomic) BSSettings * info;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)UIActionType;
- (void)dealloc;
- (BSAction *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)canSendResponse;
- (void)sendResponse:(NSURLResponse *)arg0;
- (BSSettings *)info;
- (BSAction *)initWithInfo:(BSSettings *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (BSAction *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSString *)_handlerDescription;
- (NSString *)descriptionWithMultilinePrefix:(NSString *)arg0;

@end
