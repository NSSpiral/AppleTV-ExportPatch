/* Runtime dump - ATVJSProxyDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCatalogApplianceController, ATVJSContext, BRController;
@interface ATVJSProxyDocument : NSObject
{
    BRController * _controller;
    ATVJSContext * _atvContext;
    ATVCatalogApplianceController * _catalogApplianceController;
    char _shouldCallOnCancel;
    char _wasLoadCancelled;
}

@property (retain, nonatomic) ATVCatalogApplianceController * catalogApplianceController;
@property (nonatomic) char shouldCallOnCancel;
@property (nonatomic) char wasLoadCancelled;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;

- (void)setCatalogApplianceController:(ATVCatalogApplianceController *)arg0;
- (ATVCatalogApplianceController *)catalogApplianceController;
- (char)shouldCallOnCancel;
- (void)setShouldCallOnCancel:(char)arg0;
- (char)wasLoadCancelled;
- (void)setWasLoadCancelled:(char)arg0;
- (void)dealloc;
- (ATVJSProxyDocument *)init;

@end
