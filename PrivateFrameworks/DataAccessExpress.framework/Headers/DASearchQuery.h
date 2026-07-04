/* Runtime dump - DASearchQuery
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DASearchQuery : NSObject
{
    NSString * _searchString;
    int _timeLimit;
    <DASearchQueryConsumer> * _consumer;
    NSString * _searchID;
    int _state;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSString * searchString;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) int timeLimit;
@property (weak, nonatomic) <DASearchQueryConsumer> * consumer;
@property (copy, nonatomic) NSString * searchID;
@property (nonatomic) int state;

+ (NSString *)searchQueryWithSearchString:(NSString *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;

- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)searchString;
- (struct _NSRange)range;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setSearchString:(NSString *)arg0;
- (void)setRange:(struct _NSRange)arg0;
- (void)sendFinishedToConsumerWithError:(NSError *)arg0;
- (void)sendResultsToConsumer:(NSObject *)arg0;
- (void)setSearchID:(NSString *)arg0;
- (NSString *)searchID;
- (DASearchQuery *)initWithSearchString:(NSString *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (void)setTimeLimit:(int)arg0;
- (int)timeLimit;
- (DASearchQuery *)initWithDictionaryRepresentation:(NSDictionary *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (char)isQueryRunning;
- (unsigned int)maxResults;
- (void)setMaxResults:(unsigned int)arg0;
- (<DASearchQueryConsumer> *)consumer;
- (void)setConsumer:(<DASearchQueryConsumer> *)arg0;

@end
