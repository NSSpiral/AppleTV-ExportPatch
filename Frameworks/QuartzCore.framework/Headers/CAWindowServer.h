/* Runtime dump - CAWindowServer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAWindowServer : NSObject
{
    struct CAWindowServerImpl * _impl;
}

@property (readonly) NSArray * displays;
@property char mirroringEnabled;
@property unsigned int rendererFlags;
@property char secure;

+ (CAWindowServer *)serverIfRunning;
+ (NSXPCConnection *)server;
+ (NSDictionary *)contextWithOptions:(NSDictionary *)arg0;
+ (NSString *)context;

- (void)setMirroringEnabled:(char)arg0;
- (void)addDisplay:(NSObject *)arg0;
- (void)removeDisplay:(NSObject *)arg0;
- (void)removeAllDisplays;
- (NSString *)displayWithName:(NSString *)arg0;
- (NSObject *)displayWithDisplayId:(unsigned int)arg0;
- (NSObject *)displayWithUniqueId:(NSObject *)arg0;
- (void)_detectDisplays;
- (char)isMirroringEnabled;
- (unsigned int)rendererFlags;
- (id)insecureProcessIds;
- (unsigned int)clientPortOfContextId:(unsigned int)arg0;
- (unsigned int)taskPortOfContextId:(unsigned int)arg0;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg0;
- (void)dealloc;
- (CAWindowServer *)init;
- (NSString *)description;
- (CAWindowServer *)_init;
- (void)setRendererFlags:(unsigned int)arg0;
- (NSArray *)displays;
- (void)setSecure:(char)arg0;
- (char)isSecure;

@end
