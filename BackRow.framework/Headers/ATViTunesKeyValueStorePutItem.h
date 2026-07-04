/* Runtime dump - ATViTunesKeyValueStorePutItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATViTunesKeyValueStorePutItem : NSObject
{
    NSString * key;
    NSData * value;
    NSString * baseVersion;
}

+ (NSString *)putItemWithKey:(NSString *)arg0 value:(NSData *)arg1 baseVersion:(NSString *)arg2;

- (NSString *)_initWithKey:(NSString *)arg0 withValue:(NSData *)arg1 withBaseVersion:(NSString *)arg2;
- (void).cxx_destruct;

@end
