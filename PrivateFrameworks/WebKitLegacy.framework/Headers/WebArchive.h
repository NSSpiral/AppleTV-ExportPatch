/* Runtime dump - WebArchive
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebArchive : NSObject <NSCoding, NSCopying>
{
    WebArchivePrivate * _private;
}

@property (readonly, nonatomic) WebResource * mainResource;
@property (readonly, copy, nonatomic) NSArray * subresources;
@property (readonly, copy, nonatomic) NSArray * subframeArchives;
@property (readonly, copy, nonatomic) NSData * data;

+ (NSObject *)bundleForClass;

- (void)dealloc;
- (WebArchive *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (WebArchive *)init;
- (WebArchive *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (WebArchive *)initWithData:(NSData *)arg0;
- (NSArray *)subresources;
- (WebArchive *)initWithMainResource:(WebResource *)arg0 subresources:(NSArray *)arg1 subframeArchives:(NSArray *)arg2;
- (WebResource *)mainResource;
- (NSArray *)subframeArchives;
- (WebArchive *)_initWithCoreLegacyWebArchive:(struct PassRefPtr<WebCore::LegacyWebArchive>)arg0;
- (struct LegacyWebArchive *)_coreLegacyWebArchive;

@end
