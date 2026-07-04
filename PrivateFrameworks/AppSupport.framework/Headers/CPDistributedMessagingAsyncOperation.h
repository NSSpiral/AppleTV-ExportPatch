/* Runtime dump - CPDistributedMessagingAsyncOperation
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingAsyncOperation : NSOperation
{
    CPDistributedMessagingCenter * _center;
    NSString * _name;
    NSData * _userInfoData;
    NSString * _oolKey;
    NSData * _oolData;
    id _target;
    SEL _selector;
    void * _context;
    char _makeServer;
    NSThread * _calloutThread;
    NSDictionary * _reply;
    NSError * _error;
}

- (void)dealloc;
- (void)main;
- (CPDistributedMessagingAsyncOperation *)initWithCenter:(CPDistributedMessagingCenter *)arg0 messageName:(NSString *)arg1 userInfoData:(NSData *)arg2 oolKey:(NSString *)arg3 oolData:(NSData *)arg4 target:(NSObject *)arg5 selector:(SEL)arg6 context:(void *)arg7 makeServer:(char)arg8;
- (void)_releaseSendingData;
- (void)_performCallout;

@end
