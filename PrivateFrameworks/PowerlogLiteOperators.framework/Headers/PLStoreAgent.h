/* Runtime dump - PLStoreAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLStoreAgent : PLAgent <SSEventMonitorDelegate>
{
    SSEventMonitor * _monitor;
    NSMutableDictionary * _currentDownloads;
}

@property (retain) SSEventMonitor * monitor;
@property (retain) NSMutableDictionary * currentDownloads;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)load;
+ (PLStoreAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;

- (PLStoreAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (SSEventMonitor *)monitor;
- (void)logAssetDownloadWithState:(NSObject *)arg0 info:(NSDictionary *)arg1;
- (NSMutableDictionary *)currentDownloads;
- (void)logAppUpdatePollWithState:(NSObject *)arg0;
- (void)eventMonitor:(SSEventMonitor *)arg0 receivedEventWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)setMonitor:(SSEventMonitor *)arg0;
- (void)setCurrentDownloads:(NSMutableDictionary *)arg0;

@end
