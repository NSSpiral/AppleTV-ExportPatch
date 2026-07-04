/* Runtime dump - DAMailboxSearchQuery
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAMailboxSearchQuery : DASearchQuery
{
    char _allOrNone;
    char _deepTraversal;
    char _rebuildResults;
    NSString * _collectionID;
    int _bodyType;
    NSDate * _priorToDate;
    int _MIMESupport;
    long long _truncationSize;
}

@property (retain, nonatomic) NSString * collectionID;
@property (nonatomic) int bodyType;
@property (nonatomic) long long truncationSize;
@property (nonatomic) char allOrNone;
@property (retain, nonatomic) NSDate * priorToDate;
@property (nonatomic) int MIMESupport;
@property (nonatomic) char deepTraversal;
@property (nonatomic) char rebuildResults;

+ (NSString *)mailboxSearchQueryWithSearchString:(NSString *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;

- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)collectionID;
- (NSDate *)priorToDate;
- (int)bodyType;
- (long long)truncationSize;
- (char)allOrNone;
- (int)MIMESupport;
- (char)deepTraversal;
- (char)rebuildResults;
- (DAMailboxSearchQuery *)initWithSearchString:(NSString *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (DAMailboxSearchQuery *)initWithDictionaryRepresentation:(NSDictionary *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (void)setAllOrNone:(char)arg0;
- (void)setRebuildResults:(char)arg0;
- (void)setBodyType:(int)arg0;
- (void)setCollectionID:(NSString *)arg0;
- (void)setMIMESupport:(int)arg0;
- (void)setTruncationSize:(long long)arg0;
- (void)setPriorToDate:(NSDate *)arg0;
- (void)setDeepTraversal:(char)arg0;

@end
