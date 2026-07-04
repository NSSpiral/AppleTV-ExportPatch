/* Runtime dump - GKFriendRecommendationInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal
{
    NSString * _reason;
    NSString * _reason2;
    unsigned int _rid;
    int _source;
}

@property (retain, nonatomic) NSString * reason;
@property (retain, nonatomic) NSString * reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (NSString *)reason;
- (int)source;
- (void)setSource:(int)arg0;
- (void)setRid:(unsigned int)arg0;
- (int)defaultFamiliarity;
- (unsigned int)rid;
- (NSString *)reason2;
- (void)setReason2:(NSString *)arg0;
- (void)setReason:(NSString *)arg0;

@end
