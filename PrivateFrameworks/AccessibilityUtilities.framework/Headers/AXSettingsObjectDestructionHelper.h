/* Runtime dump - AXSettingsObjectDestructionHelper
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSettingsObjectDestructionHelper : NSObject
{
    void * _listenerAddress;
    NSMutableArray * _selectorKeys;
}

- (void)dealloc;
- (AXSettingsObjectDestructionHelper *)initWithListenerAddress:(void *)arg0;
- (void)addSelectorKey:(SEL)arg0;

@end
