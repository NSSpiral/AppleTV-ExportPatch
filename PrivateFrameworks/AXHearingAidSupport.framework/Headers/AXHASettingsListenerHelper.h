/* Runtime dump - AXHASettingsListenerHelper
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHASettingsListenerHelper : NSObject
{
    void * _listenerAddress;
    NSMutableArray * _selectorKeys;
}

- (void)dealloc;
- (AXHASettingsListenerHelper *)initWithListenerAddress:(void *)arg0;
- (void)addSelectorKey:(SEL)arg0;

@end
