/* Runtime dump - WebResourcePrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebResourcePrivate : NSObject
{
    struct ArchiveResource * coreResource;
}

+ (void)initialize;

- (void)dealloc;
- (WebResourcePrivate *)init;
- (void)finalize;
- (WebResourcePrivate *)initWithCoreResource:(struct PassRefPtr<WebCore::ArchiveResource>)arg0;

@end
