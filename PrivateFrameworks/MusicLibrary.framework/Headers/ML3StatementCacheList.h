/* Runtime dump - ML3StatementCacheList
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StatementCacheList : NSObject
{
    ML3StatementCacheNode * _firstNode;
    ML3StatementCacheNode * _lastNode;
}

@property (readonly, nonatomic) ML3StatementCacheNode * firstNode;
@property (readonly, nonatomic) ML3StatementCacheNode * lastNode;
@property (readonly, nonatomic) unsigned int count;

- (unsigned int)count;
- (NSString *)description;
- (ML3StatementCacheNode *)firstNode;
- (void).cxx_destruct;
- (void)promoteNodeWithDictionaryKey:(NSString *)arg0;
- (void)appendNode:(NSObject *)arg0;
- (NSObject *)oldestNode;
- (void)deleteOldestNode;
- (void)deleteAllNodes;
- (ML3StatementCacheNode *)lastNode;

@end
