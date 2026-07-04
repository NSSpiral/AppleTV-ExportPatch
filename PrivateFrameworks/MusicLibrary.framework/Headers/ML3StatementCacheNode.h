/* Runtime dump - ML3StatementCacheNode
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StatementCacheNode : NSObject
{
    NSObject<NSCopying> * _dictionaryKey;
    ML3StatementCacheNode * _next;
}

@property (copy, nonatomic) NSObject<NSCopying> * dictionaryKey;
@property (retain, nonatomic) ML3StatementCacheNode * next;

- (ML3StatementCacheNode *)next;
- (NSString *)description;
- (void).cxx_destruct;
- (ML3StatementCacheNode *)initWithDictionaryKey:(NSObject<NSCopying> *)arg0;
- (NSObject<NSCopying> *)dictionaryKey;
- (void)setDictionaryKey:(NSObject<NSCopying> *)arg0;
- (void)setNext:(ML3StatementCacheNode *)arg0;

@end
