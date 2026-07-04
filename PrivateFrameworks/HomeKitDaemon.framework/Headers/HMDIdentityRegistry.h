/* Runtime dump - HMDIdentityRegistry
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIdentityRegistry : NSObject
{
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _registry;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSMutableDictionary * registry;

- (HMDIdentityRegistry *)init;
- (void)clear;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)registerPublicKey:(NSString *)arg0 forIdentifier:(NSString *)arg1;
- (NSString *)publicKeyForIdentifier:(NSString *)arg0;
- (NSMutableDictionary *)registry;
- (void)deregisterPublicKeyForIdentifier:(NSString *)arg0;
- (void)setRegistry:(NSMutableDictionary *)arg0;

@end
