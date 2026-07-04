/* Runtime dump - MPMediaEntityResultSetArray
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying>
{
    <MPMediaLibraryResultSet> * _resultSet;
    Class _entityClass;
    MPWeakRef * _libraryWeakRef;
    MPMediaQuerySectionInfo * _sectionInfo;
    NSMutableArray * _entities;
    NSObject<OS_dispatch_queue> * _entitiesQueue;
    MPMediaQueryCriteria * _queryCriteria;
    long long _revision;
}

@property (readonly, nonatomic) <MPMediaLibraryResultSet> * resultSet;

- (MPMediaQuerySectionInfo *)sectionInfo;
- (MPMediaEntityResultSetArray *)initWithResultSet:(<MPMediaLibraryResultSet> *)arg0 queryCriteria:(MPMediaQueryCriteria *)arg1 entityType:(int)arg2 library:(NSObject *)arg3;
- (char)isQueryResultSetInvalidated;
- (<MPMediaLibraryResultSet> *)resultSet;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (MPMediaEntityResultSetArray *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
