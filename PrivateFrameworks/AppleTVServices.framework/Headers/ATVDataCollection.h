/* Runtime dump - ATVDataCollection
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataCollection : NSObject <ATVDataBaseItem>
{
    NSMutableDictionary * _metadataDict;
    ATVDataClient * _dataClient;
}

@property (retain) NSMutableDictionary * metadataDict;
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
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (ATVDataClient *)dataClient;
- (ATVDataCollection *)initWithDataClient:(ATVDataClient *)arg0;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (char)isDataItem;
- (void)setDataClient:(ATVDataClient *)arg0;
- (NSMutableDictionary *)metadataDict;
- (void)setMetadataDict:(NSMutableDictionary *)arg0;

@end
