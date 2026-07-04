/* Runtime dump - BRApplianceCategory
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRApplianceCategory : NSObject
{
    char _followsStoreCategory;
    NSMutableDictionary * _info;
    NSDictionary * _storeDescription;
}

@property (retain) NSDictionary * storeDescription;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) float preferredOrder;
@property (nonatomic) char isDefaultCategory;
@property (retain, nonatomic) id identifier;
@property (retain, nonatomic) NSInvocation * action;
@property (nonatomic) char isStoreCategory;
@property (nonatomic) char followsStoreCategory;
@property (nonatomic) char isStoreDependent;
@property (nonatomic) char shouldDisplayOnStartup;
@property (retain, nonatomic) NSString * textEntryHistoryStorageClient;
@property (retain, nonatomic) NSString * textEntryHistoryStorageBehavior;
@property (retain, nonatomic) NSArray * textEntryHistoryDisplayClients;
@property (retain, nonatomic) NSArray * textEntryHistoryDisplayBehaviors;
@property (retain) NSMutableDictionary * info;

+ (NSString *)categoryWithName:(NSString *)arg0 identifier:(NSString *)arg1 preferredOrder:(float)arg2;
+ (NSString *)categoryWithDescription:(NSString *)arg0;

- (char)isDefaultCategory;
- (char)isStoreCategory;
- (NSDictionary *)storeDescription;
- (NSString *)textEntryHistoryStorageClient;
- (NSString *)textEntryHistoryStorageBehavior;
- (NSArray *)textEntryHistoryDisplayClients;
- (NSArray *)textEntryHistoryDisplayBehaviors;
- (float)preferredOrder;
- (void)setIsStoreDependent:(char)arg0;
- (void)setPreferredOrder:(float)arg0;
- (void)setIsDefaultCategory:(char)arg0;
- (void)setIsStoreCategory:(char)arg0;
- (void)setFollowsStoreCategory:(char)arg0;
- (char)followsStoreCateogry;
- (char)isStoreDependent;
- (void)setShouldDisplayOnStartup:(char)arg0;
- (char)shouldDisplayOnStartup;
- (void)setTextEntryHistoryStorageClient:(NSString *)arg0;
- (void)setTextEntryHistoryStorageBehavior:(NSString *)arg0;
- (void)setTextEntryHistoryDisplayClients:(NSArray *)arg0;
- (void)setTextEntryHistoryDisplayBehaviors:(NSArray *)arg0;
- (void)setStoreDescription:(NSDictionary *)arg0;
- (char)followsStoreCategory;
- (BRApplianceCategory *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (NSInvocation *)action;
- (void)setIdentifier:(NSString *)arg0;
- (void)setAction:(NSInvocation *)arg0;
- (NSMutableDictionary *)info;
- (void).cxx_destruct;
- (void)setInfo:(NSMutableDictionary *)arg0;

@end
