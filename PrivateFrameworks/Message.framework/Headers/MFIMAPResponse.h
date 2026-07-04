/* Runtime dump - MFIMAPResponse
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPResponse : NSObject
{
    id _responseType;
    NSString * _tag;
    NSDictionary * _keyValuePairs;
    id _data;
    MFIMAPResponseConsumer * _responseConsumer;
}

@property (retain, nonatomic) MFIMAPResponseConsumer * responseConsumer;

- (void)setFlags:(unsigned long long)arg0;
- (int)responseCode;
- (NSHashTable *)fetchResults;
- (void)setFetchResults:(NSHashTable *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSString *)tag;
- (void)setTag:(NSString *)arg0;
- (MFIMAPResponse *)initWithString:(NSString *)arg0;
- (NSData *)userData;
- (void)setCapabilities:(OBCapabilities *)arg0;
- (void)setResponseType:(int)arg0;
- (void)setServerInfo:(NSDictionary *)arg0;
- (VCCapabilities *)capabilities;
- (struct ?)flags;
- (NSObject *)fetchResultWithType:(int)arg0;
- (char)isUntagged;
- (NSDictionary *)serverInfo;
- (NSString *)userString;
- (NSDictionary *)responseInfo;
- (MFIMAPResponse *)initWithConnection:(NSURLConnection *)arg0 responseConsumer:(MFIMAPResponseConsumer *)arg1;
- (unsigned int)mailboxAttributes;
- (id)quotas;
- (void)setUidFlagsChange:(int)arg0;
- (void)setUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)setFlagsFetchResult:(NSObject *)arg0;
- (void)setSearchResults:(NSArray *)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)uids;
- (char)isResponseWithCode:(int)arg0;
- (NSArray *)statusEntries;
- (NSArray *)quotaRootNames;
- (NSString *)quotaRootName;
- (int)uidFlagsChange;
- (NSObject *)flagsFetchResult;
- (NSString *)responseName;
- (void)setResponseConsumer:(MFIMAPResponseConsumer *)arg0;
- (char)isAlertResponse;
- (void)setUserData:(NSData *)arg0 responseCode:(int)arg1 responseInfo:(NSDictionary *)arg2;
- (void)setMailboxName:(NSString *)arg0 statusEntries:(NSArray *)arg1;
- (void)setMailboxAttributes:(unsigned int)arg0 separator:(SBJsonStreamParserStateObjectSeparator *)arg1 mailboxName:(NSString *)arg2 extraAttributes:(NSDictionary *)arg3;
- (void)setMailboxName:(NSString *)arg0 quotaRootNames:(id)arg1;
- (void)setQuotaRootName:(NSString *)arg0 quotas:(id)arg1;
- (NSDictionary *)keyValuePairs;
- (void)setResponseName:(NSString *)arg0 parameters:(NSDictionary *)arg1;
- (MFIMAPResponseConsumer *)responseConsumer;
- (NSString *)permanentTag;
- (NSString *)mailboxName;
- (NSDictionary *)extraAttributes;
- (NSDictionary *)parameters;
- (void)setNumber:(unsigned long long)arg0;
- (unsigned long long)number;
- (NSArray *)searchResults;
- (int)responseType;
- (NSString *)separator;

@end
