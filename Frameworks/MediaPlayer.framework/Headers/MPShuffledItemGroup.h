/* Runtime dump - MPShuffledItemGroup
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPShuffledItemGroup : NSObject <NSSecureCoding>
{
    long long _groupPersistentID;
    NSMutableArray * _mutableItems;
}

+ (char)supportsSecureCoding;

- (MPShuffledItemGroup *)initWithGroupPersistentID:(long long)arg0;
- (MPShuffledItemGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;

@end
