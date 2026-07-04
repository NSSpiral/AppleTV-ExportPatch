/* Runtime dump - BRThresholdControlMediator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControlMediator.h>

@class BRProviderGroup;
@interface BRThresholdControlMediator : BRControlMediator
{
    BRProviderGroup * _dataProviderGroup;
    int _activeThreshold;
}

- (void)_refreshActiveState;
- (void)setDataProviders:(id)arg0;
- (void)setActiveThreshold:(int)arg0;
- (void)dealloc;
- (void)setDataProvider:(NSObject *)arg0;

@end
