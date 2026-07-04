/* Runtime dump - MFDARequestQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDARequestQueue : MFRequestQueue
{
    DAMailAccount * _account;
    NSString * _folderID;
}

- (void)dealloc;
- (MFDARequestQueue *)initWithAccount:(DAMailAccount *)arg0 folderID:(NSString *)arg1;
- (id)filterRequests:(id)arg0 consumers:(NSMutableArray *)arg1 newConsumers:(id *)arg2;
- (void)processRequests:(id)arg0 consumers:(NSMutableArray *)arg1;

@end
