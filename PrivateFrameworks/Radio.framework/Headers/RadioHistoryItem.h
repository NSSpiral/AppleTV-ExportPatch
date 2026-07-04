/* Runtime dump - RadioHistoryItem
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioHistoryItem : NSObject <NSCopying, NSMutableCopying>
{
    NSDate * _datePlayed;
    NSString * _externalIdentifier;
    RadioTrack * _track;
    int _type;
}

@property (readonly, nonatomic) NSDate * datePlayed;
@property (readonly, copy, nonatomic) NSString * externalIdentifier;
@property (readonly, nonatomic) RadioTrack * track;
@property (readonly, nonatomic) int type;

- (NSString *)externalIdentifier;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)type;
- (RadioHistoryItem *)copyWithZone:(struct _NSZone *)arg0;
- (RadioHistoryItem *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSDate *)datePlayed;
- (RadioTrack *)track;

@end
