/* Runtime dump - ATViTunesKeyValueStoreGetItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATViTunesKeyValueStoreGetItem : NSObject
{
    NSString * key;
    NSString * sinceVersion;
}

+ (NSString *)getItemWithKey:(NSString *)arg0 sinceVersion:(NSString *)arg1;

- (NSString *)_initWithKey:(NSString *)arg0 withSinceVersion:(NSString *)arg1;
- (void).cxx_destruct;

@end
