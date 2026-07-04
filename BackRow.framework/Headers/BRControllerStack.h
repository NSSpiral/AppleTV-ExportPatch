/* Runtime dump - BRControllerStack
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRController, BREvent;
@interface BRControllerStack : BRControl
{
    NSMutableArray * _stack;
    NSMutableArray * _transactions;
    NSMutableArray * _currentStackPath;
    <BRViewHosting> * _controlHost;
    char _processingTransactions;
}

@property (retain, nonatomic) <BRViewHosting> * controlHost;

- (void)popToController:(BRController *)arg0;
- (char)brEventAction:(BREvent *)arg0;
- (void)replaceAllControllersWithController:(BRController *)arg0;
- (void)removeController:(BRController *)arg0;
- (void)layoutSubcontrols;
- (NSArray *)controllers;
- (BRController *)peekController;
- (void)swapController:(BRController *)arg0;
- (void)popController;
- (id)controllersLabeled:(id)arg0;
- (void)popToControllerWithLabel:(NSString *)arg0;
- (NSObject *)stackPathForController:(BRController *)arg0;
- (void)setControlHost:(<BRViewHosting> *)arg0;
- (void)updateStackPathForController:(BRController *)arg0 previousIdentifier:(NSString *)arg1;
- (NSObject *)controllersOfClass:(Class)arg0;
- (void)popToControllerOfClass:(Class)arg0;
- (id)_checkSubstitutions:(id)arg0;
- (void)_addTransaction:(NSObject *)arg0;
- (void)replaceControllersAboveLabel:(NSString *)arg0 withController:(BRController *)arg1;
- (<BRViewHosting> *)controlHost;
- (void)_processPushTransaction:(NSObject *)arg0;
- (void)_processPopTransaction:(NSObject *)arg0;
- (void)_processSwapTransaction:(NSObject *)arg0;
- (void)_processPopToTransaction:(NSObject *)arg0;
- (void)_processPopToClassTransaction:(NSObject *)arg0;
- (void)_processPopToLabelTransaction:(NSObject *)arg0;
- (void)_processRemoveTransaction:(NSObject *)arg0;
- (void)_processReplaceAllTransaction:(NSObject *)arg0;
- (void)_processReplaceControllersAboveLabelTransaction:(NSObject *)arg0;
- (void)_updateStackPathForPushingController:(BRController *)arg0;
- (void)_setContent:(NSObject *)arg0 direction:(int)arg1 oldTransition:(NSObject *)arg2;
- (void)_performDepthLimitedCullingForController:(BRController *)arg0;
- (void)_updateStackPathForPoppingController:(BRController *)arg0;
- (void)dealloc;
- (int)count;
- (BRControllerStack *)init;
- (NSString *)accessibilityLabel;
- (void)_processTransactions;
- (BRController *)rootController;
- (void)pushController:(BRController *)arg0;

@end
