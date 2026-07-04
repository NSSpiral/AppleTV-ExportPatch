/* Runtime dump - RadioMutableHistoryItem
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableHistoryItem : RadioHistoryItem

@property (retain, nonatomic) NSDate * datePlayed;
@property (copy, nonatomic) NSString * externalIdentifier;
@property (retain, nonatomic) RadioTrack * track;
@property (nonatomic) int type;

- (void)setExternalIdentifier:(NSString *)arg0;
- (void)setType:(int)arg0;
- (RadioMutableHistoryItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDatePlayed:(NSDate *)arg0;
- (void)setTrack:(RadioTrack *)arg0;

@end
