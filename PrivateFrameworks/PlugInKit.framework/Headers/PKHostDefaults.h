/* Runtime dump - PKHostDefaults
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKHostDefaults : NSUserDefaults
{
    PKHostPlugIn * _plugin;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (weak) PKHostPlugIn * plugin;
@property (retain) NSObject<OS_dispatch_queue> * queue;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (char)synchronize;
- (void)registerDefaults:(id)arg0;
- (void)setPlugin:(PKHostPlugIn *)arg0;
- (PKHostPlugIn *)plugin;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (PKHostDefaults *)initWithPlugIn:(<PKPlugIn> *)arg0;

@end
