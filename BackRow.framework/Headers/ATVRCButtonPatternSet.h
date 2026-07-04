/* Runtime dump - ATVRCButtonPatternSet
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRCButtonPatternSet : NSObject
{
    NSArray * _commandPattern;
    NSArray * _repeatPattern;
    double _maxRepeatInterval;
}

- (NSDictionary *)_decodePatternFromDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_encodePatternToDictionary:(NSDictionary *)arg0;
- (NSArray *)commandPattern;
- (char)isOneShot;
- (NSArray *)repeatPattern;
- (double)maxRepeatInterval;
- (void)setCommandPattern:(NSArray *)arg0;
- (void)setRepeatPattern:(NSArray *)arg0;
- (void)setMaxRepeatInterval:(double)arg0;
- (NSDictionary *)encodeToDictionary;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (ATVRCButtonPatternSet *)initWithDictionary:(NSDictionary *)arg0;
- (char)isValid;
- (void)clear;

@end
