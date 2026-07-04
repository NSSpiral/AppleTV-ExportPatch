/* Runtime dump - PLCloudSchedulerConfiguration
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSchedulerConfiguration : NSObject
{
    NSArray * _triggers;
    NSArray * _scenarioProducers;
    unsigned int _concurrencyLevel;
}

@property (retain, nonatomic) NSArray * triggers;
@property (retain, nonatomic) NSArray * scenarioProducers;
@property (nonatomic) unsigned int concurrencyLevel;

- (NSArray *)triggers;
- (void)setTriggers:(NSArray *)arg0;
- (NSArray *)scenarioProducers;
- (void)setScenarioProducers:(NSArray *)arg0;
- (unsigned int)concurrencyLevel;
- (void)setConcurrencyLevel:(unsigned int)arg0;

@end
