/* Runtime dump - ABDelayedNotificationSender
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDelayedNotificationSender : NSObject
{
    struct __CFArray * _delegatesForDelayedNotification;
    NSMutableArray * _delayedNotifications;
    struct __CFDictionary * _delayedNotificationInfos;
}

- (char)containsDelegate:(NSObject *)arg0;
- (void)addDelayedNotification:(NSNotification *)arg0 withInfo:(struct __CFDictionary *)arg1 allowDuplicateNotification:(char)arg2;
- (void)addDelegate:(NSObject *)arg0;
- (void)removeDelegate:(NSObject *)arg0 andDeliverDelayedNotifications:(char)arg1;
- (void)addDelayedNotification:(NSNotification *)arg0;
- (void)dealloc;

@end
