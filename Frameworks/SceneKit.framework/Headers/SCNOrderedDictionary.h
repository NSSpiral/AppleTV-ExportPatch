/* Runtime dump - SCNOrderedDictionary
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNOrderedDictionary : NSObject
{
    NSMutableArray * _keys;
    NSMutableDictionary * _keyValues;
}

- (void)_setupFrom:(NSObject *)arg0;
- (void)applyFunction:(/* block */ id *)arg0 withContext:(void *)arg1;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (SCNOrderedDictionary *)copy;
- (void)removeAllObjects;
- (NSDictionary *)dictionary;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSArray *)allValues;
- (NSMutableArray *)keys;

@end
