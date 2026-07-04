/* Runtime dump - BRMediaAssetSkipInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaAssetSkipInfo : NSObject
{
    unsigned int _type;
    double _start;
    double _duration;
    double _target;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double target;

- (NSObject *)_nameForType;
- (BRMediaAssetSkipInfo *)initWithType:(unsigned int)arg0 start:(double)arg1 duration:(double)arg2 target:(double)arg3;
- (NSString *)description;
- (double)duration;
- (unsigned int)type;
- (double)target;
- (double)start;
- (NSDictionary *)dictionaryRepresentation;

@end
