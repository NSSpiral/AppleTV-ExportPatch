/* Runtime dump - TSUCustomCallBackDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCustomCallBackDictionary : NSMutableDictionary
{
    struct __CFDictionary * mDictionary;
}

- (void)getObjects:(id *)arg0 andKeys:(id *)arg1;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (TSUCustomCallBackDictionary *)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (TSUCustomCallBackDictionary *)initWithCapacity:(unsigned int)arg0;
- (TSUCustomCallBackDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (TSUCustomCallBackDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (TSUCustomCallBackDictionary *)initWithCFDictionary:(struct __CFDictionary *)arg0;
- (void)setObject:(NSObject *)arg0 forUncopiedKey:(NSString *)arg1;
- (TSUCustomCallBackDictionary *)initWithCapacity:(unsigned int)arg0 keyCallBacks:(struct ? *)arg1 valueCallBacks:(struct ?)arg2;

@end
