/* Runtime dump - MPBidirectionalDictionary
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSMutableDictionary * _keyToObjectDictionary;
    NSMutableDictionary * _objectToKeyDictionary;
}

+ (MPBidirectionalDictionary *)bidirectionalDictionary;

- (NSObject *)keyForObject:(NSObject *)arg0;
- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (MPBidirectionalDictionary *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPBidirectionalDictionary *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPBidirectionalDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (MPBidirectionalDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
