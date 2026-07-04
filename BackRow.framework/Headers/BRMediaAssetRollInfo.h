/* Runtime dump - BRMediaAssetRollInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaAssetRollInfo : NSObject
{
    char _skippable;
    unsigned int _type;
    NSNumber * _adamID;
    double _start;
    double _duration;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) NSNumber * adamID;
@property (nonatomic) char skippable;

- (NSObject *)_nameForType;
- (char)isSkippable;
- (BRMediaAssetRollInfo *)initWithType:(unsigned int)arg0 start:(double)arg1 duration:(double)arg2;
- (void)setSkippable:(char)arg0;
- (NSString *)description;
- (double)duration;
- (unsigned int)type;
- (double)start;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setAdamID:(NSNumber *)arg0;
- (NSNumber *)adamID;

@end
