/* Runtime dump - WebArchivePrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebArchivePrivate : NSObject
{
    WebResource * cachedMainResource;
    NSArray * cachedSubresources;
    NSArray * cachedSubframeArchives;
    struct RefPtr<WebCore::LegacyWebArchive> coreArchive;
}

+ (void)initialize;

- (void)dealloc;
- (WebArchivePrivate *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (WebArchivePrivate *)initWithCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive>)arg0;
- (struct LegacyWebArchive *)coreArchive;
- (void)setCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive>)arg0;

@end
