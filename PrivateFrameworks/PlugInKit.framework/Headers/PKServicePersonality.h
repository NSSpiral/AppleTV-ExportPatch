/* Runtime dump - PKServicePersonality
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality>
{
    id _plugInPrincipal;
    id _hostPrincipal;
    id _embeddedPrincipal;
    NSXPCConnection * _connection;
    NSUserDefaults * _preferences;
}

@property (retain) id plugInPrincipal;
@property (retain) id hostPrincipal;
@property (retain) id embeddedPrincipal;
@property (retain) NSXPCConnection * connection;
@property (retain) NSUserDefaults * preferences;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSString * identifier;
@property (readonly) NSString * version;
@property (readonly) NSURL * url;
@property (readonly) NSUUID * uuid;
@property (readonly) NSDictionary * bundleInfoDictionary;
@property (readonly) NSDictionary * plugInDictionary;

- (NSString *)description;
- (void)setPreferences:(NSUserDefaults *)arg0;
- (NSUserDefaults *)preferences;
- (void).cxx_destruct;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (PKServicePersonality *)initWithConnection:(NSXPCConnection *)arg0;
- (id)plugInPrincipal;
- (void)prepareUsingPlugIn:(id)arg0 hostProtocol:(NSObject *)arg1 reply:(id /* block */)arg2;
- (void)prepareUsing:(id)arg0 reply:(id /* block */)arg1;
- (void)beginUsingPlugIn:(id)arg0 ready:(char)arg1;
- (void)shutdownPlugIn;
- (void)prefsObjectForKey:(NSString *)arg0 inPlugIn:(MCPlug *)arg1 result:(NSObject *)arg2;
- (void)prefsSetObject:(NSObject *)arg0 forKey:(NSString *)arg1 inPlugIn:(MCPlug *)arg2 result:(NSObject *)arg3;
- (void)setPlugInPrincipal:(id)arg0;
- (void)setEmbeddedPrincipal:(id)arg0;
- (id)embeddedPrincipal;
- (NSString *)setupWithIdentifier:(NSString *)arg0;
- (NSObject *)defaultPrincipalObject;
- (NSObject *)findProtocol:(NSObject *)arg0;
- (void)setHostPrincipal:(id)arg0;
- (id)hostPrincipal;

@end
