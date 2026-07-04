/* Runtime dump - ATVAppController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol IKAppContextDelegate;
@protocol IKAppDeviceConfig;
@protocol IKAppNavigationController;

@class ATVAppBackgroundPlayer, ATVAppInfo, BRControllerStack;
@interface ATVAppController : BRViewController <IKAppContextDelegate, IKAppDeviceConfig, IKAppNavigationController>
{
    ATVAppInfo * _appInfo;
    BRControllerStack * _appStack;
    IKAppContext * _appContext;
    ATVAppBackgroundPlayer * _bgPlayer;
    IKDOMSchema * _schema;
}

@property (readonly, retain, nonatomic) ATVAppInfo * appInfo;
@property (retain, nonatomic) BRControllerStack * appStack;
@property (retain, nonatomic) IKAppContext * appContext;
@property (retain, nonatomic) ATVAppBackgroundPlayer * bgPlayer;
@property (retain, nonatomic) IKDOMSchema * schema;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_stackDidGetBankrupt:(id)arg0;
- (void)wasPushed;
- (char)shouldAllowRemoteInspectionForAppContext;
- (BRControllerStack *)appStack;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (ATVAppBackgroundPlayer *)bgPlayer;
- (char)_showScreenSaverPromptWithScreenSaverName:(NSString *)arg0;
- (char)isTimeZoneSet;
- (ATVAppController *)initWithAppInfo:(ATVAppInfo *)arg0;
- (void)setAppStack:(BRControllerStack *)arg0;
- (void)setBgPlayer:(ATVAppBackgroundPlayer *)arg0;
- (void)dealloc;
- (ATVAppController *)init;
- (NSTimeZone *)timeZone;
- (void).cxx_destruct;
- (NSString *)systemLanguage;
- (IKDOMSchema *)schema;
- (void)setSchema:(IKDOMSchema *)arg0;
- (void)removeDocument:(IKAppDocument *)arg0;
- (NSArray *)documents;
- (ATVAppInfo *)appInfo;
- (IKAppContext *)appContext;
- (id /* <IKAppDeviceConfig> */)deviceConfigForContext:(IKAppContext *)arg0;
- (id /* <IKAppNavigationController> */)navigationControllerForContext:(IKAppContext *)arg0;
- (void)appContext:(IKAppContext *)arg0 evaluateAppJavaScriptInContext:(JSContext *)arg1;
- (void)setAppContext:(IKAppContext *)arg0;
- (void)appContext:(IKAppContext *)arg0 didFailWithError:(NSError *)arg1;
- (char)appContext:(IKAppContext *)arg0 validateDOMDocument:(IKDOMDocument *)arg1 inContext:(JSContext *)arg2 error:(id *)arg3;
- (void)appContext:(IKAppContext *)arg0 didStartWithOptions:(NSDictionary *)arg1;
- (void)appContext:(IKAppContext *)arg0 didStopWithOptions:(NSDictionary *)arg1;
- (NSString *)storeFrontCountryCode;
- (unsigned int)preferredVideoFormat;
- (unsigned int)preferredVideoPreviewFormat;
- (void)pushDocument:(IKAppDocument *)arg0 options:(NSDictionary *)arg1;
- (void)insertDocument:(IKAppDocument *)arg0 beforeDocument:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;
- (void)replaceDocument:(IKAppDocument *)arg0 withDocument:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;
- (void)popDocument;
- (void)popToDocument:(IKAppDocument *)arg0;
- (void)popToRootDocument;
- (struct CGSize)screenSize;

@end
