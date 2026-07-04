/* Runtime dump - TDRenditionsDistiller
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionsDistiller : NSObject
{
    CoreThemeDocument * document;
    NSMutableArray * renditionInQueue;
    NSMutableArray * psiDataInfoOutQueue;
    NSConditionLock * inQueueLock;
    NSConditionLock * outQueueLock;
    char shouldCompressCSIDataFlag;
    char noMoreCSIDataInfo;
    char noMoreRenditions;
    TDLogger * _logger;
}

@property (retain) TDLogger * logger;

- (void)dealloc;
- (TDRenditionsDistiller *)initWithDocument:(CoreThemeDocument *)arg0 shouldCompressCSIDataFlag:(char)arg1;
- (void)detachDistillationThread;
- (void)enqueueAbortFlag;
- (void)enqueueRenditionSpec:(NSObject *)arg0;
- (void)enqueueLastRenditionFlag;
- (NSOperationQueue *)nextCSIDataInfoFromQueue;
- (void)_distill:(id)arg0;
- (void)_enqueueOnQueue:(NSObject *)arg0 withQueueLock:(NSLock *)arg1 object:(NSObject *)arg2;
- (void)_enqueueOnOutQueueTheObject:(NSObject *)arg0;
- (NSOperationQueue *)_nextObjectFromInQueue;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueCSIDataInfo:(NSDictionary *)arg0;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueOnInQueueTheObject:(NSObject *)arg0;
- (TDLogger *)logger;
- (void)setLogger:(TDLogger *)arg0;

@end
