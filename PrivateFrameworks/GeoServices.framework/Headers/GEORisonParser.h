/* Runtime dump - GEORisonParser
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORisonParser : NSObject
{
    NSNumberFormatter * _formatter;
    NSMutableCharacterSet * _risonTerminators;
    NSMutableCharacterSet * _risonEscapes;
}

- (void)dealloc;
- (GEORisonParser *)init;
- (NSNumber *)stringFromNumber:(NSNumber *)arg0;
- (NSObject *)stringFromRisonObject:(NSObject *)arg0;
- (NSString *)objectFromRisonString:(NSString *)arg0;
- (NSDictionary *)objectWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)dictionaryWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)stringLiteralWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)arrayWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)boolWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)nullWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)numberWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)keyWithReaderInfo:(struct ? *)arg0;
- (NSDictionary *)stringFromDictionary:(NSDictionary *)arg0;
- (NSArray *)stringFromArray:(NSArray *)arg0;
- (NSString *)stringFromNull:(id)arg0;
- (NSString *)stringFromString:(NSString *)arg0;

@end
