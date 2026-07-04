/* Runtime dump - PLMultiKeyEntry
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLMultiKeyEntry : PLEntry
{
    NSMutableDictionary * _multiKeys;
}

@property (retain) NSMutableDictionary * multiKeys;

+ (void)load;

- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (PLMultiKeyEntry *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)multiKeys;
- (NSString *)keysForSubKey:(NSString *)arg0 ofSubKeyType:(NSObject *)arg1;
- (NSString *)objectsForSubKey:(NSString *)arg0 ofSubKeyType:(NSObject *)arg1;
- (void)setMultiKeys:(NSMutableDictionary *)arg0;
- (id)serializedForJSON;

@end
