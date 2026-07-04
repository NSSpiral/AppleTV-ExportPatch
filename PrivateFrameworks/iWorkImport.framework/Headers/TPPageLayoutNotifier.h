/* Runtime dump - TPPageLayoutNotifier
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver>
{
    TPPageController * _pageController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TPPageLayoutNotifier *)initWithPageController:(TPPageController *)arg0;
- (void)pageController:(TPPageController *)arg0 didLayoutPageAtIndex:(unsigned int)arg1 sectionIndex:(unsigned int)arg2 syncing:(char)arg3;
- (void)dealloc;
- (void)teardown;

@end
