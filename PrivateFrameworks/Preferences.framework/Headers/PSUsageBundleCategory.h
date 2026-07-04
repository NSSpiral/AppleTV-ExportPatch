/* Runtime dump - PSUsageBundleCategory
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsageBundleCategory : NSObject
{
    PSUsageBundleApp * _usageBundleApp;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic) PSUsageBundleApp * usageBundleApp;
@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * name;

+ (PSUsageBundleCategory *)categoryNamed:(id)arg0 withIdentifier:(NSString *)arg1 forUsageBundleApp:(PSUsageBundleApp *)arg2;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (PSUsageBundleApp *)usageBundleApp;
- (void)setUsageBundleApp:(PSUsageBundleApp *)arg0;

@end
