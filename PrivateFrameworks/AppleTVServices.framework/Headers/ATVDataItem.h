/* Runtime dump - ATVDataItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataItem : NSObject <ATVDataBaseItem>
{
    NSMutableDictionary * _metadataDict;
    NSMutableDictionary * _mutatedDict;
    NSMutableDictionary * _transactionDict;
    ATVDataClient * _dataClient;
    NSMutableDictionary * _playbackMetadataDict;
}

@property (retain) NSMutableDictionary * playbackMetadataDict;
@property (retain) NSMutableDictionary * metadataDict;
@property (retain) NSMutableDictionary * mutatedDict;
@property (retain, nonatomic) NSMutableDictionary * transactionDict;
@property (weak) ATVDataClient * dataClient;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (ATVDataClient *)dataClient;
- (void)setValueWithoutTransaction:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (ATVDataItem *)initWithDataClient:(ATVDataClient *)arg0;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (char)isDataItem;
- (void)setDataClient:(ATVDataClient *)arg0;
- (NSMutableDictionary *)metadataDict;
- (void)setMetadataDict:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)mutatedDict;
- (void)beginUpdateTransaction;
- (void)commitUpdateTransactionWithOptions:(NSDictionary *)arg0;
- (void)setTransactionDict:(NSMutableDictionary *)arg0;
- (void)setMutatedDict:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)transactionDict;
- (NSMutableDictionary *)playbackMetadataDict;
- (void)setPlaybackMetadataDict:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;

@end
