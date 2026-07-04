/* Runtime dump - PLCloudScenarioProducer
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudScenarioProducer : NSObject
{
    NSArray * _triggers;
    <PLCloudScenarioConsumer> * _consumer;
}

@property (retain, nonatomic) NSArray * triggers;
@property (retain, nonatomic) <PLCloudScenarioConsumer> * consumer;

- (void)dealloc;
- (void)activate;
- (NSArray *)triggers;
- (void)subscribeToTriggerType:(unsigned int)arg0 withSelector:(SEL)arg1;
- (void)unsubscribeFromTriggerType:(unsigned int)arg0;
- (void)setTriggers:(NSArray *)arg0;
- (<PLCloudScenarioConsumer> *)consumer;
- (void)setConsumer:(<PLCloudScenarioConsumer> *)arg0;

@end
