/* Runtime dump - CPLRUDictionary
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPLRUDictionary : NSObject
{
    struct __CFDictionary * _dictionary;
    unsigned int _maxCount;
    CPLRUDictionaryNode * _head;
    CPLRUDictionaryNode * _tail;
}

+ (CPLRUDictionary *)dictionaryWithMaximumCapacity:(unsigned int)arg0;

- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (void)removeAllObjects;
- (NSString *)description;
- (void)removeObjectForKey:(NSString *)arg0;
- (CPLRUDictionary *)initWithMaximumCapacity:(unsigned int)arg0;
- (void)_removeNodeFromLinkedList:(NSArray *)arg0;
- (void)_addNodeToFront:(id)arg0;
- (void)_removeNode:(NSObject *)arg0;
- (void)_moveNodeToFront:(id)arg0;
- (unsigned int)linkedListCount;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;
- (id)objectForKeyWithoutAffectingLRU:(id)arg0;

@end
