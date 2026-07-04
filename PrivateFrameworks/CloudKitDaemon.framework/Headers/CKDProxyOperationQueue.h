/* Runtime dump - CKDProxyOperationQueue
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProxyOperationQueue : NSOperationQueue
{
    CKDClientProxy * _proxy;
}

@property (weak, nonatomic) CKDClientProxy * proxy;

- (void)addOperation:(NSObject *)arg0;
- (void).cxx_destruct;
- (CKDClientProxy *)proxy;
- (void)setProxy:(CKDClientProxy *)arg0;
- (CKDProxyOperationQueue *)initWithProxy:(CKDClientProxy *)arg0;

@end
