/* Runtime dump - PKBundle
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKBundle : NSObject
{
    NSString * _supportPath;
    NSObject<OS_xpc_object> * __bundle;
}

@property (retain) NSObject<OS_xpc_object> * _bundle;
@property (readonly) NSURL * url;
@property (readonly) NSString * path;
@property (readonly) NSDictionary * infoDictionary;
@property (readonly) NSString * bundleIdentifier;
@property (readonly) NSString * supportPath;
@property (readonly) NSString * executablePath;
@property (readonly) NSString * plugInsPath;

- (NSDictionary *)infoDictionary;
- (NSURL *)url;
- (NSString *)bundleIdentifier;
- (NSString *)path;
- (NSString *)executablePath;
- (PKBundle *)initWithURL:(NSString *)arg0;
- (PKBundle *)initWithPath:(NSString *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)_bundle;
- (PKBundle *)initWithXPCBundle:(NSObject *)arg0;
- (PKBundle *)initWithExecutablePath:(NSString *)arg0;
- (void)set_bundle:(NSObject<OS_xpc_object> *)arg0;
- (NSObject *)stringProperty:(int)arg0;
- (NSString *)supportPath;
- (id)bundleDirectory:(id)arg0;
- (PKBundle *)initForMainBundle;
- (PKBundle *)initWithExecutableURL:(NSURL *)arg0;
- (NSString *)plugInsPath;

@end
