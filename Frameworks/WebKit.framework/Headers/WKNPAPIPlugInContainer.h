/* Runtime dump - WKNPAPIPlugInContainer
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNPAPIPlugInContainer : NSObject <WKNPAPIPlugInContainer>
{
    struct NetscapePlugin * _plugin;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_invalidate;
- (char)openPlugInPreferencePane;
- (WKNPAPIPlugInContainer *)_initWithNetscapePlugin:(struct NetscapePlugin *)arg0;

@end
