/* Runtime dump - PSUsageBundleApp
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsageBundleApp : NSObject
{
    PSWeakReference * _storageReporterReference;
    NSString * _name;
    NSString * _bundleIdentifier;
    NSArray * _categories;
    float _totalSize;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * bundleIdentifier;
@property (retain, nonatomic) NSArray * categories;
@property (nonatomic) float totalSize;
@property (nonatomic) <PSStorageReporting> * usageBundleStorageReporter;

+ (NSString *)usageBundleAppForBundleWithIdentifier:(NSString *)arg0 withTotalSize:(float)arg1 andCategories:(id)arg2;
+ (NSString *)usageBundleAppForBundleWithIdentifier:(NSString *)arg0 withTotalSize:(float)arg1;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)bundleIdentifier;
- (NSArray *)categories;
- (float)totalSize;
- (void)setTotalSize:(float)arg0;
- (void)setBundleIdentifier:(NSString *)arg0;
- (void)setCategories:(NSArray *)arg0;
- (void)setUsageBundleStorageReporter:(<PSStorageReporting> *)arg0;
- (<PSStorageReporting> *)usageBundleStorageReporter;

@end
