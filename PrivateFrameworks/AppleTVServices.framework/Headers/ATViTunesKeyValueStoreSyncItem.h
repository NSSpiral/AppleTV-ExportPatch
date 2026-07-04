/* Runtime dump - ATViTunesKeyValueStoreSyncItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATViTunesKeyValueStoreSyncItem : NSObject
{
    NSString * _key;
    NSData * _value;
}

@property (readonly, nonatomic) NSString * key;
@property (readonly, nonatomic) NSData * value;

- (ATViTunesKeyValueStoreSyncItem *)initWithKey:(NSString *)arg0 value:(NSData *)arg1;
- (NSString *)key;
- (NSData *)value;
- (void).cxx_destruct;

@end
