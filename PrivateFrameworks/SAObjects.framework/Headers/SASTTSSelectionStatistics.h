/* Runtime dump - SASTTSSelectionStatistics
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * completionType;
@property (copy, nonatomic) NSString * interactionId;
@property (copy, nonatomic) NSArray * listenedItems;
@property (nonatomic) int selectedItemIndex;
@property (copy, nonatomic) NSString * sessionId;
@property (copy, nonatomic) NSArray * timesListened;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)tTSSelectionStatistics;
+ (NSDictionary *)tTSSelectionStatisticsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)sessionId;
- (void)setSessionId:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)interactionId;
- (void)setInteractionId:(NSString *)arg0;
- (NSString *)completionType;
- (void)setCompletionType:(NSString *)arg0;
- (NSArray *)listenedItems;
- (void)setListenedItems:(NSArray *)arg0;
- (int)selectedItemIndex;
- (void)setSelectedItemIndex:(int)arg0;
- (NSArray *)timesListened;
- (void)setTimesListened:(NSArray *)arg0;

@end
