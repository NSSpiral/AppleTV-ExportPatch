/* Runtime dump - ML3DatabaseStatementCache
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseStatementCache : NSObject
{
    NSMutableDictionary * _statementsDictionary;
    ML3StatementCacheList * _nodeList;
    unsigned int _cacheSize;
}

@property (readonly, nonatomic) unsigned int cacheSize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearCache;
- (ML3DatabaseStatementCache *)initWithCacheSize:(unsigned int)arg0;
- (id)cachedStatementForSQL:(id)arg0;
- (id)allStatements;
- (void)cacheStatement:(id)arg0;
- (unsigned int)cacheSize;

@end
