/* Runtime dump - PKManager
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKManager : NSObject
{
    PKDaemonClient * _client;
}

@property (retain) PKDaemonClient * client;

+ (PKManager *)defaultManager;

- (void).cxx_destruct;
- (id)containingAppForPlugInWithPid:(int)arg0;
- (PKManager *)initForService:(char *)arg0;
- (NSDictionary *)containingAppForExtensionProperties:(NSDictionary *)arg0;
- (void)holdRequest:(NSURLRequest *)arg0 flags:(unsigned long long)arg1 result:(NSObject *)arg2;
- (void)registerPlugInAtURL:(NSURL *)arg0 result:(NSObject *)arg1;
- (void)unregisterPlugInAtURL:(NSURL *)arg0 result:(NSObject *)arg1;
- (void)registerPlugInsInBundle:(NSObject *)arg0 result:(NSObject *)arg1;
- (void)unregisterPlugInsInBundle:(NSObject *)arg0 result:(NSObject *)arg1;
- (id)informationForPlugInWithPid:(int)arg0;
- (id)containingAppForPlugInConnectedTo:(id)arg0;
- (void)holdPlugInsInApplication:(id)arg0 result:(NSObject *)arg1;
- (void)forceHoldPlugIn:(id)arg0 result:(NSObject *)arg1;
- (void)releaseHold:(id)arg0;
- (void)setClient:(PKDaemonClient *)arg0;
- (PKDaemonClient *)client;

@end
