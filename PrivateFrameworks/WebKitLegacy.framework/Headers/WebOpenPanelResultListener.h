/* Runtime dump - WebOpenPanelResultListener
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener>
{
    struct FileChooser * _chooser;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancel;
- (void)chooseFilename:(NSString *)arg0 displayString:(NSString *)arg1 iconImage:(struct CGImage *)arg2;
- (void)chooseFilenames:(id)arg0 displayString:(NSString *)arg1 iconImage:(struct CGImage *)arg2;
- (WebOpenPanelResultListener *)initWithChooser:(struct PassRefPtr<WebCore::FileChooser>)arg0;
- (void)chooseFilename:(NSString *)arg0;
- (void)chooseFilenames:(id)arg0;

@end
