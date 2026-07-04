/* Runtime dump - OBSplashSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl, OBPrivacySplashController;
@interface OBSplashSelectionHandler : NSObject <BRSelectionHandler>
{
    OBPrivacySplashController * _splashController;
}

@property (weak, nonatomic) OBPrivacySplashController * splashController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (void)setSplashController:(OBPrivacySplashController *)arg0;
- (OBPrivacySplashController *)splashController;
- (void).cxx_destruct;

@end
