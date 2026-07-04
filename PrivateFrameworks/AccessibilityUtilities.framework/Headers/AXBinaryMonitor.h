/* Runtime dump - AXBinaryMonitor
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXBinaryMonitor : NSObject
{
    NSMutableDictionary * _bundleHandlerMap;
    NSMutableDictionary * _frameworkHandlerMap;
    NSMutableDictionary * _dylibHandlerMap;
}

@property (retain, nonatomic) NSMutableDictionary * bundleHandlerMap;
@property (retain, nonatomic) NSMutableDictionary * frameworkHandlerMap;
@property (retain, nonatomic) NSMutableDictionary * dylibHandlerMap;

+ (AXBinaryMonitor *)sharedInstance;
+ (void)initialize;

- (void)dealloc;
- (AXBinaryMonitor *)init;
- (void)setBundleHandlerMap:(NSMutableDictionary *)arg0;
- (void)setFrameworkHandlerMap:(NSMutableDictionary *)arg0;
- (void)setDylibHandlerMap:(NSMutableDictionary *)arg0;
- (void)_addHandler:(id /* block */)arg0 withName:(/* block */ id)arg1 toMap:(NSObject *)arg2;
- (void)_handleLoadedImagePath:(NSString *)arg0;
- (char)_loadImageIsFramework:(id)arg0;
- (UIImage *)_frameworkNameForImage:(UIImage *)arg0;
- (NSMutableDictionary *)frameworkHandlerMap;
- (char)_loadImageIsBundle:(NSObject *)arg0;
- (UIImage *)_bundleNameForImage:(UIImage *)arg0;
- (NSMutableDictionary *)bundleHandlerMap;
- (char)_loadImageIsDylib:(id)arg0;
- (UIImage *)_dylibNameForImage:(UIImage *)arg0;
- (NSMutableDictionary *)dylibHandlerMap;
- (void)addHandler:(id /* block */)arg0 forBundleID:(/* block */ id)arg1;
- (void)addHandler:(id /* block */)arg0 forBundleName:(/* block */ id)arg1;
- (void)addHandler:(id /* block */)arg0 forFramework:(/* block */ id)arg1;
- (void)addHandler:(id /* block */)arg0 forDylib:(/* block */ id)arg1;

@end
