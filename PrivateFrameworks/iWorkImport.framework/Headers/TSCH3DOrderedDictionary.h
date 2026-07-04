/* Runtime dump - TSCH3DOrderedDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration>
{
    NSMutableDictionary * mStore;
    NSMutableArray * mKeyOrder;
}

@property (readonly, nonatomic) unsigned int count;

+ (NSObject *)dictionaryWithMutableDictionaryStore:(NSObject *)arg0;
+ (NSDictionary *)dictionary;

- (TSCH3DOrderedDictionary *)initWithMutableDictionaryStore:(NSObject *)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;

@end
