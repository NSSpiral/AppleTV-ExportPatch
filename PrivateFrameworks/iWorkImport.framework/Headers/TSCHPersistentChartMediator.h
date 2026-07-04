/* Runtime dump - TSCHPersistentChartMediator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider>
{
    TSCHChartMediator * mMediator;
}

@property (readonly, retain, nonatomic) TSCHChartMediator * mediator;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)saveToArchive:(struct ChartMediatorArchive *)arg0;
- (TSCHChartMediator *)mediator;
- (void)loadFromArchive:(struct ChartMediatorArchive *)arg0;
- (TSCHPersistentChartMediator *)initWithContext:(NSObject *)arg0 andMediator:(id)arg1;
- (void)dealloc;

@end
