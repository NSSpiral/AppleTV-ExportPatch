/* Runtime dump - PKServiceDefaults
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKServiceDefaults : NSUserDefaults
{
    PKServicePersonality * _personality;
}

@property (weak) PKServicePersonality * personality;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (char)synchronize;
- (void).cxx_destruct;
- (PKServiceDefaults *)initWithPersonality:(PKServicePersonality *)arg0;
- (void)setPersonality:(PKServicePersonality *)arg0;
- (PKServicePersonality *)personality;

@end
