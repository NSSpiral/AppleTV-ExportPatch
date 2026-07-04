/* Runtime dump - HMUIndent
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUIndent : NSObject
{
    NSString * _level;
    NSString * _step;
    unsigned int _factor;
}

@property (readonly, nonatomic) NSString * level;
@property (readonly, nonatomic) NSString * step;
@property (readonly, nonatomic) unsigned int factor;

+ (HMUIndent *)indentWithLevel:(NSString *)arg0 step:(NSString *)arg1 factor:(unsigned int)arg2;
+ (HMUIndent *)indentWithLevel:(NSString *)arg0;

- (NSString *)description;
- (NSString *)level;
- (void).cxx_destruct;
- (HMUIndent *)initWithLevel:(NSString *)arg0 step:(NSString *)arg1 factor:(unsigned int)arg2;
- (unsigned int)factor;
- (id)indentByFactor:(unsigned int)arg0;
- (NSString *)step;

@end
