/* Runtime dump - WKAccessibilityWebPageObject
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase
{
    NSData * _remoteTokenData;
}

@property (retain, nonatomic) NSData * remoteTokenData;

- (void)dealloc;
- (WKAccessibilityWebPageObject *)init;
- (void)setRemoteTokenData:(NSData *)arg0;
- (void)_accessibilityCategoryInstalled:(id)arg0;
- (NSData *)remoteTokenData;
- (double)pageScale;
- (id)accessibilityHitTest:(struct CGPoint)arg0;

@end
