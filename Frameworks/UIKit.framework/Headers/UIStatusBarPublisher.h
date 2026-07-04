/* Runtime dump - UIStatusBarPublisher
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarPublisher : NSObject
{
    struct __CFMachPort * _machPort;
    int _styleOverrides;
    NSMutableSet * _statusBarItems;
}

- (void)dealloc;
- (int)addStyleOverrides:(int)arg0;
- (int)removeStyleOverrides:(int)arg0;
- (void)addStatusBarItem:(int)arg0;
- (void)removeStatusBarItem:(int)arg0;
- (unsigned int)publisherPort;
- (UIStatusBarPublisher *)initWithCFMachPort:(struct __CFMachPort *)arg0;
- (NSMutableSet *)statusBarItems;
- (int)styleOverrides;

@end
