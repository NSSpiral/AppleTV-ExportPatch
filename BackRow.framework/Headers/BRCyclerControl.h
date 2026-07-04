/* Runtime dump - BRCyclerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface BRCyclerControl : BRControl
{
    <BRProvider> * _provider;
    double _interval;
    double _startInterval;
    long _index;
    long _startIndex;
    char _returnsToStart;
    NSTimer * _crossFadeTimer;
    BRControl * _control;
    NSDictionary * _subcontrolMetadata;
    char _initialDisplayOccurred;
    char _startsOnActivate;
    <BRCyclerDataSource> * _dataSource;
    <BRCyclerDelegate> * _delegate;
}

@property (nonatomic) <BRCyclerDataSource> * dataSource;
@property (nonatomic) <BRCyclerDelegate> * delegate;
@property (nonatomic) char startsOnActivate;

+ (NSObject *)cyclerWithProvider:(<BRProvider> *)arg0;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)setStartInterval:(double)arg0;
- (void)setReturnsToStart:(char)arg0;
- (void)controlWasActivated;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (void)cycle;
- (void)_providerUpdated:(id)arg0;
- (NSString *)preferredActionForKey:(NSString *)arg0;
- (void)_crossFade:(id)arg0;
- (void)_startCrossFadeTimer;
- (void)_stopCrossFadeTimer;
- (void)_returnToStart;
- (char)returnsToStart;
- (double)startInterval;
- (void)setSubcontrolMetaData:(NSData *)arg0;
- (NSDictionary *)subcontrolMetadata;
- (char)startsOnActivate;
- (void)setStartsOnActivate:(char)arg0;
- (void)dealloc;
- (void)setDataSource:(<BRCyclerDataSource> *)arg0;
- (void)setDelegate:(<BRCyclerDelegate> *)arg0;
- (BRCyclerControl *)init;
- (void)reload;
- (<BRCyclerDataSource> *)dataSource;
- (<BRCyclerDelegate> *)delegate;
- (void)_commonInit;
- (NSString *)accessibilityLabel;
- (void)start;
- (void)setInterval:(double)arg0;
- (double)interval;
- (BRCyclerControl *)initWithProvider:(<BRProvider> *)arg0;
- (long)startIndex;
- (void)setStartIndex:(long)arg0;

@end
