/* Runtime dump - GKGameRecommendationInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameRecommendationInternal : GKGameInternal
{
    NSString * _reason;
    NSString * _engineID;
}

@property (retain, nonatomic) NSString * reason;
@property (retain, nonatomic) NSString * engineID;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (NSString *)reason;
- (NSDictionary *)serverRepresentation;
- (NSString *)engineID;
- (GKGameRecommendationInternal *)initWithGame:(GKGame *)arg0;
- (void)setEngineID:(NSString *)arg0;
- (void)setReason:(NSString *)arg0;

@end
