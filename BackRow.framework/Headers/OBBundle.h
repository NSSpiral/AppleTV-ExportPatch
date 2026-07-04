/* Runtime dump - OBBundle
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface OBBundle : NSObject
{
    NSString * _identifier;
    NSBundle * _bundle;
    NSString * _bundleVersion;
}

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSBundle * bundle;
@property (readonly, nonatomic) NSString * bundleVersion;

+ (NSString *)bundleAtPath:(NSString *)arg0;
+ (NSString *)bundleWithIdentifier:(NSString *)arg0;

- (id)privacyFlow;
- (NSString *)identifier;
- (NSBundle *)bundle;
- (OBBundle *)initWithBundle:(NSBundle *)arg0;
- (void).cxx_destruct;
- (NSString *)bundleVersion;

@end
