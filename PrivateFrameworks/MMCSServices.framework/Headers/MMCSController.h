/* Runtime dump - MMCSController
 * Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@interface MMCSController : NSObject
{
    int _connectionBehavior;
    id _powerAssertion;
    NSTimer * _powerAssertionTimer;
    struct __MMCSEngine * _engine;
    struct __CFURL * _chunkStoreURL;
    unsigned long long _currentItemID;
    NSMutableDictionary * _transfers;
    NSMutableDictionary * _requestIDToBlockMap;
    NSMutableDictionary * _requestIDToTransfersMap;
    NSMutableDictionary * _requestIDToRemainingTransfersMap;
    NSMutableDictionary * _transferToRequestIDsMap;
}

@property int connectionBehavior;
@property (readonly) char isActive;

- (void)dealloc;
- (MMCSController *)init;
- (char)isActive;
- (NSDictionary *)_options;
- (struct __MMCSEngine *)_engine;
- (void)_unregisterPowerAssertion;
- (int)connectionBehavior;
- (NSString *)_registeredTransferForGUID:(NSString *)arg0;
- (void)_registerPowerAssertionIfNeeded;
- (char)_registerTransfers:(id)arg0;
- (char)_unregisterTransfers:(id)arg0;
- (char)_getTransfers:(id)arg0 requestURL:(NSURL *)arg1 requestorID:(NSString *)arg2 token:(NSString *)arg3 error:(id *)arg4;
- (void)_setScheduledTransfers:(id)arg0 block:(id /* block */)arg1;
- (char)_putTransfers:(id)arg0 requestURL:(NSURL *)arg1 requestorID:(NSString *)arg2 token:(NSString *)arg3 error:(id *)arg4;
- (void)_processCompletedItem:(NSObject *)arg0 error:(NSError *)arg1;
- (void)_releasePowerAssertionAndSimulateCrash;
- (NSObject *)_registeredTransferForItemID:(unsigned long long)arg0;
- (char)registerFiles:(id)arg0;
- (char)unregisterFiles:(id)arg0;
- (void)getFiles:(id)arg0 requestURL:(NSURL *)arg1 requestorID:(NSString *)arg2 authToken:(NSString *)arg3 completionBlock:(id /* block */)arg4;
- (void)putFiles:(id)arg0 requestURL:(NSURL *)arg1 requestorID:(NSString *)arg2 authToken:(NSString *)arg3 completionBlock:(id /* block */)arg4;
- (void)_putItemUpdated:(id)arg0 progress:(double)arg1 state:(int)arg2 error:(NSError *)arg3;
- (void)_getItemUpdated:(id)arg0 progress:(double)arg1 state:(int)arg2 error:(NSError *)arg3;
- (void)_putItemCompleted:(id)arg0 error:(NSError *)arg1;
- (void)_getItemCompleted:(id)arg0 path:(NSString *)arg1 error:(NSError *)arg2;
- (void)_itemCompleted:(id)arg0;
- (void)setConnectionBehavior:(int)arg0;
- (void)_releasePowerAssertion;

@end
